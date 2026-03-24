/*
 * XREFs of SepGetCurrentLogLevel @ 0x1405967D0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14027C980 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x1405967FC (SepGetLearningModeObjectInformation.c)
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
