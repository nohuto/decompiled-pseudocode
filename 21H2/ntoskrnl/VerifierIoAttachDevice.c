/*
 * XREFs of VerifierIoAttachDevice @ 0x1409D26C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAttachDevice()
{
  return ((__int64 (*)(void))pXdvIoAttachDevice)();
}
