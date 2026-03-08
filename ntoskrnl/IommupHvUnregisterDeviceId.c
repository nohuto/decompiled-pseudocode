/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x14052312C
 * Callers:
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140930ACC (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnregisterDeviceId()
{
  return ((__int64 (*)(void))qword_140C622A0)();
}
