/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x1406EBC14
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B156F8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset(a1, 0, 0x310uLL);
}
