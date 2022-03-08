// Generated by gencpp from file cartographer_ros_msgs/GetTrajectoryStatesRequest.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_GETTRAJECTORYSTATESREQUEST_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_GETTRAJECTORYSTATESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct GetTrajectoryStatesRequest_
{
  typedef GetTrajectoryStatesRequest_<ContainerAllocator> Type;

  GetTrajectoryStatesRequest_()
    {
    }
  GetTrajectoryStatesRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetTrajectoryStatesRequest_

typedef ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<std::allocator<void> > GetTrajectoryStatesRequest;

typedef boost::shared_ptr< ::cartographer_ros_msgs::GetTrajectoryStatesRequest > GetTrajectoryStatesRequestPtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::GetTrajectoryStatesRequest const> GetTrajectoryStatesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/GetTrajectoryStatesRequest";
  }

  static const char* value(const ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright 2018 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"\n"
;
  }

  static const char* value(const ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetTrajectoryStatesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::cartographer_ros_msgs::GetTrajectoryStatesRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_GETTRAJECTORYSTATESREQUEST_H
