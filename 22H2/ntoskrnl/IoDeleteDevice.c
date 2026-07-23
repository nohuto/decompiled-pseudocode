/*
 * XREFs of IoDeleteDevice @ 0x140360200
 * Callers:
 *     RawDeleteVcb @ 0x1407190B4 (RawDeleteVcb.c)
 *     RawMountVolume @ 0x140719E00 (RawMountVolume.c)
 *     PiSwDestroyDeviceObject @ 0x140733048 (PiSwDestroyDeviceObject.c)
 *     IoCreateDeviceSecure @ 0x140738920 (IoCreateDeviceSecure.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074E544 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x14074EF40 (IopPnPDispatch.c)
 *     IopLegacyResourceAllocation @ 0x140752C64 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140752D98 (IopRemoveLegacyDeviceNode.c)
 *     PiSwGetChildPdo @ 0x1407705FC (PiSwGetChildPdo.c)
 *     HalpAddDevice @ 0x1407AE8F0 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407C8BD8 (IopCreateRootEnumeratedDeviceObject.c)
 *     VrpRegistryUnload @ 0x140882860 (VrpRegistryUnload.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 *     RawShutdown @ 0x14090F2D0 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x1409C82C0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x1409E4F04 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x1409E5310 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140A69840 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A69AA0 (WmipDriverEntry.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14022C350 (IopVerifierExAllocatePool.c)
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x140360358 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x140360440 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x1403CE608 (IopRemoveTimerFromTimerList.c)
 *     ObMakeTemporaryObject @ 0x1406F62F0 (ObMakeTemporaryObject.c)
 *     ObQueryNameString @ 0x14070FAD0 (ObQueryNameString.c)
 *     PnpFreeInterruptInformation @ 0x1407190E4 (PnpFreeInterruptInformation.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14071979C (EtwTiLogDeviceObjectLoadUnload.c)
 *     IoUnregisterShutdownNotification @ 0x1409AB150 (IoUnregisterShutdownNotification.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x1409C51A8 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  _OBJECT_NAME_INFORMATION *v2; // rsi
  _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  _OBJECT_NAME_INFORMATION *Pool; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool = (_OBJECT_NAME_INFORMATION *)IopVerifierExAllocatePool(PagedPool, ReturnLength);
    v3 = Pool;
    if ( Pool )
    {
      if ( ObQueryNameString(DeviceObject, Pool, ReturnLength, &ReturnLength) >= 0 )
        v2 = v3;
    }
  }
  EtwTiLogDeviceObjectLoadUnload(0LL, &DeviceObject->DriverObject->DriverName, v2);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( (MmVerifierData & 0x90) != 0 )
    IovDeleteDevice(DeviceObject, retaddr);
  if ( (DeviceObject->Flags & 0x800) != 0 )
    IoUnregisterShutdownNotification(DeviceObject);
  Timer = DeviceObject->Timer;
  if ( Timer )
  {
    IopRemoveTimerFromTimerList(DeviceObject->Timer);
    ExFreePoolWithTag(Timer, 0);
  }
  if ( (DeviceObject->Flags & 0x40) != 0 )
    ObMakeTemporaryObject(DeviceObject);
  PoRunDownDeviceObject(DeviceObject);
  PnpFreeInterruptInformation(DeviceObject);
  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v6);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject);
}
