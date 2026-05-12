/*
 * XREFs of RaGetBusInterface @ 0x1C0044688
 * Callers:
 *     RaidInitializeAdapter @ 0x1C0079538 (RaidInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 */

__int64 __fastcall RaGetBusInterface(struct _DEVICE_OBJECT *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  __int128 PropertyBuffer; // [rsp+38h] [rbp-20h] BYREF

  ResultLength = 0;
  PropertyBuffer = 0LL;
  if ( IoGetDeviceProperty(a1, DevicePropertyBusTypeGuid, 0x10u, &PropertyBuffer, &ResultLength) >= 0 )
  {
    v1 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1;
    if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1 )
      v1 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_PCMCIA.Data4;
    if ( !v1 )
      return 1LL;
    v2 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1;
    if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1 )
      v2 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_PCI.Data4;
    if ( !v2 )
      return 5LL;
    v4 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1;
    if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1 )
      v4 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_ISAPNP.Data4;
    if ( !v4 )
      return 1LL;
    v5 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1;
    if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1 )
      v5 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_EISA.Data4;
    if ( !v5 )
      return 2LL;
    v6 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_ACPI.Data1;
    if ( (_QWORD)PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_ACPI.Data1 )
      v6 = *((_QWORD *)&PropertyBuffer + 1) - *(_QWORD *)GUID_BUS_TYPE_ACPI.Data4;
    if ( !v6 )
      return 17LL;
  }
  return 0xFFFFFFFFLL;
}
