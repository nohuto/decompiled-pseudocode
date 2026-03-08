/*
 * XREFs of VerifyCriticalRegionEntry @ 0x1C002E830
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00B85B0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00B86E0 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00B8790 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00B88C0 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00B8970 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00B8AA0 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00B8B30 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00B8BC0 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00B8C60 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00B8D90 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00B8E20 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00B8EB0 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00B8F40 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00B8FD0 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00B9060 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00B90F0 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00B91A0 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00B9250 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00B92E0 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00B9490 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00B9660 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00B9830 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00B99E0 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00B9A70 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00B9B60 (VfEvtIoWrite.c)
 * Callees:
 *     <none>
 */

void __fastcall VerifyCriticalRegionEntry(unsigned __int8 *CritRegion)
{
  if ( KeGetCurrentIrql() <= 1u )
    *CritRegion = KeAreApcsDisabled();
}
