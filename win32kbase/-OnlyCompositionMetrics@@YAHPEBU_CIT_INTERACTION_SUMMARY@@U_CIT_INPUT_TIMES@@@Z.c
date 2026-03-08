/*
 * XREFs of ?OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z @ 0x1C008830C
 * Callers:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0087D08 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OnlyCompositionMetrics(__int64 a1, _WORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *a2
    || (*(_DWORD *)(a1 + 124) & 0xFFFFFF) != 0
    || (*(_DWORD *)(a1 + 116) & 0xFFFFFF) != 0
    || *(_WORD *)(a1 + 106)
    || *(_WORD *)(a1 + 104) )
  {
    return 0LL;
  }
  if ( *(_WORD *)(a1 + 110) || *(_WORD *)(a1 + 112) )
    return 1LL;
  LOBYTE(v2) = *(_WORD *)(a1 + 108) != 0;
  return v2;
}
