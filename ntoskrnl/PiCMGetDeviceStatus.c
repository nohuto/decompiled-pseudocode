/*
 * XREFs of PiCMGetDeviceStatus @ 0x1406C3FD8
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReturnStatusResultData @ 0x1406C3F28 (PiCMReturnStatusResultData.c)
 *     PiCMReleaseObjectInputData @ 0x1406C7AC0 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C7B6C (PiCMCaptureObjectInputData.c)
 *     _CmGetDeviceStatus @ 0x1406C8624 (_CmGetDeviceStatus.c)
 */

__int64 __fastcall PiCMGetDeviceStatus(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  _DWORD *v6; // r14
  int v9; // ebx
  int DeviceStatus; // ecx
  SIZE_T Length; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch] BYREF
  __int128 v15; // [rsp+48h] [rbp-28h] BYREF
  __int128 v16; // [rsp+58h] [rbp-18h]
  int v17[2]; // [rsp+68h] [rbp-8h]

  v6 = (_DWORD *)a6;
  v14 = 0;
  v13 = 0;
  LODWORD(a6) = 0;
  *v6 = 0;
  v15 = 0LL;
  *(_QWORD *)v17 = 0LL;
  v16 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, &v15);
  if ( v9 >= 0 )
  {
    if ( (_QWORD)v16 && *(_QWORD *)((char *)&v15 + 4) == 0x100000000LL && !HIDWORD(v16) && a3 && a4 >= 0x14 )
      DeviceStatus = CmGetDeviceStatus(PiPnpRtlCtx, v16, 0, (unsigned int)&v14, (__int64)&v13, (__int64)&a6);
    else
      DeviceStatus = -1073741811;
    LODWORD(Length) = a4;
    v9 = PiCMReturnStatusResultData(DeviceStatus, v14, v13, a6, v17[0], a3, Length, v6);
  }
  PiCMReleaseObjectInputData(&v15);
  return (unsigned int)v9;
}
