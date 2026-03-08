/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x14079C7B0
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset(a1, 0, 0x310uLL);
}
