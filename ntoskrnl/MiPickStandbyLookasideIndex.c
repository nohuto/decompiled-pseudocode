/*
 * XREFs of MiPickStandbyLookasideIndex @ 0x14064EF14
 * Callers:
 *     MiLockStandbyLookasidePage @ 0x140464910 (MiLockStandbyLookasidePage.c)
 * Callees:
 *     <none>
 */

__int64 MiPickStandbyLookasideIndex()
{
  unsigned int Number; // r8d

  Number = KeGetPcr()->Prcb.Number;
  if ( (unsigned int)KeNumberProcessors_0 < 0x40 )
  {
    if ( 0x40 / (unsigned int)KeNumberProcessors_0 > 1 )
      Number *= 0x40 / (unsigned int)KeNumberProcessors_0;
  }
  else
  {
    return Number & 0x3F;
  }
  return Number;
}
