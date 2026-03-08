/*
 * XREFs of VfEvtDeviceSurpriseRemoval @ 0x1C00B9060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     VerifyCriticalRegionEntry @ 0x1C002E830 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C002E864 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C002E8CC (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00B84EC (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtDeviceSurpriseRemoval(WDFDEVICE__ *Device)
{
  char *TypedContext; // rdi
  void (__fastcall *v3)(WDFDEVICE__ *); // rsi
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+38h] [rbp+10h] BYREF

  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v3 = (void (__fastcall *)(WDFDEVICE__ *))*((_QWORD *)TypedContext + 13);
  if ( v3 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v3(Device);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v3);
  }
}
