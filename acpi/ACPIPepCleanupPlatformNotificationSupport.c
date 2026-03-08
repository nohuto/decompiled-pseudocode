/*
 * XREFs of ACPIPepCleanupPlatformNotificationSupport @ 0x1C008A784
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0016C30 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0017400 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C0081900 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0C0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPISetDeviceWorker @ 0x1C00474D4 (ACPISetDeviceWorker.c)
 */

char __fastcall ACPIPepCleanupPlatformNotificationSupport(ULONG_PTR BugCheckParameter4)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  char result; // al

  if ( *(_BYTE *)(BugCheckParameter4 + 240) )
  {
    v2 = *(void **)(BugCheckParameter4 + 272);
    if ( v2 )
    {
      PoUnregisterPowerSettingCallback(v2);
      *(_QWORD *)(BugCheckParameter4 + 272) = 0LL;
    }
    v3 = *(void **)(BugCheckParameter4 + 280);
    if ( v3 )
    {
      PoUnregisterPowerSettingCallback(v3);
      *(_QWORD *)(BugCheckParameter4 + 280) = 0LL;
    }
    v4 = *(void **)(BugCheckParameter4 + 288);
    if ( v4 )
    {
      PoUnregisterPowerSettingCallback(v4);
      *(_QWORD *)(BugCheckParameter4 + 288) = 0LL;
    }
    v5 = *(void **)(BugCheckParameter4 + 296);
    if ( v5 )
    {
      PoUnregisterPowerSettingCallback(v5);
      *(_QWORD *)(BugCheckParameter4 + 296) = 0LL;
    }
    if ( *(_QWORD *)(BugCheckParameter4 + 304) )
    {
      ExUnsubscribeWnfStateChange();
      *(_QWORD *)(BugCheckParameter4 + 304) = 0LL;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(BugCheckParameter4 + 184));
    KeInitializeEvent((PRKEVENT)(BugCheckParameter4 + 312), NotificationEvent, 0);
    *(_DWORD *)(BugCheckParameter4 + 264) = 0;
    *(_DWORD *)(BugCheckParameter4 + 248) = 0;
    *(_DWORD *)(BugCheckParameter4 + 252) = 0;
    *(_DWORD *)(BugCheckParameter4 + 260) = 1;
    ACPISetDeviceWorker(BugCheckParameter4, 1);
    ExReleaseFastMutex((PFAST_MUTEX)(BugCheckParameter4 + 184));
    KeWaitForSingleObject((PVOID)(BugCheckParameter4 + 312), Executive, 0, 0, 0LL);
    *(_BYTE *)(BugCheckParameter4 + 240) = 0;
    return ACPIInitDereferenceDeviceExtensionUnlocked(BugCheckParameter4);
  }
  return result;
}
