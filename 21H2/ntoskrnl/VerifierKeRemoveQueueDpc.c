/*
 * XREFs of VerifierKeRemoveQueueDpc @ 0x140A961C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeRemoveQueueDpc()
{
  return ((__int64 (*)(void))pXdvKeRemoveQueueDpc)();
}
