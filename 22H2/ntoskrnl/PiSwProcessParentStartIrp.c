/*
 * XREFs of PiSwProcessParentStartIrp @ 0x1407E13C8
 * Callers:
 *     PnpStartDeviceNode @ 0x1407939E0 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1407955BC (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     IoInvalidateDeviceRelations @ 0x140358990 (IoInvalidateDeviceRelations.c)
 *     PiSwFindChildren @ 0x14079884C (PiSwFindChildren.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Children; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = PiSwFindChildren();
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
