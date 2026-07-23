/*
 * XREFs of SepGetCurrentLogLevel @ 0x140596A00
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14026A920 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x140596A2C (SepGetLearningModeObjectInformation.c)
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
