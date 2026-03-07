__int64 DxgkEngGetRemoteDeviceCount()
{
  Gre::Base *v0; // rcx
  unsigned int RemoteDeviceCount; // ebx

  UserEnterUserCritSec();
  RemoteDeviceCount = DrvGetRemoteDeviceCount(v0);
  UserLeaveUserCritSec();
  return RemoteDeviceCount;
}
