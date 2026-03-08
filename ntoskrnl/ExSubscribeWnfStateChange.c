/*
 * XREFs of ExSubscribeWnfStateChange @ 0x14078C4C0
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x14058B594 (PopEnsureErratumSubscribed.c)
 *     TtmInit @ 0x14080E764 (TtmInit.c)
 *     PnpBootPhaseComplete @ 0x14081BD60 (PnpBootPhaseComplete.c)
 *     PoInitHiberServices @ 0x14082B1B0 (PoInitHiberServices.c)
 *     EtwpInitializeSiloState @ 0x14083BE04 (EtwpInitializeSiloState.c)
 *     IopInitializeDumpPolicySettings @ 0x14085D5A4 (IopInitializeDumpPolicySettings.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x14085D704 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     PopSetupMixedRealitytNotification @ 0x140860254 (PopSetupMixedRealitytNotification.c)
 *     WheapInitWnfCallbacks @ 0x1408602D0 (WheapInitWnfCallbacks.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1408615A8 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1408615E4 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x140861620 (PopSetupMobileHotspotNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x14086165C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x140861698 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAudioEventNotification @ 0x1408616D4 (PopSetupAudioEventNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140861710 (PopSetupAirplaneModeNotification.c)
 *     PopEsWorker @ 0x140870CA0 (PopEsWorker.c)
 *     RtlpCtContextInit @ 0x1409BF198 (RtlpCtContextInit.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     PopNetInitialize @ 0x140B46E8C (PopNetInitialize.c)
 *     PopEsInit @ 0x140B47078 (PopEsInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140B4735C (PopBatteryInitPhaseTwo.c)
 *     PiUEventInit @ 0x140B5A78C (PiUEventInit.c)
 *     SshpSubscribeCallbacks @ 0x140B5DEEC (SshpSubscribeCallbacks.c)
 *     PopInitializeAdpm @ 0x140B5DF58 (PopInitializeAdpm.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140719A64 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpWnfSubscribeWnfStateChange(0LL, a1, a2, a4, a5, a6, a3, 0);
  KeLeaveCriticalRegion();
  return v7;
}
