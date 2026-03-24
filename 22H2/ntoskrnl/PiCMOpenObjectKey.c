/*
 * XREFs of PiCMOpenObjectKey @ 0x1406AC6C0
 * Callers:
 *     PiCMHandleIoctl @ 0x1406AD630 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x140684D94 (PiAuDoesClientHaveAccess.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A8C84 (PiCMDuplicateRegistryHandle.c)
 *     PiCMReturnHandleResultData @ 0x1406AC628 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406ACA2C (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x1406ACC40 (PiCMReleaseRegistryInputData.c)
 *     _PnpOpenObjectRegKey @ 0x1406B0644 (_PnpOpenObjectRegKey.c)
 *     _PnpCreateObject @ 0x14073262C (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMOpenObjectKey(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int Object; // ebx
  unsigned int v10; // edi
  int v11; // ecx
  __int64 v12; // rdx
  int v14; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-38h] BYREF
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF
  __int128 v18; // [rsp+60h] [rbp-20h]
  __int128 v19; // [rsp+70h] [rbp-10h]

  v16 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  *a6 = 0;
  v18 = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = PiCMCaptureRegistryInputData(a1, a2, a5, &v17);
  if ( Object < 0 )
    goto LABEL_21;
  if ( !(_QWORD)v18 || DWORD1(v17) || DWORD1(v19) || !a3 || a4 < 0x10 )
    goto LABEL_48;
  v10 = 0;
  if ( SDWORD2(v17) <= 6 )
  {
    switch ( DWORD2(v17) )
    {
      case 6:
        v10 = 6;
        goto LABEL_45;
      case 1:
        v10 = 1;
LABEL_46:
        Object = -1073741637;
        goto LABEL_14;
      case 2:
        v10 = 2;
        goto LABEL_14;
      case 3:
        v10 = 4;
        goto LABEL_14;
      case 4:
        v10 = 3;
        goto LABEL_45;
      case 5:
        v10 = 5;
        goto LABEL_45;
    }
  }
  else
  {
    switch ( DWORD2(v17) )
    {
      case 0x10001:
        v11 = 7;
        goto LABEL_11;
      case 0x10002:
        v11 = 8;
LABEL_11:
        v10 = PiDrvDbCtx != 0 ? v11 : 0;
        break;
      case 0x10003:
        v11 = 9;
        goto LABEL_11;
      case 0x10004:
        v11 = 10;
        goto LABEL_11;
      case 0x10005:
        v11 = 11;
        goto LABEL_11;
    }
  }
  if ( !v10 )
  {
LABEL_48:
    Object = -1073741811;
    goto LABEL_18;
  }
  if ( v10 > 6 || v10 <= 4 )
    goto LABEL_14;
LABEL_45:
  if ( (_DWORD)v19 == 1 )
    goto LABEL_46;
LABEL_14:
  if ( Object >= 0 )
  {
    Object = PnpOpenObjectRegKey(PiPnpRtlCtx, v18, v10, HIDWORD(v18), 0, (__int64)&Handle);
    if ( Object != -1073741772 )
      goto LABEL_16;
    if ( (_DWORD)v19 == 1 )
    {
      if ( PiAuDoesClientHaveAccess(2u) )
      {
        Object = PnpCreateObject(v14, v18, v10, HIDWORD(v18), (__int64)&Handle);
LABEL_16:
        if ( Object >= 0 )
          Object = PiCMDuplicateRegistryHandle(Handle, v12, HIDWORD(v18), PreviousMode, &v16);
        goto LABEL_18;
      }
      Object = -1073741790;
    }
  }
LABEL_18:
  Object = PiCMReturnHandleResultData(Object, (__int64)v16, SDWORD2(v19), a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( Object < 0 && v16 )
    ObCloseHandle(v16, PreviousMode);
LABEL_21:
  PiCMReleaseRegistryInputData(&v17);
  return (unsigned int)Object;
}
