/*
 * XREFs of ?bXformRound@EXFORMOBJ@@QEAAHAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1C017FF8C
 * Callers:
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0180080 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1C0180F30 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C01811A8 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C018148C (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     umptr_r__POINTL_::enumerate__POINTFIX__lambda_1867cd5895269d65287c9f43997bc2e1___ @ 0x1C017FA30 (umptr_r__POINTL_--enumerate__POINTFIX__lambda_1867cd5895269d65287c9f43997bc2e1___.c)
 *     bCvtPts @ 0x1C0274DEC (bCvtPts.c)
 */

__int64 __fastcall EXFORMOBJ::bXformRound(__int64 *a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD *v5; // rbx
  __int64 v7; // rcx
  unsigned int v9; // r14d
  _DWORD *v10; // rcx

  v5 = (_DWORD *)a3;
  v7 = *a1;
  if ( (*(_BYTE *)(v7 + 32) & 0x43) == 0x43 )
    return (unsigned __int8)umptr_r__POINTL_::enumerate__POINTFIX__lambda_1867cd5895269d65287c9f43997bc2e1___(
                              a2,
                              a3,
                              a4);
  v9 = bCvtPts(v7, *a2 + 8 * a2[2], a3);
  if ( !v9 )
    EngSetLastError(0x216u);
  if ( *((_DWORD *)a1 + 2) != 2 )
  {
    v10 = &v5[2 * a4];
    while ( v5 < v10 )
    {
      *v5 = (*v5 + 8) & 0xFFFFFFF0;
      v5[1] = (v5[1] + 8) & 0xFFFFFFF0;
      v5 += 2;
    }
  }
  return v9;
}
