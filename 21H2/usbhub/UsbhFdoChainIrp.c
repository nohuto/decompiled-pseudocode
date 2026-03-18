/*
 * XREFs of UsbhFdoChainIrp @ 0x1C002996C
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C0002C70 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C000EDC0 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoSystemControl @ 0x1C000F730 (UsbhFdoSystemControl.c)
 *     UsbhFdoDeviceControl @ 0x1C0029C60 (UsbhFdoDeviceControl.c)
 *     UsbhFdoReturnHubCount @ 0x1C00306A0 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C00307E8 (UsbhFdoReturnRootHubPdo.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
