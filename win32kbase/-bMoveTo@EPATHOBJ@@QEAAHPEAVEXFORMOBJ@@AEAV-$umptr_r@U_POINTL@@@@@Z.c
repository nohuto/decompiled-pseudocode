/*
 * XREFs of ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1C0180F30
 * Callers:
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0180FA8 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?bXformRound@EXFORMOBJ@@QEAAHAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1C017FF8C (-bXformRound@EXFORMOBJ@@QEAAHAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1C0180398 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 */

__int64 __fastcall EPATHOBJ::bMoveTo(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
    return 0LL;
  if ( a2 )
    EXFORMOBJ::bXformRound(a2, (__int64 *)a3, v3 + 64, 1uLL);
  else
    umptr_r<_POINTL>::read<_POINTFIX>(a3, (void *)(v3 + 64), 1LL);
  if ( *(_BYTE *)(a3 + 25) || *(_BYTE *)(a3 + 24) )
    return 0LL;
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 80LL) |= 5u;
  return result;
}
