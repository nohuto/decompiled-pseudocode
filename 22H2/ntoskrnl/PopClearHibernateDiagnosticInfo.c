/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x1409885DC
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140AA6A10 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
