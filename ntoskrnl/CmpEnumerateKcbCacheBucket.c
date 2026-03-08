/*
 * XREFs of CmpEnumerateKcbCacheBucket @ 0x14074B950
 * Callers:
 *     CmpEnumerateAllOpenSubKeys @ 0x14074B88C (CmpEnumerateAllOpenSubKeys.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpEnumerateKcbCacheBucket(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64),
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // r8

  v4 = *(_QWORD *)(a2 + 16);
  while ( v4 )
  {
    v9 = v4 - 16;
    v10 = *(_DWORD *)(v4 - 16 + 8);
    v4 = *(_QWORD *)(v4 + 8);
    v11 = (v10 >> 21) & 0x3FF;
    v12 = (*(_DWORD *)(a1 + 8) >> 21) & 0x3FF;
    if ( v12 < v11 )
    {
      v13 = v9;
      v14 = v11 - v12;
      do
      {
        v13 = *(_QWORD *)(v13 + 72);
        --v14;
      }
      while ( v14 );
      if ( v13 == a1 )
      {
        result = a3(v9, a4);
        if ( (_DWORD)result )
          return result;
      }
    }
  }
  return 0LL;
}
