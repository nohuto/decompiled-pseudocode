/*
 * XREFs of PiCMOpenObjectKey @ 0x14086B97C
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PiAuDoesClientHaveAccess @ 0x1406C4454 (PiAuDoesClientHaveAccess.c)
 *     PiCMReleaseObjectInputData @ 0x1406C7AC0 (PiCMReleaseObjectInputData.c)
 *     _PnpOpenObjectRegKey @ 0x1406CECB8 (_PnpOpenObjectRegKey.c)
 *     PiCMReturnHandleResultData @ 0x14076C9D4 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x14076CA6C (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x14076CC0C (PiCMDuplicateRegistryHandle.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     _PnpCreateObject @ 0x140A61DB4 (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMOpenObjectKey(_DWORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  KPROCESSOR_MODE PreviousMode; // r12
  int v9; // ebx
  unsigned int v10; // ebx
  int Object; // eax
  __int64 v12; // rdx
  int v15; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v17; // [rsp+48h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h]
  __int128 v20; // [rsp+70h] [rbp-10h]

  v17 = 0LL;
  Handle = 0LL;
  v18 = 0LL;
  *a6 = 0;
  v19 = 0LL;
  v20 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = PiCMCaptureRegistryInputData(a1, a2, a5, (__int64)&v18);
  if ( v9 < 0 )
    goto LABEL_19;
  if ( !(_QWORD)v19 || DWORD1(v18) || DWORD1(v20) || !a3 || a4 < 0x10 )
    goto LABEL_44;
  v10 = 6;
  if ( SDWORD2(v18) <= 6 )
  {
    switch ( DWORD2(v18) )
    {
      case 6:
        goto LABEL_31;
      case 1:
LABEL_32:
        Object = -1073741637;
        goto LABEL_16;
      case 2:
        v10 = 2;
        goto LABEL_13;
      case 3:
        v10 = 4;
        goto LABEL_13;
      case 4:
        v10 = 3;
        goto LABEL_31;
      case 5:
        v10 = 5;
        goto LABEL_31;
    }
    goto LABEL_44;
  }
  switch ( DWORD2(v18) )
  {
    case 0x10001:
      v10 = 7;
      break;
    case 0x10002:
      v10 = 8;
      break;
    case 0x10003:
      v10 = 9;
      break;
    case 0x10004:
      v10 = 10;
      break;
    case 0x10005:
      v10 = 11;
      break;
    default:
      goto LABEL_44;
  }
  if ( !PiDrvDbCtx )
  {
LABEL_44:
    Object = -1073741811;
    goto LABEL_16;
  }
  if ( v10 - 5 >= 2 )
    goto LABEL_13;
LABEL_31:
  if ( (_DWORD)v20 == 1 )
    goto LABEL_32;
LABEL_13:
  Object = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v19, v10, SHIDWORD(v19), 0, (__int64)&Handle);
  if ( Object != -1073741772 )
    goto LABEL_14;
  if ( (_DWORD)v20 == 1 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      Object = PnpCreateObject(v15, v19, v10, HIDWORD(v19), (__int64)&Handle);
LABEL_14:
      if ( Object >= 0 )
        Object = PiCMDuplicateRegistryHandle(Handle, v12, HIDWORD(v19), PreviousMode, &v17);
      goto LABEL_16;
    }
    Object = -1073741790;
  }
LABEL_16:
  v9 = PiCMReturnHandleResultData(Object, (__int64)v17, SDWORD2(v20), a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( v9 < 0 && v17 )
    ObCloseHandle(v17, PreviousMode);
LABEL_19:
  PiCMReleaseObjectInputData((__int64)&v18);
  return (unsigned int)v9;
}
