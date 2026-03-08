/*
 * XREFs of ?ssizet_add_to_sizet@?$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z @ 0x1C0180144
 * Callers:
 *     ?internal_get_offset@?$umptr@U_POINTL@@@@IEBA_KAEB_J@Z @ 0x1C01800FC (-internal_get_offset@-$umptr@U_POINTL@@@@IEBA_KAEB_J@Z.c)
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C0180C10 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C01811A8 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C018148C (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall umptr<_POINTL>::ssizet_add_to_sizet(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rcx

  if ( a1 > 0x7FFFFFFFFFFFFFFFLL )
    return 0;
  v3 = a1 + a2;
  v4 = a1 >> 63;
  if ( (_DWORD)v4 == a2 >> 63 && (_DWORD)v4 != (unsigned __int64)v3 >> 63 )
    return 0;
  if ( v3 < 0 )
    return 0;
  *a3 = v3;
  return 1;
}
