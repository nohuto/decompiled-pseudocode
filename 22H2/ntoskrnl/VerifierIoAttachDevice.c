/*
 * XREFs of VerifierIoAttachDevice @ 0x140ACFAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAttachDevice()
{
  return ((__int64 (*)(void))pXdvIoAttachDevice)();
}
