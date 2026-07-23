/*
 * XREFs of VerifierIoGetDriverDirectory @ 0x1409D3C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDriverDirectory()
{
  return ((__int64 (*)(void))pXdvIoGetDriverDirectory)();
}
