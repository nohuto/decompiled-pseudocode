/*
 * XREFs of _CmOpenDeviceContainerRegKeyWorker @ 0x14076D4A4
 * Callers:
 *     _CmOpenDeviceContainerRegKey @ 0x14076D390 (_CmOpenDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14076D6D4 (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x140772AA0 (_PnpCtxRegCreateTree.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  int v10; // ebx
  unsigned int v12; // r13d
  unsigned __int64 v13; // r12
  int v14; // r9d
  int DeviceContainerRegKeyPath; // eax
  NTSTATUS inited; // ebx
  unsigned __int16 Length; // bx
  int v18; // r15d
  int v19; // edx
  __int64 v20; // rcx
  int Tree; // eax
  __int64 v23; // rcx
  int v24; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+58h] BYREF

  pszDest = 0LL;
  LODWORD(v30) = 0;
  v27 = 0LL;
  v10 = a2;
  Handle = 0LL;
  v12 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_34;
  LODWORD(v13) = 260;
  pszDest = (wchar_t *)ExAllocatePool2(256LL, 260LL, 1380994640LL);
  if ( !pszDest )
  {
LABEL_41:
    inited = -1073741801;
    goto LABEL_24;
  }
  while ( 1 )
  {
    LODWORD(cchDest) = (unsigned int)v13 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v13 >> 1,
                                  v10,
                                  a3,
                                  v14,
                                  v24,
                                  pszDest,
                                  cchDest,
                                  (__int64)&v30);
    inited = DeviceContainerRegKeyPath;
    if ( DeviceContainerRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v13 = 2LL * (unsigned int)v30;
    if ( v13 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_24;
    }
    pszDest = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v13, 1380994640LL);
    if ( !pszDest )
      goto LABEL_41;
    v10 = a2;
  }
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_24;
  if ( (a3 & 0x100) != 0 )
  {
    v18 = (int)pszDest;
    if ( a1 )
      v23 = *(_QWORD *)(a1 + 224);
    else
      v23 = 0LL;
    inited = SysCtxRegOpenCurrentUserKey(v23, 0LL, 0x2000000LL, &Handle);
    if ( inited < 0 )
      goto LABEL_24;
    v19 = (int)Handle;
    goto LABEL_15;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( inited < 0 )
    goto LABEL_24;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v13
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
LABEL_34:
    inited = -1073741811;
    goto LABEL_24;
  }
  v18 = (_DWORD)pszDest + 50;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = pszDest + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(
         &`_CmOpenDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
         &DestinationString,
         1u) )
  {
    v12 = 10;
    v18 = (_DWORD)pszDest + 100;
  }
  inited = PnpCtxGetCachedContextBaseKey(a1, v12, &v27);
  if ( inited < 0 )
    goto LABEL_24;
  v19 = v27;
LABEL_15:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1, v19, v18, 0, a5, 0LL, a7, (__int64)a8);
  }
  else
  {
    if ( a1 )
      v20 = *(_QWORD *)(a1 + 224);
    else
      LODWORD(v20) = 0;
    Tree = SysCtxRegOpenKey(v20, v19, v18, 0, a5, a7);
    if ( Tree >= 0 )
    {
      *a8 = 2;
      goto LABEL_24;
    }
  }
  if ( Tree == -1073741444 )
  {
    inited = -1073741595;
  }
  else if ( Tree < 0 )
  {
    inited = Tree;
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)inited;
}
