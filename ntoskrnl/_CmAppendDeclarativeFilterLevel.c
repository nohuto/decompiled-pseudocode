/*
 * XREFs of _CmAppendDeclarativeFilterLevel @ 0x140A643AC
 * Callers:
 *     _CmAppendDeclarativeDefaultFilters @ 0x140A642C4 (_CmAppendDeclarativeDefaultFilters.c)
 *     _CmGetDeclarativeFilterList @ 0x140A64F80 (_CmGetDeclarativeFilterList.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     _PnpMultiSzAppend @ 0x140839FAC (_PnpMultiSzAppend.c)
 *     _PnpCtxRegEnumValue @ 0x140866444 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1408665AC (_PnpCtxRegQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmAppendDeclarativeFilterLevel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        wchar_t *a4,
        unsigned int a5,
        _DWORD *a6)
{
  ULONG v6; // r14d
  wchar_t *v7; // r15
  unsigned int v8; // ebx
  int v9; // edi
  void *Pool2; // rsi
  unsigned int v11; // r13d
  __int64 v12; // rcx
  int InfoKey; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  char v17; // al
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  wchar_t *v20; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+30h] BYREF
  ULONG v22; // [rsp+98h] [rbp+48h] BYREF

  v6 = 0;
  Handle = 0LL;
  v7 = a4;
  v20 = a4;
  v8 = 0;
  v22 = 0;
  v9 = 0;
  *a6 = 0;
  Pool2 = 0LL;
  v21 = 0;
  v11 = 0;
  if ( a1 )
    v12 = *(_QWORD *)(a1 + 224);
  else
    v12 = 0LL;
  InfoKey = SysCtxRegOpenKey(v12, a2, a3, 0, 0x80000000, (__int64)&Handle);
  if ( InfoKey < 0
    || (InfoKey = PnpCtxRegQueryInfoKey(v14, (int)Handle, 0, 0, (__int64)&v22, (__int64)&v21, 0LL), InfoKey < 0) )
  {
    v8 = InfoKey;
  }
  else if ( !v7 || (v11 = v21 + 1, (Pool2 = (void *)ExAllocatePool2(256LL, 2LL * (v21 + 1), 1380994640LL)) != 0LL) )
  {
    if ( v22 )
    {
      do
      {
        v21 = v11;
        v16 = PnpCtxRegEnumValue(v15, Handle, v6, Pool2, (__int64)&v21, 0LL, 0LL, 0LL);
        v15 = 3221225507LL;
        if ( v16 == -1073741789 )
        {
          v9 += v21;
          v8 = -1073741789;
        }
        else
        {
          if ( v16 < 0 )
          {
            v8 = v16;
            break;
          }
          v9 += v21;
          if ( v7 )
          {
            v21 = a5;
            ++v9;
            v17 = PnpMultiSzAppend(v7, &v21, (const wchar_t *)Pool2, &v20);
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
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    v8 = -1073741801;
  }
  if ( Handle )
    ZwClose(Handle);
  return v8;
}
