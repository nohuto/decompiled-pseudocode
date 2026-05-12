/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C0019480
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C00127AC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterStop @ 0x1C0013C2C (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C0013C7C (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0013D04 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0014A10 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0014A80 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterRescanBus @ 0x1C0016EB0 (RaidAdapterRescanBus.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002ED54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002F9D4 (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C0030770 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0032880 (RaidPowerSettingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C003EB10 (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C003EB98 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003EC28 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003ECAC (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C003ED2C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003EDB4 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterActiveCondition @ 0x1C00402B0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterDirectedPowerDown @ 0x1C00403A0 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C0040720 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterIdleCondition @ 0x1C00409F0 (StorPortAdapterIdleCondition.c)
 *     StorPortAdapterIdleState @ 0x1C0040AC0 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C0040DC0 (StorPortAdapterPowerControl.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0040E90 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C0041150 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C00757E4 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00781BC (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0079314 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0013D84 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // ecx
  int v6; // eax

  v2 = a1 + 320;
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 568) & 0x10) == 0 )
  {
    *(_OWORD *)(a1 + 592) = 0LL;
    *(_QWORD *)(a1 + 608) = 0LL;
    *(_DWORD *)(a1 + 592) = 19;
    v6 = RaCallMiniportAdapterControl(a1 + 320);
    v4 = 0;
    if ( v6 < 0 )
      return v4;
    *(_BYTE *)(v2 + 248) |= 0x10u;
  }
  return *(unsigned __int8 *)(v3 + v2 + 276);
}
