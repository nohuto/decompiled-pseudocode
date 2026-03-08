/*
 * XREFs of ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C0017C04
 * Callers:
 *     ?PerfEvtDeviceD0EntryStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C002E428 (-PerfEvtDeviceD0EntryStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C002E4C0 (-PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C002E558 (-PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDeviceReleaseHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C002E5F0 (-PerfEvtDeviceReleaseHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C002E688 (-PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C002E73C (-PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     imp_WdfObjectDereferenceActual @ 0x1C0043110 (imp_WdfObjectDereferenceActual.c)
 *     imp_WdfObjectReferenceActual @ 0x1C00431E0 (imp_WdfObjectReferenceActual.c)
 *     imp_WdfObjectAllocateContext @ 0x1C00437A0 (imp_WdfObjectAllocateContext.c)
 *     imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1C00B51E0 (imp_VfWdfIoQueueRetrieveFoundRequest.c)
 *     imp_VfWdfIoQueueRetrieveNextRequest @ 0x1C00B5330 (imp_VfWdfIoQueueRetrieveNextRequest.c)
 *     imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1C00B5480 (imp_VfWdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_VfWdfRequestComplete @ 0x1C00B6750 (imp_VfWdfRequestComplete.c)
 *     imp_VfWdfRequestCompleteWithInformation @ 0x1C00B68B0 (imp_VfWdfRequestCompleteWithInformation.c)
 *     imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1C00B6A10 (imp_VfWdfRequestCompleteWithPriorityBoost.c)
 *     VfAddContextToHandle @ 0x1C00B8284 (VfAddContextToHandle.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00B84EC (VfWdfObjectGetTypedContext.c)
 *     VfEvtDeviceD0Entry @ 0x1C00B85B0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0Exit @ 0x1C00B8790 (VfEvtDeviceD0Exit.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00B8970 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00B8C60 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtIoDefault @ 0x1C00B92E0 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00B9490 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00B9660 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00B9830 (VfEvtIoRead.c)
 *     VfEvtIoWrite @ 0x1C00B9B60 (VfEvtIoWrite.c)
 * Callees:
 *     <none>
 */

FxObject *__fastcall FxObject::_GetObjectFromHandle(unsigned __int64 Handle, unsigned __int16 *ObjectOffset)
{
  unsigned __int16 *v2; // r8
  __int64 v3; // rax

  v2 = (unsigned __int16 *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v3 = *v2;
    *ObjectOffset = v3;
    return (FxObject *)((char *)v2 - v3);
  }
  return (FxObject *)v2;
}
