/*
 * XREFs of SepGetCurrentLogLevel @ 0x1405B634C
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1405B5FAC (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x1405B6378 (SepGetLearningModeObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 SepGetCurrentLogLevel()
{
  if ( KeGetCurrentIrql() )
    return 2LL;
  else
    return KeGetCurrentThread()->ApcState.InProgressFlags & 1;
}
