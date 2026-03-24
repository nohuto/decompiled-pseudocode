/*
 * XREFs of ACPISetDeviceWorker @ 0x1C0013470
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000CC70 (ACPICMButtonStartWorker.c)
 *     ACPIThermalLoopEx @ 0x1C0012A28 (ACPIThermalLoopEx.c)
 *     ACPIRootPowerCallBack @ 0x1C0031590 (ACPIRootPowerCallBack.c)
 *     ACPICMButtonNotify @ 0x1C004E918 (ACPICMButtonNotify.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C004ED7C (ACPICMExperienceButtonHandleEvent.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C00B0D94 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIPepPowerSettingChangeCallback @ 0x1C00B1260 (ACPIPepPowerSettingChangeCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPISetDeviceWorker(__int64 a1, int a2)
{
  KIRQL v4; // al
  bool v5; // si
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  *(_DWORD *)(a1 + 160) |= a2;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 168);
  if ( !*v6 )
  {
    v7 = (_QWORD *)qword_1C00818A8;
    if ( *(__int64 **)qword_1C00818A8 != &ACPIDeviceWorkQueue )
      __fastfail(3u);
    *v6 = &ACPIDeviceWorkQueue;
    v6[1] = v7;
    *v7 = v6;
    qword_1C00818A8 = (__int64)v6;
    v5 = ACPIWorkerBusy == 0;
    ACPIWorkerBusy = 1;
  }
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v4);
  if ( v5 )
    ExQueueWorkItem(&ACPIWorkItem, DelayedWorkQueue);
}
