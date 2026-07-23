/*
 * XREFs of _CmGetDevicesInBaseContainerList @ 0x140976428
 * Callers:
 *     _CmMoveBaseContainer @ 0x140976694 (_CmMoveBaseContainer.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumValue @ 0x140673004 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14067313C (_PnpCtxRegQueryInfoKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmGetDevicesInBaseContainerList(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  _WORD *v8; // r15
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // edi
  _WORD *PoolWithTag; // rax
  __int64 v16; // rcx
  ULONG i; // r14d
  int v18; // eax
  void *v19; // rcx
  PVOID v20; // rax
  int v22; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE v24; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v25; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+48h] BYREF

  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  Handle = 0LL;
  v22 = 0;
  v8 = 0LL;
  v27 = 0;
  *a4 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10, (__int64)&v26);
  if ( CachedContextBaseKey >= 0 )
  {
    v10 = 0LL;
    if ( a1 )
      v10 = *(_QWORD *)(a1 + 224);
    CachedContextBaseKey = SysCtxRegOpenKey(v10, v26, a2, 0, 1u, (__int64)&v25);
    if ( CachedContextBaseKey >= 0 )
    {
      v11 = 0LL;
      if ( a1 )
        v11 = *(_QWORD *)(a1 + 224);
      CachedContextBaseKey = SysCtxRegOpenKey(v11, (__int64)v25, (__int64)L"BaseContainers", 0, 1u, (__int64)&v24);
      if ( CachedContextBaseKey >= 0 )
      {
        v12 = 0LL;
        if ( a1 )
          v12 = *(_QWORD *)(a1 + 224);
        CachedContextBaseKey = SysCtxRegOpenKey(v12, (__int64)v24, a3, 0, 3u, (__int64)&Handle);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v13, Handle, 0LL, 0LL, &v22, &v27, 0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            v14 = v22 * (v27 + 1) + 1;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v14, 0x52504E50u);
            *a4 = PoolWithTag;
            if ( !PoolWithTag )
            {
              CachedContextBaseKey = -1073741801;
              goto LABEL_22;
            }
            v8 = PoolWithTag;
            for ( i = 0; ; ++i )
            {
              v27 = v14 - 1;
              v18 = PnpCtxRegEnumValue(v16, Handle, i, v8, &v27, 0LL, 0LL, 0LL);
              CachedContextBaseKey = v18;
              if ( v18 == -2147483622 )
                break;
              if ( v18 < 0 )
                goto LABEL_19;
              v16 = v27 + 1;
              v14 -= v16;
              v8 += v16;
            }
            CachedContextBaseKey = 0;
          }
        }
      }
    }
  }
LABEL_19:
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
    CachedContextBaseKey = 0;
LABEL_22:
  v19 = *a4;
  if ( CachedContextBaseKey < 0 )
  {
    if ( !v19 )
      goto LABEL_30;
    ExFreePoolWithTag(v19, 0);
  }
  else
  {
    if ( v19 )
    {
      *v8 = 0;
      goto LABEL_30;
    }
    v20 = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x52504E50u);
    *a4 = v20;
    if ( !v20 )
    {
      CachedContextBaseKey = -1073741801;
      goto LABEL_30;
    }
  }
  *a4 = 0LL;
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  if ( v24 )
    ZwClose(v24);
  if ( v25 )
    ZwClose(v25);
  return (unsigned int)CachedContextBaseKey;
}
