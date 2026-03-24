/*
 * XREFs of PiCMOpenDeviceKey @ 0x1406A8AF8
 * Callers:
 *     PiCMHandleIoctl @ 0x1406AD630 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x140684D94 (PiAuDoesClientHaveAccess.c)
 *     PiCMConvertDeviceKeyType @ 0x1406A8A64 (PiCMConvertDeviceKeyType.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A8C84 (PiCMDuplicateRegistryHandle.c)
 *     PiCMReturnHandleResultData @ 0x1406AC628 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406ACA2C (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x1406ACC40 (PiCMReleaseRegistryInputData.c)
 *     _CmOpenDeviceRegKey @ 0x1406BA950 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PiCMOpenDeviceKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v7; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  int v10; // edi
  int v11; // edi
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
    v12 = PiCMConvertDeviceKeyType(SWORD2(v19), (int *)&a6);
    if ( v12 >= 0 )
    {
      v13 = HIDWORD(v20);
      v12 = CmOpenDeviceRegKey(PiPnpRtlCtx, v11, (_DWORD)a6, DWORD1(v21), HIDWORD(v20), 0, (__int64)&Handle, 0LL);
      if ( v12 != -1073741772 )
        goto LABEL_8;
      if ( (_DWORD)v21 == 1 )
      {
        if ( PiAuDoesClientHaveAccess(2u) )
        {
          v12 = CmOpenDeviceRegKey(PiPnpRtlCtx, v11, (_DWORD)a6, DWORD1(v21), v13, 1, (__int64)&Handle, 0LL);
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
  PiCMReleaseRegistryInputData(&v19);
  return (unsigned int)v10;
}
