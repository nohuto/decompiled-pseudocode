/*
 * XREFs of KiForegroundTimerCallback @ 0x1403CFAF0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140C42108, 0LL, 0LL, 0LL, 0);
}
