/*
 * XREFs of VerifierKeInsertQueueDpc @ 0x140AD6560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInsertQueueDpc()
{
  return ((__int64 (*)(void))pXdvKeInsertQueueDpc)();
}
