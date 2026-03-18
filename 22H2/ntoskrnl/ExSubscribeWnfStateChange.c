/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1407DB2B0
 * Callers:
 *     CmFcpSubscribeScmWnfStateChange @ 0x14041976C (CmFcpSubscribeScmWnfStateChange.c)
 *     PopEnsureErratumSubscribed @ 0x14058DAC4 (PopEnsureErratumSubscribed.c)
 *     TtmInit @ 0x140802F88 (TtmInit.c)
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 *     PnpBootPhaseComplete @ 0x140813690 (PnpBootPhaseComplete.c)
 *     EtwpInitializeSiloState @ 0x14083D0F4 (EtwpInitializeSiloState.c)
 *     IopInitializeDumpPolicySettings @ 0x140861414 (IopInitializeDumpPolicySettings.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x140861574 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     PopSetupMixedRealitytNotification @ 0x140864828 (PopSetupMixedRealitytNotification.c)
 *     WheapInitWnfCallbacks @ 0x1408648A4 (WheapInitWnfCallbacks.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140865D88 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140865DC4 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x140865E00 (PopSetupMobileHotspotNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140865E3C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x140865E78 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAudioEventNotification @ 0x140865EB4 (PopSetupAudioEventNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140865EF0 (PopSetupAirplaneModeNotification.c)
 *     PopEsWorker @ 0x140873B60 (PopEsWorker.c)
 *     RtlpCtContextInit @ 0x1409C21C8 (RtlpCtContextInit.c)
 *     PiUEventInit @ 0x140B42DC4 (PiUEventInit.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     PopNetInitialize @ 0x140B51D10 (PopNetInitialize.c)
 *     PopEsInit @ 0x140B51EFC (PopEsInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140B521E0 (PopBatteryInitPhaseTwo.c)
 *     SshpSubscribeCallbacks @ 0x140B5A6E8 (SshpSubscribeCallbacks.c)
 *     PopInitializeAdpm @ 0x140B7454C (PopInitializeAdpm.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140712974 (ExpWnfSubscribeWnfStateChange.c)
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
