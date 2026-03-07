NTSTATUS VrpRegistryUnload()
{
  REGHANDLE v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot(VrpSiloContextSlot);
  if ( (unsigned int)dword_140C043C0 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C043C0, (unsigned __int8 *)byte_140039F4D, 0LL, 0LL, 2u, &v2);
  v0 = qword_140C043E0;
  qword_140C043E0 = 0LL;
  dword_140C043C0 = 0;
  return EtwUnregister(v0);
}
