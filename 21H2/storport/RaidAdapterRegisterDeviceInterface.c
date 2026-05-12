/*
 * XREFs of RaidAdapterRegisterDeviceInterface @ 0x1C002DD48
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C002F9F4 (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidAdapterCreateDevmapEntry @ 0x1C002C0CC (RaidAdapterCreateDevmapEntry.c)
 */

__int64 __fastcall RaidAdapterRegisterDeviceInterface(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rbx

  v1 = (struct _UNICODE_STRING *)(a1 + 2120);
  if ( IoRegisterDeviceInterface(
         *(PDEVICE_OBJECT *)(a1 + 32),
         &GUID_DEVINTERFACE_STORAGEPORT,
         0LL,
         (PUNICODE_STRING)(a1 + 2120)) >= 0
    && IoSetDeviceInterfaceState(v1, 1u) < 0 )
  {
    RtlFreeUnicodeString(v1);
  }
  RaidAdapterCreateDevmapEntry(a1);
  return 0LL;
}
