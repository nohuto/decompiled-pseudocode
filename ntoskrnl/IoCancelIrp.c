/*
 * XREFs of IoCancelIrp @ 0x1402E4F50
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x140201018 (FsRtlpWaitOnIrp.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1402E4DC4 (IopCancelIrpsInCurrentThreadList.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030F360 (IopCancelIrpsInFileObjectList.c)
 *     PopThermalPollingPowerSettingCallback @ 0x1403B0C70 (PopThermalPollingPowerSettingCallback.c)
 *     PopThermalZoneDpc @ 0x1403C7A40 (PopThermalZoneDpc.c)
 *     PopThermalZoneTimerCallback @ 0x14045AA10 (PopThermalZoneTimerCallback.c)
 *     NtCancelIoFile @ 0x14076FE10 (NtCancelIoFile.c)
 *     FsRtlSetKernelEaFile @ 0x140786AA0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1407D8DE0 (FsRtlQueryKernelEaFile.c)
 *     IoCancelThreadIo @ 0x1407D9E54 (IoCancelThreadIo.c)
 *     FsRtlKernelFsControlFile @ 0x1407DB1B0 (FsRtlKernelFsControlFile.c)
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x14093BDB0 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14094140C (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x140969D18 (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x140987EB4 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x140988010 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x14098816C (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x140992740 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x140994310 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IovpCancelRoutine @ 0x140ABCCBC (IovpCancelRoutine.c)
 *     IovCancelIrp @ 0x140ABE448 (IovCancelIrp.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  void (__fastcall *v3)(PDEVICE_OBJECT, PIRP); // rdi
  KIRQL v4; // si
  bool v5; // zf

  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 )
    IovCancelIrp();
  v2 = KeAcquireQueuedSpinLock(7uLL);
  Irp->Cancel = 1;
  v3 = (void (__fastcall *)(PDEVICE_OBJECT, PIRP))_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL);
  v4 = v2;
  if ( v3 )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      KeBugCheckEx(0x48u, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    v5 = ViVerifierEnabled == 0;
    Irp->CancelIrql = v2;
    if ( v5 || !VfXdvEnabled )
      v3(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp);
    else
      IovpCancelRoutine(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp, v3);
    if ( KeGetCurrentIrql() == 2 && v4 != 2 )
      KeBugCheckEx(0x11Bu, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    return 1;
  }
  else
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
    return 0;
  }
}
