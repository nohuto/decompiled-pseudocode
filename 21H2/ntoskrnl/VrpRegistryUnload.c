/*
 * XREFs of VrpRegistryUnload @ 0x140882970
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x140882890 (TraceLoggingUnregister_EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x140905B90 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( (unsigned int)dword_140C02168 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02168, (unsigned __int8 *)byte_140024100, 0LL, 0LL, 2u, &v1);
  return TraceLoggingUnregister_EtwUnregister((__int64)&dword_140C02168);
}
