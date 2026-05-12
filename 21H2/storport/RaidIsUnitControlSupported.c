/*
 * XREFs of RaidIsUnitControlSupported @ 0x1C00063B0
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C00060F0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C0006280 (StorPortUnitIdleCondition.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C001367C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0013C1C (RaidUnitSendPowerToMiniport.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0014E04 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0017414 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001A7B0 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001AB28 (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001D328 (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C003FDAC (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C003FE38 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C003FEC4 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C003FFA0 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitDirectedPowerDown @ 0x1C0041370 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C0041830 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitIdleState @ 0x1C0041B50 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0042120 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00424B0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitAdapterRemove @ 0x1C0046D00 (RaUnitAdapterRemove.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0074290 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C007479C (RaUnitStartDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0075884 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaCallMiniportUnitControl @ 0x1C00190AC (RaCallMiniportUnitControl.c)
 */

char __fastcall RaidIsUnitControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rsi
  int *v6; // r8
  int v7; // eax
  int v8; // edx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = a2;
  if ( **(_DWORD **)(v2 + 552) == 208 )
  {
    if ( (*(_BYTE *)(v2 + 568) & 8) != 0 )
      return *(_BYTE *)(v4 + v2 + 576);
    *(_QWORD *)(v2 + 576) = 0LL;
    v6 = (int *)(v2 + 572);
    *(_QWORD *)(v2 + 584) = 0LL;
    v7 = *(_DWORD *)(v2 + 616);
    *(_DWORD *)(v2 + 572) = 12;
    if ( v7 > 0 )
    {
      v8 = *v6;
      if ( *(_BYTE *)(v2 + 620) )
        v8 = 13;
      *v6 = v8;
    }
    if ( (int)RaCallMiniportUnitControl(v2 + 320, 0LL) >= 0 )
    {
      *(_BYTE *)(v2 + 568) |= 8u;
      return *(_BYTE *)(v4 + v2 + 576);
    }
  }
  return v3;
}
