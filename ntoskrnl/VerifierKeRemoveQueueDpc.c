/*
 * XREFs of VerifierKeRemoveQueueDpc @ 0x140AD26C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeRemoveQueueDpc()
{
  return ((__int64 (*)(void))pXdvKeRemoveQueueDpc)();
}
