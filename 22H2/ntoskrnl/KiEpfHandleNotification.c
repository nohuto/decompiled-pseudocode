/*
 * XREFs of KiEpfHandleNotification @ 0x140524170
 * Callers:
 *     KiVirtualizationException @ 0x14040F200 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405240E8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140524194 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
