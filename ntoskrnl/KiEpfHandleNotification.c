/*
 * XREFs of KiEpfHandleNotification @ 0x140576B90
 * Callers:
 *     KiVirtualizationException @ 0x140429040 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x140576B0C (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140576BB4 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
