/*
 * XREFs of UsbhFdoChainIrp @ 0x1C002ACBC
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0014DE0 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoSystemControl @ 0x1C0015970 (UsbhFdoSystemControl.c)
 *     UsbhFdoInternalDeviceControl @ 0x1C001C2D0 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoDeviceControl @ 0x1C002AFB0 (UsbhFdoDeviceControl.c)
 *     UsbhFdoReturnHubCount @ 0x1C0031A48 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0031B90 (UsbhFdoReturnRootHubPdo.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
