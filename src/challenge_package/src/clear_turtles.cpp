#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "turtlesim/srv/kill.hpp"

using std::placeholders::_1;
 
// Create client that spawns in turtles, which will add turtles to a vector which will be used to remove the turtles
// Create client that will call the kill service 
// 

class KillTurtlesSubscriber : public rclcpp::Node 
{
  public:
    MinimalSubscriber()
    : Node("minimal_subscriber")
    {
    client = create_client<turtlesim::srv::Kill>("/kill");
      subscription_ = this->create_subscription<std_msgs::msg::String>(
      "kill_turtles", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    }

  private:
    string s[]<>
    void topic_callback(const std_msgs::msg::String & msg) const
    {   
    // here I would get the list of turtle names, where it would call turtlesim (how would I do this?)
    // 
      RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg.data.c_str());
    }
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;


};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<KillTurtlesSubscriber>());
  rclcpp::shutdown();
  return 0;
}