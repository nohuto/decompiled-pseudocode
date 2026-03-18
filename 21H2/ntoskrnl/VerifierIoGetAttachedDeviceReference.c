/*
 * XREFs of VerifierIoGetAttachedDeviceReference @ 0x140A7EDA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetAttachedDeviceReference()
{
  return ((__int64 (*)(void))pXdvIoGetAttachedDeviceReference)();
}
