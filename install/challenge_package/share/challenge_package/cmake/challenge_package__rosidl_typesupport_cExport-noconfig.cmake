#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "challenge_package::challenge_package__rosidl_typesupport_c" for configuration ""
set_property(TARGET challenge_package::challenge_package__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(challenge_package::challenge_package__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libchallenge_package__rosidl_typesupport_c.so"
  IMPORTED_SONAME_NOCONFIG "libchallenge_package__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS challenge_package::challenge_package__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_challenge_package::challenge_package__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libchallenge_package__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)