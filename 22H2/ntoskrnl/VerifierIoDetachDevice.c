/*
 * XREFs of VerifierIoDetachDevice @ 0x140ACFE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoDetachDevice()
{
  return ((__int64 (*)(void))pXdvIoDetachDevice)();
}
