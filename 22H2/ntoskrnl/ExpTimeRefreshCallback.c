/*
 * XREFs of ExpTimeRefreshCallback @ 0x1403D6AB0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&ExpTimeRefreshDpc, 0LL, 0LL, 0LL, 0);
}
