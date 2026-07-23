/*
 * XREFs of _CmAppendDeclarativeFilterLevel @ 0x140979720
 * Callers:
 *     _CmAppendDeclarativeDefaultFilters @ 0x140979638 (_CmAppendDeclarativeDefaultFilters.c)
 *     _CmGetDeclarativeFilterList @ 0x140979DA4 (_CmGetDeclarativeFilterList.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumValue @ 0x140673004 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14067313C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpMultiSzAppend @ 0x14097C3CC (_PnpMultiSzAppend.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmAppendDeclarativeFilterLevel(__int64 a1, __int64 a2, __int64 a3, wchar_t *a4, int a5, _DWORD *a6)
{
  ULONG v6; // esi
  wchar_t *v7; // r15
  unsigned int v8; // ebx
  int v9; // r14d
  PVOID PoolWithTag; // rdi
  int v11; // r13d
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  char v17; // al
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  wchar_t *v20; // [rsp+48h] [rbp-8h]
  int v21; // [rsp+80h] [rbp+30h] BYREF
  ULONG v22; // [rsp+98h] [rbp+48h] BYREF

  v6 = 0;
  Handle = 0LL;
  v7 = a4;
  v20 = a4;
  v8 = 0;
  v22 = 0;
  v9 = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  v21 = 0;
  v11 = 0;
  if ( a1 )
    v12 = *(_QWORD *)(a1 + 224);
  else
    v12 = 0LL;
  v13 = SysCtxRegOpenKey(v12, a2, a3, 0, 0x80000000, (__int64)&Handle);
  if ( v13 < 0 || (v13 = PnpCtxRegQueryInfoKey(v14, Handle, 0LL, 0LL, &v22, &v21, 0LL), v13 < 0) )
  {
    v8 = v13;
  }
  else if ( !v7
         || (v11 = v21 + 1,
             (PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v21 + 1), 0x52504E50u)) != 0LL) )
  {
    if ( v22 )
    {
      do
      {
        v21 = v11;
        v16 = PnpCtxRegEnumValue(v15, Handle, v6, PoolWithTag, &v21, 0LL, 0LL, 0LL);
        v15 = 3221225507LL;
        if ( v16 == -1073741789 )
        {
          v8 = -1073741789;
        }
        else if ( v16 < 0 )
        {
          v8 = v16;
          break;
        }
        v9 += v21;
        if ( v16 >= 0 )
        {
          if ( v7 )
          {
            v21 = a5;
            ++v9;
            v17 = PnpMultiSzAppend(v7);
            v7 = v20;
            if ( !v17 )
              v8 = -1073741789;
          }
        }
        ++v6;
      }
      while ( v6 < v22 );
    }
    *a6 = 2 * v9;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    v8 = -1073741801;
  }
  if ( Handle )
    ZwClose(Handle);
  return v8;
}
