/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C00194F0
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001281C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterStop @ 0x1C0013C9C (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C0013CEC (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0013D74 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0014A80 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0014AF0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterRescanBus @ 0x1C0016F20 (RaidAdapterRescanBus.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002ED74 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002F9F4 (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C0030790 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C00328A0 (RaidPowerSettingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C003EB30 (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C003EBB8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003EC48 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003ECCC (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C003ED4C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003EDD4 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterActiveCondition @ 0x1C00402D0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterDirectedPowerDown @ 0x1C00403C0 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C0040740 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterIdleCondition @ 0x1C0040A10 (StorPortAdapterIdleCondition.c)
 *     StorPortAdapterIdleState @ 0x1C0040AE0 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C0040DE0 (StorPortAdapterPowerControl.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0040EB0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C0041170 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C00757E4 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00781BC (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0079314 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0013DF4 (RaCallMiniportAdapterControl.c)
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
