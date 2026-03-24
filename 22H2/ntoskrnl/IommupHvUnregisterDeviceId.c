/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x1404DA2FC
 * Callers:
 *     HalpIommuDeleteDevice @ 0x140864CA0 (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnregisterDeviceId()
{
  return ((__int64 (*)(void))qword_140C4A368)();
}
