/*
 * XREFs of VerifierKeInitializeEvent @ 0x140A7F3B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeEvent()
{
  return ((__int64 (*)(void))pXdvKeInitializeEvent)();
}
