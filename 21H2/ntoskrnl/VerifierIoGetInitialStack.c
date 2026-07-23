/*
 * XREFs of VerifierIoGetInitialStack @ 0x1409D3C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetInitialStack()
{
  return ((__int64 (*)(void))pXdvIoGetInitialStack)();
}
