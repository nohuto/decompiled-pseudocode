/*
 * XREFs of UsbhFdoChainIrp @ 0x1C002A33C
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C0004330 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0005240 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoSystemControl @ 0x1C001F6E0 (UsbhFdoSystemControl.c)
 *     UsbhFdoDeviceControl @ 0x1C002A630 (UsbhFdoDeviceControl.c)
 *     UsbhFdoReturnHubCount @ 0x1C0031078 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C00311C0 (UsbhFdoReturnRootHubPdo.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
