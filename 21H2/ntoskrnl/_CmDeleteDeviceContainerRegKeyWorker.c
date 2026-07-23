/*
 * XREFs of _CmDeleteDeviceContainerRegKeyWorker @ 0x14072C740
 * Callers:
 *     _CmDeleteDeviceContainerRegKey @ 0x14072C664 (_CmDeleteDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406083EC (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140766F18 (_RegRtlDeleteKeyTransacted.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKeyWorker(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  wchar_t *pszDest; // rdi
  unsigned __int64 v9; // r14
  SIZE_T i; // rdx
  __int64 v11; // r9
  int DeviceContainerRegKeyPath; // ebx
  wchar_t *v13; // r14
  __int64 v14; // rcx
  unsigned __int16 Length; // bx
  wchar_t *v17; // r14
  BOOLEAN v18; // r15
  HANDLE v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v28; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+48h] BYREF

  pszDest = 0LL;
  LODWORD(v30) = 0;
  v28 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_45;
  LODWORD(v9) = 260;
  for ( i = 260LL; ; i = (unsigned int)v9 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v9 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v9 >> 1,
                                  a2,
                                  a3,
                                  v11,
                                  v25,
                                  pszDest,
                                  cchDest,
                                  &v30);
    if ( DeviceContainerRegKeyPath != -1073741789 )
      goto LABEL_6;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v9 = 2LL * (unsigned int)v30;
    if ( v9 > 0xFFFFFFFF )
    {
      DeviceContainerRegKeyPath = -1073741675;
      goto LABEL_11;
    }
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_6:
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_11;
  if ( (a3 & 0x100) == 0 )
  {
    DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_11;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v9
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v17 = pszDest + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = pszDest + 25;
      DestinationString.Length = Length - 50;
      v18 = RtlPrefixUnicodeString(
              &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
              &DestinationString,
              1u);
      DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v18 != 0 ? 10 : 4, (__int64)&v28);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_11;
      v19 = v28;
      if ( !v18 )
        v17 = pszDest;
      v13 = v17 + 25;
      goto LABEL_24;
    }
LABEL_45:
    DeviceContainerRegKeyPath = -1073741811;
    goto LABEL_11;
  }
  v13 = pszDest;
  if ( a1 )
    v14 = *(_QWORD *)(a1 + 224);
  else
    v14 = 0LL;
  DeviceContainerRegKeyPath = SysCtxRegOpenCurrentUserKey(v14, 0LL, 0x2000000LL, &Handle);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_11;
  v19 = Handle;
LABEL_24:
  if ( a5 )
  {
    if ( a1 && (v20 = *(_QWORD *)(a1 + 224)) != 0 )
      v21 = *(_QWORD *)(v20 + 8);
    else
      v21 = 0LL;
    v22 = RegRtlDeleteTreeInternal(v19, v13, v21, 0LL);
  }
  else
  {
    if ( a1 && (v23 = *(_QWORD *)(a1 + 224)) != 0 )
      v24 = *(_QWORD *)(v23 + 8);
    else
      v24 = 0LL;
    v22 = RegRtlDeleteKeyTransacted(v19, v13, v24);
  }
  if ( (int)(v22 + 0x80000000) >= 0 && v22 != -1073741444 )
    DeviceContainerRegKeyPath = v22;
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
