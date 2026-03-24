/*
 * XREFs of VerifierIoGetAttachedDeviceReference @ 0x1409D2AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetAttachedDeviceReference()
{
  return ((__int64 (*)(void))pXdvIoGetAttachedDeviceReference)();
}
