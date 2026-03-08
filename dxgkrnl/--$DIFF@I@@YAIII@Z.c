/*
 * XREFs of ??$DIFF@I@@YAIII@Z @ 0x1C0069724
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1C017116C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1C03B89AC (BmlCompareTargetModeWithVirtualRefreshRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DIFF<unsigned int>(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a1 - a2;
  if ( a1 <= a2 )
    return a2 - a1;
  return result;
}
