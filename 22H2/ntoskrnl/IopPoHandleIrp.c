/*
 * XREFs of IopPoHandleIrp @ 0x140397F34
 * Callers:
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     IopfCallDriver @ 0x140370BE4 (IopfCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x140397F84 (PoHandleIrp.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
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
