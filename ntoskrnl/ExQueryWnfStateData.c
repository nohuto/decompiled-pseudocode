/*
 * XREFs of ExQueryWnfStateData @ 0x140793060
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1403AFEA0 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x140584DE0 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x140584EE0 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x14058B660 (PopErratumUpdateCallback.c)
 *     PopWnfMixedRealityCallback @ 0x140792FD0 (PopWnfMixedRealityCallback.c)
 *     PopWnfAudioCallback @ 0x140852480 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14085F020 (PopWnfSprActiveSessionChangeCallback.c)
 *     SshpWnfCallback @ 0x140879A40 (SshpWnfCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140940750 (VslpConnectedStandbyWnfCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x14094F200 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140981610 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1409816B0 (PopWnfUserAwayPredictionCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x140993110 (PopUsbErrorWNFNotificationCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140993A30 (PopNetWnfLowPowerEpochCallback.c)
 *     PopEsInStandbyEvaluate @ 0x1409953B0 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140995540 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopAdaptiveWnfCallback @ 0x140998A20 (PopAdaptiveWnfCallback.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1409A8E80 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfReadStateData @ 0x14071AA78 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140793108 (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  int StateData; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  v9 = (struct _EX_RUNDOWN_REF *)v8;
  if ( v8 )
  {
    StateData = ExpWnfReadStateData(v8, a2, a3, *a4, a4);
    if ( StateData >= 0 )
      StateData = 0;
    ExReleaseRundownProtection_0(v9 + 1);
  }
  else
  {
    StateData = -1073741772;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)StateData;
}
