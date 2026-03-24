/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x1C0277460
 * Callers:
 *     <none>
 * Callees:
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C0162D10 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 */

__int64 __fastcall DxgkEngGetRemoteDeviceCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int RemoteDeviceCount; // ebx

  UserEnterUserCritSec(a1, a2, a3);
  RemoteDeviceCount = DrvGetRemoteDeviceCount();
  UserLeaveUserCritSec();
  return RemoteDeviceCount;
}
