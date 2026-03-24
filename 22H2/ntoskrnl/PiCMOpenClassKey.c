/*
 * XREFs of PiCMOpenClassKey @ 0x1406A693C
 * Callers:
 *     PiCMHandleIoctl @ 0x1406AD630 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14032EB60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     RtlUpcaseUnicodeString @ 0x14062F0C0 (RtlUpcaseUnicodeString.c)
 *     PiAuDoesClientHaveAccess @ 0x140684D94 (PiAuDoesClientHaveAccess.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A8C84 (PiCMDuplicateRegistryHandle.c)
 *     PiCMReturnHandleResultData @ 0x1406AC628 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406ACA2C (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x1406ACC40 (PiCMReleaseRegistryInputData.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1406B3774 (_CmOpenInterfaceClassRegKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x1406BE9AC (_CmOpenInstallerClassRegKey.c)
 *     _CmCreateInterfaceClass @ 0x140747FF4 (_CmCreateInterfaceClass.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14077C808 (_PnpCtxOpenContextBaseKey.c)
 *     _CmCreateInstallerClass @ 0x140974B30 (_CmCreateInstallerClass.c)
 */

__int64 __fastcall PiCMOpenClassKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // ecx
  int v11; // edi
  int v12; // r8d
  int v13; // edi
  NTSTATUS inited; // ebx
  int v15; // r8d
  int v16; // r9d
  bool v17; // zf
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r9
  bool v21; // sf
  NTSTATUS InterfaceClass; // eax
  HANDLE v24; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  __int128 v26; // [rsp+60h] [rbp-1h] BYREF
  PCWSTR SourceString[2]; // [rsp+70h] [rbp+Fh]
  __int128 v28; // [rsp+80h] [rbp+1Fh]

  v6 = Handle;
  Handle = 0LL;
  v24 = 0LL;
  *v6 = 0;
  v26 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = 0LL;
  DestinationString = 0LL;
  v11 = PiCMCaptureRegistryInputData(a1, a2, a5, &v26);
  if ( v11 < 0 )
    goto LABEL_19;
  if ( DWORD1(v26) || DWORD1(v28) || !a3 || a4 < 0x10 || (v13 = DWORD2(v26), (unsigned int)(DWORD2(v26) - 2) > 1) )
  {
    inited = -1073741811;
    goto LABEL_15;
  }
  if ( !SourceString[0] )
  {
    v18 = HIDWORD(SourceString[1]);
    inited = PnpCtxOpenContextBaseKey(
               v10,
               8 - (unsigned int)(DWORD2(v26) != 3),
               v12,
               HIDWORD(SourceString[1]),
               (__int64)&Handle);
    v21 = inited < 0;
LABEL_13:
    if ( !v21 )
    {
      LOBYTE(v20) = PreviousMode;
      inited = PiCMDuplicateRegistryHandle(Handle, v19, v18, v20, &v24);
    }
    goto LABEL_15;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[0]);
  if ( inited >= 0 )
  {
    inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
    if ( inited >= 0 )
    {
      v17 = v13 == 3;
      v18 = HIDWORD(SourceString[1]);
      if ( v17 )
      {
        inited = CmOpenInterfaceClassRegKey(
                   PiPnpRtlCtx,
                   SourceString[0],
                   v15,
                   v16,
                   HIDWORD(SourceString[1]),
                   0,
                   (__int64)&Handle,
                   0LL);
        if ( inited != -1073741772 )
          goto LABEL_12;
        if ( (_DWORD)v28 == 1 )
        {
          if ( PiAuDoesClientHaveAccess(2u) )
          {
            InterfaceClass = CmCreateInterfaceClass(PiPnpRtlCtx, SourceString[0], v18, (unsigned int)&Handle, 0LL, 0);
LABEL_25:
            inited = InterfaceClass;
            goto LABEL_12;
          }
          goto LABEL_24;
        }
      }
      else
      {
        inited = CmOpenInstallerClassRegKey(
                   PiPnpRtlCtx,
                   SourceString[0],
                   v15,
                   v16,
                   HIDWORD(SourceString[1]),
                   0,
                   (__int64)&Handle,
                   0LL);
        if ( inited != -1073741772 )
        {
LABEL_12:
          v21 = inited < 0;
          goto LABEL_13;
        }
        if ( (_DWORD)v28 == 1 )
        {
          if ( PiAuDoesClientHaveAccess(2u) )
          {
            InterfaceClass = CmCreateInstallerClass(PiPnpRtlCtx, SourceString[0], v18, (unsigned int)&Handle, 0LL, 0);
            goto LABEL_25;
          }
LABEL_24:
          inited = -1073741790;
        }
      }
    }
  }
LABEL_15:
  v11 = PiCMReturnHandleResultData((unsigned int)inited, v24, DWORD2(v28), a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v11 < 0 || inited < 0 )
  {
    if ( v24 )
      ObCloseHandle(v24, PreviousMode);
  }
LABEL_19:
  PiCMReleaseRegistryInputData(&v26);
  return (unsigned int)v11;
}
