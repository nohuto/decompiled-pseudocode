/*
 * XREFs of IoDeleteDevice @ 0x140368010
 * Callers:
 *     DifIoDeleteDeviceWrapper @ 0x1405DC8C0 (DifIoDeleteDeviceWrapper.c)
 *     RawMountVolume @ 0x1406F37D0 (RawMountVolume.c)
 *     RawDeleteVcb @ 0x1406F3E2C (RawDeleteVcb.c)
 *     IopPnPDispatch @ 0x1407F7890 (IopPnPDispatch.c)
 *     IopLegacyResourceAllocation @ 0x140801DA4 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140801EC8 (IopRemoveLegacyDeviceNode.c)
 *     HalpAddDevice @ 0x140802640 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x14081D1C8 (IopCreateRootEnumeratedDeviceObject.c)
 *     IoCreateDeviceSecure @ 0x14083BAD0 (IoCreateDeviceSecure.c)
 *     PiSwGetChildPdo @ 0x140846F50 (PiSwGetChildPdo.c)
 *     PiSwDestroyDeviceObject @ 0x14096423C (PiSwDestroyDeviceObject.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     RawShutdown @ 0x1409B52A0 (RawShutdown.c)
 *     VrpRegistryUnload @ 0x140A6F3C0 (VrpRegistryUnload.c)
 *     ViDdiDriverEntry @ 0x140AC0E40 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140ADC20C (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140ADC600 (ViFilterDispatchPnp.c)
 *     RawInitialize @ 0x140B53CA0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140B53F10 (WmipDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x140368158 (PoRunDownDeviceObject.c)
 *     IopRemoveTimerFromTimerList @ 0x140555640 (IopRemoveTimerFromTimerList.c)
 *     ObQueryNameString @ 0x14071EA00 (ObQueryNameString.c)
 *     ObMakeTemporaryObject @ 0x140791C40 (ObMakeTemporaryObject.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1407F0EC4 (EtwTiLogDeviceObjectLoadUnload.c)
 *     PnpFreeInterruptInformation @ 0x1407F15AC (PnpFreeInterruptInformation.c)
 *     IoUnregisterShutdownNotification @ 0x140A96D40 (IoUnregisterShutdownNotification.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x140ABE694 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  struct _OBJECT_NAME_INFORMATION *v2; // rsi
  struct _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  struct _OBJECT_NAME_INFORMATION *Pool2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool2 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 860778313LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      if ( ObQueryNameString(DeviceObject, Pool2, ReturnLength, &ReturnLength) >= 0 )
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
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject, 0, v6);
}
