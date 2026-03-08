/*
 * XREFs of VerifierKeInsertQueueDpc @ 0x140AD2560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInsertQueueDpc()
{
  return ((__int64 (*)(void))pXdvKeInsertQueueDpc)();
}
