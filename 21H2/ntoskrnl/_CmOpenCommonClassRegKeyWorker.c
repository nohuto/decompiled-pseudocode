/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x140781268
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x140787E30 (_CmOpenCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _PnpCtxRegCreateTree @ 0x140772AA0 (_PnpCtxRegCreateTree.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1407871C4 (_CmGetCommonClassRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  int v10; // ebx
  int v11; // r12d
  unsigned int v12; // r14d
  wchar_t *pszDest; // rdi
  int CommonClassRegKeyPath; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  __int64 v17; // r14
  HANDLE v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r13
  int Tree; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE v27; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+50h] BYREF
  int v32; // [rsp+B8h] [rbp+58h]

  v32 = a4;
  Handle = 0LL;
  LODWORD(v31) = 0;
  v27 = 0LL;
  v10 = a4;
  v11 = 4;
  v12 = (a3 & 0x200) != 0 ? 320 : 200;
  DestinationString = 0LL;
  pszDest = (wchar_t *)ExAllocatePool2(256LL, v12, 1380994640LL);
  if ( !pszDest )
  {
LABEL_49:
    inited = -1073741801;
    goto LABEL_22;
  }
  while ( 1 )
  {
    LODWORD(cchDest) = v12 >> 1;
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(v12 >> 1, a2, a3, v10, v25, pszDest, cchDest, (__int64)&v31);
    inited = CommonClassRegKeyPath;
    if ( CommonClassRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v23 = 2LL * (unsigned int)v31;
    if ( v23 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_22;
    }
    v12 = 2 * v31;
    pszDest = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v23, 1380994640LL);
    if ( !pszDest )
      goto LABEL_49;
    v10 = v32;
  }
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_22;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = (__int64)pszDest;
    if ( a1 )
      v24 = *(_QWORD *)(a1 + 224);
    else
      v24 = 0LL;
    inited = SysCtxRegOpenCurrentUserKey(v24, 0LL, 0x2000000LL, &Handle);
    if ( inited < 0 )
      goto LABEL_22;
    v18 = Handle;
    v27 = Handle;
  }
  else
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_22;
    Length = DestinationString.Length;
    if ( DestinationString.Length >= v12
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      inited = -1073741811;
      goto LABEL_22;
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
                &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v11 = 8;
      v17 = (__int64)(pszDest + 47);
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v11 = 14;
      v17 = (__int64)(pszDest + 43);
    }
    inited = PnpCtxGetCachedContextBaseKey(a1, v11, (__int64)&v27);
    if ( inited < 0 )
      goto LABEL_22;
    v18 = v27;
  }
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1);
LABEL_20:
    if ( Tree != -1073741444 )
    {
      if ( Tree >= 0 )
        goto LABEL_22;
      goto LABEL_30;
    }
    inited = -1073741595;
    goto LABEL_22;
  }
  if ( a1 )
    v19 = *(_QWORD *)(a1 + 224);
  else
    v19 = 0LL;
  v20 = a7;
  Tree = SysCtxRegOpenKey(v19, (__int64)v18, v17, 0, a5, a7);
  if ( Tree >= 0 )
    goto LABEL_18;
  if ( Tree != -1073741772 )
    goto LABEL_20;
  if ( v11 != 8 || !*(_BYTE *)(a1 + 4) )
  {
LABEL_30:
    inited = Tree;
    goto LABEL_22;
  }
  inited = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)&v27);
  if ( inited >= 0 )
  {
    Tree = SysCtxRegOpenKey(*(_QWORD *)(a1 + 224), (__int64)v27, v17, 0, a5, v20);
    if ( Tree >= 0 )
    {
LABEL_18:
      *a8 = 2;
      goto LABEL_22;
    }
    goto LABEL_20;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)inited;
}
