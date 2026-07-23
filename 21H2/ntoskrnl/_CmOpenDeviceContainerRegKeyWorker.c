/*
 * XREFs of _CmOpenDeviceContainerRegKeyWorker @ 0x1406081C4
 * Callers:
 *     _CmOpenDeviceContainerRegKey @ 0x1406080B0 (_CmOpenDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406083EC (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x140633088 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKeyWorker(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *pszDest; // rdi
  unsigned __int64 v12; // rsi
  SIZE_T i; // rdx
  int v14; // r9d
  NTSTATUS DeviceContainerRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  int v17; // esi
  BOOLEAN v18; // r15
  int v19; // edx
  int v20; // esi
  __int64 v21; // rcx
  int Tree; // ecx
  __int64 v24; // rcx
  int v25; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+48h] BYREF

  pszDest = 0LL;
  LODWORD(v30) = 0;
  v28 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_41;
  LODWORD(v12) = 260;
  for ( i = 260LL; ; i = (unsigned int)v12 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v12 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v12 >> 1,
                                  a2,
                                  a3,
                                  v14,
                                  v25,
                                  pszDest,
                                  cchDest,
                                  (__int64)&v30);
    if ( DeviceContainerRegKeyPath != -1073741789 )
      goto LABEL_6;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v12 = 2LL * (unsigned int)v30;
    if ( v12 > 0xFFFFFFFF )
    {
      DeviceContainerRegKeyPath = -1073741675;
      goto LABEL_24;
    }
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_6:
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_24;
  if ( (a3 & 0x100) == 0 )
  {
    DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_24;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v12
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v17 = (_DWORD)pszDest + 50;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = pszDest + 25;
      DestinationString.Length = Length - 50;
      v18 = RtlPrefixUnicodeString(
              &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
              &DestinationString,
              1u);
      DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v18 != 0 ? 10 : 4, &v28);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_24;
      v19 = v28;
      if ( !v18 )
        v17 = (int)pszDest;
      v20 = v17 + 50;
      goto LABEL_16;
    }
LABEL_41:
    DeviceContainerRegKeyPath = -1073741811;
    goto LABEL_24;
  }
  v20 = (int)pszDest;
  if ( a1 )
    v24 = *(_QWORD *)(a1 + 224);
  else
    v24 = 0LL;
  DeviceContainerRegKeyPath = SysCtxRegOpenCurrentUserKey(v24, 0LL, 0x2000000LL, &Handle);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_24;
  v19 = (int)Handle;
LABEL_16:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1, v19, v20, 0, a5, 0LL, a7, (__int64)a8);
  }
  else
  {
    if ( a1 )
      v21 = *(_QWORD *)(a1 + 224);
    else
      LODWORD(v21) = 0;
    Tree = SysCtxRegOpenKey(v21, v19, v20, 0, a5, a7);
    if ( Tree >= 0 )
      *a8 = 2;
  }
  if ( Tree == -1073741444 )
  {
    DeviceContainerRegKeyPath = -1073741595;
  }
  else if ( Tree < 0 )
  {
    DeviceContainerRegKeyPath = Tree;
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
