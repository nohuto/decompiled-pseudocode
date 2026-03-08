/*
 * XREFs of IopPoHandleIrp @ 0x1402B981C
 * Callers:
 *     IopfCallDriver @ 0x1402B903C (IopfCallDriver.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x1402B986C (PoHandleIrp.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
