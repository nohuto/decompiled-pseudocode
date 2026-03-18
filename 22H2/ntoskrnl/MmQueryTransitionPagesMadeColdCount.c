/*
 * XREFs of MmQueryTransitionPagesMadeColdCount @ 0x1402F5F74
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x14074E508 (PfSnCheckActionsNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQueryTransitionPagesMadeColdCount(unsigned int *a1)
{
  *a1 = ((unsigned int)HvlEnlightenments >> 21) & 1;
  return (unsigned int)MiTransitionPagesMadeCold;
}
