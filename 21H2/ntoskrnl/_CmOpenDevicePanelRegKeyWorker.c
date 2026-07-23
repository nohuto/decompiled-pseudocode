/*
 * XREFs of _CmOpenDevicePanelRegKeyWorker @ 0x1409789EC
 * Callers:
 *     _CmOpenDevicePanelRegKey @ 0x140978874 (_CmOpenDevicePanelRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpCtxRegCreateTree @ 0x140633088 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14072D908 (_SysCtxRegOpenCurrentUserKey.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1409787C0 (_CmGetDevicePanelRegKeyPath.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmOpenDevicePanelRegKeyWorker(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *pszDest; // rdi
  unsigned __int64 v12; // r14
  SIZE_T i; // rdx
  int DevicePanelRegKeyPath; // ebx
  __int64 v15; // r9
  unsigned __int16 Length; // bx
  BOOLEAN v17; // r12
  HANDLE v18; // rdx
  __int64 v19; // r14
  _QWORD *v20; // rcx
  int Tree; // ecx
  __int64 v22; // rcx
  int v24; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v27; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+48h] BYREF

  pszDest = 0LL;
  LODWORD(v29) = 0;
  v27 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    goto LABEL_36;
  LODWORD(v12) = 317;
  for ( i = 317LL; ; i = (unsigned int)v12 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v12 >> 1;
    DevicePanelRegKeyPath = CmGetDevicePanelRegKeyPath((unsigned int)v12 >> 1, a2, a3, v15, v24, pszDest, cchDest, &v29);
    if ( DevicePanelRegKeyPath != -1073741789 )
      goto LABEL_9;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v12 = 2LL * (unsigned int)v29;
    if ( v12 > 0xFFFFFFFF )
    {
      DevicePanelRegKeyPath = -1073741675;
      goto LABEL_37;
    }
  }
  DevicePanelRegKeyPath = -1073741801;
LABEL_9:
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_37;
  if ( (a3 & 0x100) == 0 )
  {
    DevicePanelRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( DevicePanelRegKeyPath < 0 )
      goto LABEL_37;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v12
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(&`_CmOpenDevicePanelRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
    {
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = pszDest + 25;
      DestinationString.Length = Length - 50;
      v17 = RtlPrefixUnicodeString(
              &`_CmDeleteDevicePanelRegKeyWorker'::`2'::DevicePanelsKeyPrefix,
              &DestinationString,
              1u);
      DevicePanelRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v17 != 0 ? 11 : 4, (__int64)&v27);
      if ( DevicePanelRegKeyPath < 0 )
        goto LABEL_37;
      v18 = v27;
      v19 = (__int64)(pszDest + 46);
      if ( !v17 )
        v19 = (__int64)(pszDest + 25);
      goto LABEL_25;
    }
LABEL_36:
    DevicePanelRegKeyPath = -1073741811;
    goto LABEL_37;
  }
  v19 = (__int64)pszDest;
  if ( a1 )
    v20 = *(_QWORD **)(a1 + 224);
  else
    v20 = 0LL;
  DevicePanelRegKeyPath = SysCtxRegOpenCurrentUserKey(v20, 0, 0x2000000u, (__int64)&Handle);
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_37;
  v18 = Handle;
LABEL_25:
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
    Tree = SysCtxRegOpenKey(v22, (__int64)v18, v19, 0, a5, a7);
    if ( Tree >= 0 )
      *a8 = 2;
  }
  if ( Tree == -1073741444 )
  {
    DevicePanelRegKeyPath = -1073741595;
  }
  else if ( Tree < 0 )
  {
    DevicePanelRegKeyPath = Tree;
  }
LABEL_37:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DevicePanelRegKeyPath;
}
