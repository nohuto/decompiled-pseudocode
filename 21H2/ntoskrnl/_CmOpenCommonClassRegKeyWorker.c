/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x140639F28
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x14063A184 (_CmOpenCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpCtxRegCreateTree @ 0x140633088 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140639DF0 (_CmGetCommonClassRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 a1,
        const WCHAR *a2,
        __int16 a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  const WCHAR *v8; // rbx
  int v11; // r15d
  unsigned __int64 v13; // rdi
  wchar_t *pszDest; // r14
  int CommonClassRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  __int64 v17; // rdi
  HANDLE v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r13
  int Tree; // eax
  _DWORD *v22; // r12
  __int64 v24; // rcx
  int v25; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE v27; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+50h] BYREF

  v8 = a2;
  LODWORD(v31) = 0;
  v27 = 0LL;
  Handle = 0LL;
  v11 = 4;
  DestinationString = 0LL;
  LODWORD(v13) = (a3 & 0x200) != 0 ? 320 : 200;
  pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x52504E50u);
  if ( pszDest )
  {
    while ( 1 )
    {
      LODWORD(cchDest) = (unsigned int)v13 >> 1;
      CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(
                                (unsigned int)v13 >> 1,
                                v8,
                                a3,
                                a4,
                                v25,
                                pszDest,
                                cchDest,
                                &v31);
      if ( CommonClassRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(pszDest, 0);
      pszDest = 0LL;
      v13 = 2LL * (unsigned int)v31;
      if ( v13 > 0xFFFFFFFF )
      {
        CommonClassRegKeyPath = -1073741675;
        goto LABEL_21;
      }
      pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x52504E50u);
      if ( !pszDest )
        goto LABEL_36;
      v8 = a2;
    }
  }
  else
  {
LABEL_36:
    CommonClassRegKeyPath = -1073741801;
  }
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_21;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = (__int64)pszDest;
    if ( a1 )
      v24 = *(_QWORD *)(a1 + 224);
    else
      v24 = 0LL;
    CommonClassRegKeyPath = SysCtxRegOpenCurrentUserKey(v24, 0LL, 0x2000000LL, &Handle);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    v18 = Handle;
    v27 = Handle;
  }
  else
  {
    CommonClassRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    Length = DestinationString.Length;
    if ( DestinationString.Length >= (unsigned int)v13
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      CommonClassRegKeyPath = -1073741811;
      goto LABEL_21;
    }
    v17 = (__int64)(pszDest + 25);
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = pszDest + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(&`_CmOpenCommonClassRegKeyWorker'::`2'::ClassKeyPrefix, &DestinationString, 1u) )
    {
      v11 = 7;
      v17 = (__int64)(pszDest + 39);
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v11 = 8;
      v17 = (__int64)(pszDest + 47);
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v11 = 14;
      v17 = (__int64)(pszDest + 43);
    }
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v11, (__int64)&v27);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    v18 = v27;
  }
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1);
LABEL_19:
    if ( Tree != -1073741444 )
    {
      if ( Tree >= 0 )
        goto LABEL_21;
      goto LABEL_30;
    }
    CommonClassRegKeyPath = -1073741595;
    goto LABEL_21;
  }
  if ( a1 )
    v19 = *(_QWORD *)(a1 + 224);
  else
    v19 = 0LL;
  v20 = a7;
  Tree = SysCtxRegOpenKey(v19, (__int64)v18, v17, 0, a5, a7);
  v22 = a8;
  if ( Tree >= 0 )
    *a8 = 2;
  if ( Tree != -1073741772 )
    goto LABEL_19;
  if ( v11 != 8 || !*(_BYTE *)(a1 + 4) )
  {
LABEL_30:
    CommonClassRegKeyPath = Tree;
    goto LABEL_21;
  }
  CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)&v27);
  if ( CommonClassRegKeyPath >= 0 )
  {
    Tree = SysCtxRegOpenKey(*(_QWORD *)(a1 + 224), (__int64)v27, v17, 0, a5, v20);
    if ( Tree >= 0 )
      *v22 = 2;
    goto LABEL_19;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)CommonClassRegKeyPath;
}
