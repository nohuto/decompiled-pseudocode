/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x1406A688C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140990530 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
