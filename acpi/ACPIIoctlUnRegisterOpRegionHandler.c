__int64 __fastcall ACPIIoctlUnRegisterOpRegionHandler(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 DeviceExtension; // rax
  unsigned int v6; // ebx

  v3 = *(_DWORD *)(a3 + 16);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( v3 >= 0x10 )
    v6 = UnRegisterOperationRegionHandler(*(_QWORD *)(DeviceExtension + 760), a2->AssociatedIrp.MasterIrp->MdlAddress);
  else
    v6 = -1073741820;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  return v6;
}
