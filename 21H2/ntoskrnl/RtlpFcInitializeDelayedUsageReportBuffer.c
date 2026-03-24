/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x14091A100
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset(a1, 0, 0x310uLL);
}
