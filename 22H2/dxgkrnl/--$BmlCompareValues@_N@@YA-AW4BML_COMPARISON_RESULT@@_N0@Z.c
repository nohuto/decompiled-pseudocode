/*
 * XREFs of ??$BmlCompareValues@_N@@YA?AW4BML_COMPARISON_RESULT@@_N0@Z @ 0x1C01EAA7C
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1C01762D4 (BmlCompareTargetModesWithConstraint.c)
 *     BmlGetNextBestSourceMode @ 0x1C017A320 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C03BD18C (BmlCompareSourceModesWithConstraint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<bool>(char a1, char a2)
{
  __int64 result; // rax

  if ( a1 == a2 )
    return 0LL;
  result = 0xFFFFFFFFLL;
  if ( a1 == 1 )
    return 1LL;
  return result;
}
