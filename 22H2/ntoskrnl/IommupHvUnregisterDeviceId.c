/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x14052565C
 * Callers:
 *     HalpIommuCreateDevice @ 0x14082AB98 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x1409339FC (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnregisterDeviceId()
{
  return ((__int64 (*)(void))qword_140C62700)();
}
