/*
 * XREFs of sub_1800F06B0 @ 0x1800F06B0
 * Callers:
 *     sub_1800EE680 @ 0x1800EE680 (sub_1800EE680.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800D5EAC @ 0x1800D5EAC (sub_1800D5EAC.c)
 *     sub_1800EE068 @ 0x1800EE068 (sub_1800EE068.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_1800F06B0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // r9
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *result; // rax

  v2 = a2;
  if ( a2 > 0x666666666666666LL )
    std::vector<void *>::_Xlen();
  v4 = a1[2];
  v5 = *a1;
  v6 = (v4 - *a1) / 40;
  if ( v6 <= 0x666666666666666LL - (v6 >> 1) )
  {
    v7 = v6 + (v6 >> 1);
    if ( v7 < v2 )
      v7 = v2;
    v2 = v7;
  }
  if ( v5 )
  {
    v8 = a1[1];
    if ( v5 != v8 )
    {
      do
      {
        sub_1800D5EAC(v5);
        v5 += 40LL;
      }
      while ( v5 != v8 );
      v4 = a1[2];
      v5 = *a1;
    }
    v9 = 40 * ((v4 - v5) / 40);
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v5 - 8);
      v11 = v9 + 39;
      if ( (unsigned __int64)(v5 - v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v11);
        __debugbreak();
      }
      v5 = *(_QWORD *)(v5 - 8);
    }
    j_j__o_free(v5);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  v12 = sub_1800EE068((__int64)a1, v2);
  *a1 = (__int64)v12;
  a1[1] = (__int64)v12;
  result = &v12[5 * v2];
  a1[2] = (__int64)result;
  return result;
}
