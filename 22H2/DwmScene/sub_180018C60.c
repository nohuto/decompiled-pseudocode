/*
 * XREFs of sub_180018C60 @ 0x180018C60
 * Callers:
 *     unknown_libname_37 @ 0x1801214B6 (unknown_libname_37.c)
 *     sub_180125EA9 @ 0x180125EA9 (sub_180125EA9.c)
 *     sub_18012631B @ 0x18012631B (sub_18012631B.c)
 *     sub_180126E89 @ 0x180126E89 (sub_180126E89.c)
 *     sub_1801298D1 @ 0x1801298D1 (sub_1801298D1.c)
 *     sub_1801298F7 @ 0x1801298F7 (sub_1801298F7.c)
 *     sub_18012991D @ 0x18012991D (sub_18012991D.c)
 *     unknown_libname_150 @ 0x180129929 (unknown_libname_150.c)
 *     sub_180129F39 @ 0x180129F39 (sub_180129F39.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180018C60(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *a1;
  if ( v2 )
  {
    v3 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x180018CBCLL);
      }
      v2 = v4;
    }
    j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
