execute_process(COMMAND "/home/appu/robotbot_ws/build/bumperbot_localization/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/appu/robotbot_ws/build/bumperbot_localization/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
