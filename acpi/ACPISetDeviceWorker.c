/*
 * XREFs of ACPISetDeviceWorker @ 0x1C00474D4
 * Callers:
 *     ACPICMButtonNotify @ 0x1C0018AC8 (ACPICMButtonNotify.c)
 *     ACPICMButtonStartWorker @ 0x1C0018F20 (ACPICMButtonStartWorker.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C001961C (ACPICMExperienceButtonHandleEvent.c)
 *     ACPIFanDeviceControl @ 0x1C00269A0 (ACPIFanDeviceControl.c)
 *     ACPIFanFSTCallback @ 0x1C0026F60 (ACPIFanFSTCallback.c)
 *     ACPIFanLoop @ 0x1C002759C (ACPIFanLoop.c)
 *     ACPIRootPowerCallBack @ 0x1C003D600 (ACPIRootPowerCallBack.c)
 *     ACPIThermalLoopEx @ 0x1C00410F0 (ACPIThermalLoopEx.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C008A784 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIPepQueueWorker @ 0x1C008AF08 (ACPIPepQueueWorker.c)
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
    v7 = (_QWORD *)qword_1C006E948;
    if ( *(__int64 **)qword_1C006E948 != &ACPIDeviceWorkQueue )
      __fastfail(3u);
    *v6 = &ACPIDeviceWorkQueue;
    v6[1] = v7;
    *v7 = v6;
    qword_1C006E948 = (__int64)v6;
    v5 = ACPIWorkerBusy == 0;
    ACPIWorkerBusy = 1;
  }
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v4);
  if ( v5 )
    ExQueueWorkItem(&ACPIWorkItem, DelayedWorkQueue);
}
