/*
 * XREFs of VrpRegistryUnload @ 0x140926260
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x1409AB6D0 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  REGHANDLE v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( (unsigned int)dword_140C038A0 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C038A0, (unsigned __int8 *)byte_14002A5B3, 0LL, 0LL, 2u, &v2);
  v0 = qword_140C038C0;
  qword_140C038C0 = 0LL;
  dword_140C038A0 = 0;
  return EtwUnregister(v0);
}
