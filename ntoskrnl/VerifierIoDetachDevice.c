/*
 * XREFs of VerifierIoDetachDevice @ 0x140ACBE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoDetachDevice()
{
  return ((__int64 (*)(void))pXdvIoDetachDevice)();
}
