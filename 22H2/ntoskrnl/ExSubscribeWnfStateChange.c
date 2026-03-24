/*
 * XREFs of ExSubscribeWnfStateChange @ 0x140694970
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x14056EC64 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x1407810F0 (PopEsWorker.c)
 *     EtwInitializeSiloState @ 0x140795A88 (EtwInitializeSiloState.c)
 *     PnpBootPhaseComplete @ 0x1407A3624 (PnpBootPhaseComplete.c)
 *     PopSetupMixedRealitytNotification @ 0x1407D40CC (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407D4E4C (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407D4E88 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407D4EC4 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407D4F00 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407D4F3C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407D4F78 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407D4FB4 (PopSetupAudioEventNotification.c)
 *     RtlpCtContextInit @ 0x140919528 (RtlpCtContextInit.c)
 *     PopNetInitialize @ 0x140A3EBF8 (PopNetInitialize.c)
 *     PopEsInit @ 0x140A3F95C (PopEsInit.c)
 *     SshpSubscribeCallbacks @ 0x140A40044 (SshpSubscribeCallbacks.c)
 *     PiUEventInit @ 0x140A52E88 (PiUEventInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6F604 (PopBatteryInitPhaseTwo.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A74328 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14060EF54 (ExpWnfSubscribeWnfStateChange.c)
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
