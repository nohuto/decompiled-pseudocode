/*
 * XREFs of ??$BmlCompareValues@_N@@YA?AW4BML_COMPARISON_RESULT@@_N0@Z @ 0x1C01DD75C
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C01706B0 (BmlGetNextBestSourceMode.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C017116C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C03B88CC (BmlCompareSourceModesWithConstraint.c)
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
