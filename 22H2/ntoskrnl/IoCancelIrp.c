/*
 * XREFs of IoCancelIrp @ 0x140314120
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010F0 (PopThermalZoneDpc.c)
 *     IopCancelIrpsInFileObjectList @ 0x140313D7C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140313FD4 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalPollingPowerSettingCallback @ 0x1403CF270 (PopThermalPollingPowerSettingCallback.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0970 (FsRtlpWaitOnIrp.c)
 *     PopThermalZoneTimerCallback @ 0x14056FA50 (PopThermalZoneTimerCallback.c)
 *     FsRtlSetKernelEaFile @ 0x140669B30 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140669CD0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140669ED0 (FsRtlKernelFsControlFile.c)
 *     NtCancelIoFile @ 0x140682230 (NtCancelIoFile.c)
 *     IoCancelThreadIo @ 0x1406C5770 (IoCancelThreadIo.c)
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x14088C2D0 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x1408910DC (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x1408B29C8 (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x1408E7CC0 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x1408E7DD0 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1408E7F2C (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x1408ED670 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408F1780 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     IovCancelIrp @ 0x1409C4F6C (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x1409D03E0 (IovpCancelRoutine.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  void (__fastcall *v3)(PDEVICE_OBJECT, PIRP); // rdi
  KIRQL v4; // si
  bool v5; // zf

  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (VfRuleClasses & 0x200000000LL) != 0
                                          || (VfRuleClasses & 0x400000000LL) != 0) )
  {
    IovCancelIrp();
  }
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
    if ( !v5
      && ((VfRuleClasses & 0xFFAFFFFF) != 0
       || (VfRuleClasses & 0x200000000LL) != 0
       || (VfRuleClasses & 0x400000000LL) != 0) )
    {
      IovpCancelRoutine(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp, v3);
    }
    else
    {
      v3(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp);
    }
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
