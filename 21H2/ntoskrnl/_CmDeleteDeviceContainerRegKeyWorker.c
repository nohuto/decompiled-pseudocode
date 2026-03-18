/*
 * XREFs of _CmDeleteDeviceContainerRegKeyWorker @ 0x140A25AC0
 * Callers:
 *     _CmDeleteDeviceContainerRegKey @ 0x140A25980 (_CmDeleteDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _RegRtlDeleteTreeInternal @ 0x1406CB238 (_RegRtlDeleteTreeInternal.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14076D6D4 (_CmGetDeviceContainerRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140862B44 (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKeyWorker(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  wchar_t *pszDest; // rdi
  __int64 v7; // rbx
  int v9; // r13d
  unsigned __int64 v10; // r12
  __int64 v11; // r9
  NTSTATUS DeviceContainerRegKeyPath; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  const WCHAR *v16; // r15
  char *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v27; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+58h] BYREF

  pszDest = 0LL;
  LODWORD(v30) = 0;
  v27 = 0LL;
  v7 = a2;
  Handle = 0LL;
  v9 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
  {
LABEL_15:
    inited = -1073741811;
    goto LABEL_16;
  }
  LODWORD(v10) = 260;
  pszDest = (wchar_t *)ExAllocatePool2(256LL, 260LL, 1380994640LL);
  if ( !pszDest )
  {
LABEL_44:
    inited = -1073741801;
    goto LABEL_16;
  }
  while ( 1 )
  {
    LODWORD(cchDest) = (unsigned int)v10 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v10 >> 1,
                                  v7,
                                  a3,
                                  v11,
                                  v24,
                                  pszDest,
                                  cchDest,
                                  &v30);
    inited = DeviceContainerRegKeyPath;
    if ( DeviceContainerRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v10 = 2LL * (unsigned int)v30;
    if ( v10 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_16;
    }
    pszDest = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v10, 1380994640LL);
    if ( !pszDest )
      goto LABEL_44;
    v7 = a2;
  }
  if ( DeviceContainerRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v16 = pszDest;
      if ( a1 )
        v18 = *(_QWORD *)(a1 + 224);
      else
        v18 = 0LL;
      inited = SysCtxRegOpenCurrentUserKey(v18, 0LL, 0x2000000LL, &Handle);
      if ( inited < 0 )
        goto LABEL_16;
      v17 = (char *)Handle;
      goto LABEL_30;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_16;
    Length = DestinationString.Length;
    if ( DestinationString.Length >= (unsigned int)v10
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      goto LABEL_15;
    }
    v16 = pszDest + 25;
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = pszDest + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
           &DestinationString,
           1u) )
    {
      v9 = 10;
      v16 = pszDest + 50;
    }
    inited = PnpCtxGetCachedContextBaseKey(a1, v9, (__int64)&v27);
    if ( inited >= 0 )
    {
      v17 = v27;
LABEL_30:
      if ( a5 )
      {
        if ( a1 && (v19 = *(_QWORD *)(a1 + 224)) != 0 )
          v20 = *(_QWORD *)(v19 + 8);
        else
          v20 = 0LL;
        v21 = RegRtlDeleteTreeInternal((__int64)v17, (__int64)v16, v20, 0);
      }
      else
      {
        if ( a1 && (v22 = *(_QWORD *)(a1 + 224)) != 0 )
          v23 = *(_QWORD *)(v22 + 8);
        else
          v23 = 0LL;
        v21 = RegRtlDeleteKeyTransacted(v17, v16, v23);
      }
      if ( v21 != -1073741444 && v21 < 0 )
        inited = v21;
    }
  }
LABEL_16:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)inited;
}
