/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x14025BF64
 * Callers:
 *     MiValidateUserCallTarget @ 0x1406FA2A4 (MiValidateUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1406FAA44 (MiCfgMarkValidEntries.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgExportSuppressionEnabled()
{
  return *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 448)
      && ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 2) != 0;
}
