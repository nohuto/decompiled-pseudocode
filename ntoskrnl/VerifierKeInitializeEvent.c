/*
 * XREFs of VerifierKeInitializeEvent @ 0x140ABD340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeEvent()
{
  return ((__int64 (*)(void))pXdvKeInitializeEvent)();
}
