/*
 * XREFs of VerifierIoGetDeviceToVerify @ 0x1405A1C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceToVerify()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceToVerify)();
}
