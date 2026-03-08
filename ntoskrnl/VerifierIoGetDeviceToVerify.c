/*
 * XREFs of VerifierIoGetDeviceToVerify @ 0x1405CD4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceToVerify()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceToVerify)();
}
