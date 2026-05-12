/*
 * XREFs of RaQueryInterface @ 0x1C0044798
 * Callers:
 *     RaInitializeBus @ 0x1C0079EE8 (RaInitializeBus.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0011710 (RaSendIrpSynchronous.c)
 */

__int64 __fastcall RaQueryInterface(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  PIRP Irp; // rax
  IRP *v7; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int Status; // edi

  Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
  v7 = Irp;
  if ( !Irp )
    return 3221225626LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = -1073741637;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_BUS_INTERFACE_STANDARD;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a5;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
  CurrentStackLocation[-1].Parameters.Create.Options = 65600;
  Status = RaSendIrpSynchronous(DeviceObject, Irp);
  if ( Status >= 0 )
    Status = v7->IoStatus.Status;
  IoFreeIrp(v7);
  return (unsigned int)Status;
}
