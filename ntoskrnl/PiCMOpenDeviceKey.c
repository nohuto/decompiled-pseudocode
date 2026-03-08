/*
 * XREFs of PiCMOpenDeviceKey @ 0x14076C7C4
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PiAuDoesClientHaveAccess @ 0x1406C4454 (PiAuDoesClientHaveAccess.c)
 *     PiCMReleaseObjectInputData @ 0x1406C7AC0 (PiCMReleaseObjectInputData.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     PiCMConvertDeviceKeyType @ 0x14076C950 (PiCMConvertDeviceKeyType.c)
 *     PiCMReturnHandleResultData @ 0x14076C9D4 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x14076CA6C (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x14076CC0C (PiCMDuplicateRegistryHandle.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 */

__int64 __fastcall PiCMOpenDeviceKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v7; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  int v10; // edi
  __int64 v11; // rdi
  int v12; // ebx
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r9
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-38h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h]
  __int128 v21; // [rsp+70h] [rbp-10h]

  v18 = 0LL;
  Handle = 0LL;
  v7 = a6;
  LODWORD(a6) = 0;
  v19 = 0LL;
  *v7 = 0;
  v20 = 0LL;
  v21 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, &v19);
  if ( v10 < 0 )
    goto LABEL_14;
  v11 = v20;
  if ( (_QWORD)v20 && DWORD2(v19) == 1 && a3 && a4 >= 0x10 )
  {
    v12 = PiCMConvertDeviceKeyType(DWORD1(v19), &a6);
    if ( v12 >= 0 )
    {
      v13 = HIDWORD(v20);
      v12 = CmOpenDeviceRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              v11,
              (int)a6,
              SDWORD1(v21),
              SHIDWORD(v20),
              0,
              (__int64)&Handle,
              0LL);
      if ( v12 != -1073741772 )
        goto LABEL_8;
      if ( (_DWORD)v21 == 1 )
      {
        if ( PiAuDoesClientHaveAccess(2u) )
        {
          v12 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v11, (int)a6, SDWORD1(v21), v13, 1, (__int64)&Handle, 0LL);
LABEL_8:
          if ( v12 >= 0 )
          {
            LOBYTE(v15) = PreviousMode;
            v12 = PiCMDuplicateRegistryHandle(Handle, v14, v13, v15, &v18);
          }
          goto LABEL_10;
        }
        v12 = -1073741790;
      }
    }
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_10:
  v10 = PiCMReturnHandleResultData((unsigned int)v12, v18, DWORD2(v21), a3, a4, v7);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 || v12 < 0 )
  {
    if ( v18 )
      ObCloseHandle(v18, PreviousMode);
  }
LABEL_14:
  PiCMReleaseObjectInputData((__int64)&v19);
  return (unsigned int)v10;
}
