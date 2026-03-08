/*
 * XREFs of MmQueryTransitionPagesMadeColdCount @ 0x14035B480
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x1407E3F78 (PfSnCheckActionsNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQueryTransitionPagesMadeColdCount(unsigned int *a1)
{
  *a1 = ((unsigned int)HvlEnlightenments >> 21) & 1;
  return (unsigned int)MiTransitionPagesMadeCold;
}
