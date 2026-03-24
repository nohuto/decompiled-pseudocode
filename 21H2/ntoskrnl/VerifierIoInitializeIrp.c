/*
 * XREFs of VerifierIoInitializeIrp @ 0x1409D2C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoInitializeIrp()
{
  return ((__int64 (*)(void))pXdvIoInitializeIrp)();
}
