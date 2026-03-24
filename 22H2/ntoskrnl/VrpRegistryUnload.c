/*
 * XREFs of VrpRegistryUnload @ 0x140882860
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoDeleteDevice @ 0x140360200 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x140882780 (TraceLoggingUnregister_EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x140905A80 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( (unsigned int)dword_140C02168 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02168, (unsigned __int8 *)&word_140023FBE, 0LL, 0LL, 2u, &v1);
  return TraceLoggingUnregister_EtwUnregister((__int64)&dword_140C02168);
}
