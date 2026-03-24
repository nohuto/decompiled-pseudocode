/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x14091A150
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset(a1, 0, 0x310uLL);
}
