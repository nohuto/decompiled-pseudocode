/*
 * XREFs of sub_1800ADF84 @ 0x1800ADF84
 * Callers:
 *     sub_1800A5DA0 @ 0x1800A5DA0 (sub_1800A5DA0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180031970 @ 0x180031970 (sub_180031970.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 *__fastcall sub_1800ADF84(__int64 **a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 *v4; // rdx
  __int64 *v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 *v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 *result; // rax

  v3 = a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v4 = a1[2];
  v5 = *a1;
  v6 = ((char *)v4 - (char *)*a1) >> 5;
  if ( v6 <= 0x7FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v7 = (v6 >> 1) + v6;
    if ( v7 < v3 )
      v7 = v3;
    v3 = v7;
  }
  if ( v5 )
  {
    v8 = a1[1];
    if ( v5 != v8 )
    {
      do
      {
        unknown_libname_101(v5);
        v5 += 4;
      }
      while ( v5 != v8 );
      v4 = a1[2];
      v5 = *a1;
    }
    v9 = ((char *)v4 - (char *)v5) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v9 >= 0x1000 )
    {
      v10 = *(v5 - 1);
      v11 = v9 + 39;
      if ( (unsigned __int64)v5 - v10 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v11);
        __debugbreak();
      }
      v5 = (__int64 *)*(v5 - 1);
    }
    j_j__o_free(v5);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  result = sub_180031970((__int64)a1, v3);
  *a1 = result;
  a1[2] = &result[4 * v3];
  a1[1] = result;
  return result;
}
