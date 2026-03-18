/*
 * XREFs of _CmOpenDevicePanelRegKeyWorker @ 0x140A28FC4
 * Callers:
 *     _CmOpenDevicePanelRegKey @ 0x140A28E58 (_CmOpenDevicePanelRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _PnpCtxRegCreateTree @ 0x140772AA0 (_PnpCtxRegCreateTree.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140A28CA4 (_CmGetDevicePanelRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmOpenDevicePanelRegKeyWorker(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *pszDest; // rdi
  __int64 v10; // rbx
  int v12; // r13d
  unsigned __int64 v13; // r12
  __int64 v14; // r9
  NTSTATUS DevicePanelRegKeyPath; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  __int64 v18; // r14
  HANDLE v19; // rdx
  __int64 v20; // rcx
  int Tree; // eax
  __int64 v22; // rcx
  int v24; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v27; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+58h] BYREF

  pszDest = 0LL;
  LODWORD(v30) = 0;
  v27 = 0LL;
  v10 = a2;
  Handle = 0LL;
  v12 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    goto LABEL_36;
  LODWORD(v13) = 317;
  pszDest = (wchar_t *)ExAllocatePool2(256LL, 317LL, 1380994640LL);
  if ( !pszDest )
  {
LABEL_35:
    inited = -1073741801;
    goto LABEL_37;
  }
  while ( 1 )
  {
    LODWORD(cchDest) = (unsigned int)v13 >> 1;
    DevicePanelRegKeyPath = CmGetDevicePanelRegKeyPath(
                              (unsigned int)v13 >> 1,
                              v10,
                              a3,
                              v14,
                              v24,
                              pszDest,
                              cchDest,
                              &v30);
    inited = DevicePanelRegKeyPath;
    if ( DevicePanelRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v13 = 2LL * (unsigned int)v30;
    if ( v13 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_37;
    }
    pszDest = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v13, 1380994640LL);
    if ( !pszDest )
      goto LABEL_35;
    v10 = a2;
  }
  if ( DevicePanelRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v18 = (__int64)pszDest;
      if ( a1 )
        v20 = *(_QWORD *)(a1 + 224);
      else
        v20 = 0LL;
      inited = SysCtxRegOpenCurrentUserKey(v20, 0LL, 0x2000000LL, &Handle);
      if ( inited < 0 )
        goto LABEL_37;
      v19 = Handle;
LABEL_24:
      if ( a6 )
      {
        Tree = PnpCtxRegCreateTree(a1);
      }
      else
      {
        if ( a1 )
          v22 = *(_QWORD *)(a1 + 224);
        else
          v22 = 0LL;
        Tree = SysCtxRegOpenKey(v22, (__int64)v19, v18, 0, a5, a7);
        if ( Tree >= 0 )
        {
          *a8 = 2;
          goto LABEL_37;
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
      goto LABEL_37;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_37;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v13
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v18 = (__int64)(pszDest + 25);
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = pszDest + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(
             &`_CmDeleteDevicePanelRegKeyWorker'::`2'::DevicePanelsKeyPrefix,
             &DestinationString,
             1u) )
      {
        v12 = 11;
        v18 = (__int64)(pszDest + 46);
      }
      inited = PnpCtxGetCachedContextBaseKey(a1, v12, (__int64)&v27);
      if ( inited < 0 )
        goto LABEL_37;
      v19 = v27;
      goto LABEL_24;
    }
LABEL_36:
    inited = -1073741811;
  }
LABEL_37:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)inited;
}
