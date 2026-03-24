/*
 * XREFs of KiForegroundTimerCallback @ 0x14031A270
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140C31F08, 0LL, 0LL, 0LL, 0);
}
