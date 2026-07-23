/*
 * XREFs of VerifierIoInitializeIrp @ 0x1409D3C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoInitializeIrp()
{
  return ((__int64 (*)(void))pXdvIoInitializeIrp)();
}
