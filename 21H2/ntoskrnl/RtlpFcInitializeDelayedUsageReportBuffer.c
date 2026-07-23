/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x14091A260
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset(a1, 0, 0x310uLL);
}
