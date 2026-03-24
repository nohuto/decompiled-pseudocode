/*
 * XREFs of UsbhSetSqmEnumerationData @ 0x1C0047998
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0055B40 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0047814 (UsbhSetPdoRegistryParameter.c)
 */

__int64 __fastcall UsbhSetSqmEnumerationData(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  __int64 result; // rax

  v2 = PdoExt((__int64)DeviceObject);
  if ( v2[706] )
    UsbhSetPdoRegistryParameter(DeviceObject, L"MsOs20Flags", 4LL, v2 + 706, 4u);
  result = UsbhGetPortData(*((_QWORD *)v2 + 148), *((_WORD *)v2 + 714));
  if ( result )
    return UsbhSetPdoRegistryParameter(DeviceObject, L"EnumerationRetryCount", 4LL, (PVOID)(result + 544), 4u);
  return result;
}
