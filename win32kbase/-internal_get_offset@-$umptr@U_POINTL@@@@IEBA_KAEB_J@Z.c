/*
 * XREFs of ?internal_get_offset@?$umptr@U_POINTL@@@@IEBA_KAEB_J@Z @ 0x1C01800FC
 * Callers:
 *     umptr_r__POINTL_::enumerate__POINTFIX__lambda_1867cd5895269d65287c9f43997bc2e1___ @ 0x1C017FA30 (umptr_r__POINTL_--enumerate__POINTFIX__lambda_1867cd5895269d65287c9f43997bc2e1___.c)
 *     umptr_r__POINTL_::enumerate__POINTFIX__lambda_7f7dd7d542b1a81b17ae61408d3670f9___ @ 0x1C01802A8 (umptr_r__POINTL_--enumerate__POINTFIX__lambda_7f7dd7d542b1a81b17ae61408d3670f9___.c)
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1C0180398 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 * Callees:
 *     ?ssizet_add_to_sizet@?$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z @ 0x1C0180144 (-ssizet_add_to_sizet@-$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z.c)
 */

unsigned __int64 __fastcall umptr<_POINTL>::internal_get_offset(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  char v4; // al
  __int64 v5; // r10
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v7 = 0LL;
    v4 = umptr<_POINTL>::ssizet_add_to_sizet(v3, v2, &v7);
    v3 = v7;
    if ( !v4 || v7 > *(_QWORD *)(v5 + 8) )
      *(_BYTE *)(v5 + 24) = 1;
  }
  return v3;
}
