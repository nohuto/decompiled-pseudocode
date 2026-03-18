/*
 * XREFs of IopPoHandleIrp @ 0x14028D60C
 * Callers:
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 *     IopfCallDriver @ 0x14028CEA4 (IopfCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x14028D65C (PoHandleIrp.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopPoHandleIrp(IRP *a1)
{
  if ( (unsigned __int8)PoHandleIrp(a1) )
    return 0LL;
  else
    return ((__int64 (__fastcall *)(PDEVICE_OBJECT, IRP *))a1->Tail.Overlay.CurrentStackLocation->DeviceObject->DriverObject->MajorFunction[a1->Tail.Overlay.CurrentStackLocation->MajorFunction])(
             a1->Tail.Overlay.CurrentStackLocation->DeviceObject,
             a1);
}
