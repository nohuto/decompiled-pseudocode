/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x1C0275260
 * Callers:
 *     <none>
 * Callees:
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01534F8 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 */

__int64 DxgkEngGetRemoteDeviceCount()
{
  unsigned int RemoteDeviceCount; // ebx

  UserEnterUserCritSec();
  RemoteDeviceCount = DrvGetRemoteDeviceCount();
  UserLeaveUserCritSec();
  return RemoteDeviceCount;
}
