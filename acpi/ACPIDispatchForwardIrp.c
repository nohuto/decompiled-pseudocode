/*
 * XREFs of ACPIDispatchForwardIrp @ 0x1C0001770
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001290 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIDispatchForwardIrpWithExceptions @ 0x1C00244D0 (ACPIDispatchForwardIrpWithExceptions.c)
 *     ACPIDispatchWmiLog @ 0x1C0046FE0 (ACPIDispatchWmiLog.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C007E480 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIEcOtherIrpDispatch @ 0x1C00832C0 (ACPIEcOtherIrpDispatch.c)
 *     ACPIFilterIrpQueryId @ 0x1C0085F00 (ACPIFilterIrpQueryId.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0086160 (ACPIFilterIrpQueryInterface.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0086660 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIRootIrpQueryInterface @ 0x1C00944D0 (ACPIRootIrpQueryInterface.c)
 *     ACPIThermalWmi @ 0x1C0096250 (ACPIThermalWmi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchForwardIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  KIRQL v4; // al
  __int64 v5; // rdi
  unsigned int Status; // edi

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v5 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v5 && *(_DWORD *)(v5 + 16) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( *(_QWORD *)(v5 + 776) )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 776), Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
