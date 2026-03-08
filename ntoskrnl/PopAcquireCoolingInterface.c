/*
 * XREFs of PopAcquireCoolingInterface @ 0x14084BC94
 * Callers:
 *     PopAssociateThermalRequest @ 0x14084BAD0 (PopAssociateThermalRequest.c)
 *     PopCoolingExtensionPnpNotification @ 0x14097FDF0 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     IoAllocateIrp @ 0x140208CF0 (IoAllocateIrp.c)
 *     IoSynchronousCallDriver @ 0x1402E9470 (IoSynchronousCallDriver.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 */

__int64 __fastcall PopAcquireCoolingInterface(__int64 a1)
{
  PIRP Irp; // rax
  IRP *v3; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v5; // ebx

  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 48) + 76LL), 0);
  v3 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&GUID_THERMAL_COOLING_INTERFACE;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a1 + 88;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.Create.Options = 65592;
    Irp->IoStatus.Status = -1073741637;
    v5 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), Irp);
    IoFreeIrp(v3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
