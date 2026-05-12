/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x1C002D640
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0005CB0 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C00067E8 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C0007A70 (RaidUnitCompleteRequest.c)
 *     RaidStartIoPacket @ 0x1C000A020 (RaidStartIoPacket.c)
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 *     RaidpAdapterDpcRoutine @ 0x1C00113E0 (RaidpAdapterDpcRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0016130 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitFreeResources @ 0x1C0016638 (RaidUnitFreeResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019E0C (RaidPnPPassToMiniPort.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C001C4B0 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C002E174 (RaidAdapterRequestDirectComplete.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EE38 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F2FC (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002F9F4 (RaidAdapterStartDevice.c)
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1C0040840 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortAdapterPoFxD0Completion @ 0x1C0040C80 (StorPortAdapterPoFxD0Completion.c)
 *     StorPortUnitIdleState @ 0x1C0041B50 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0041F10 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0042208 (StorPortUnitPowerNotRequiredStep2.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0044E04 (RaidCompleteMiniportRequestCallback.c)
 *     RaWmiPassToMiniPort @ 0x1C00752D4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterPoFxIdleComponent(__int64 a1, __int64 a2, __int64 a3)
{
  PoFxIdleComponent(**(_QWORD **)(a1 + 5088), a2, a3);
  return (*(_BYTE *)(*(_QWORD *)(a1 + 5088) + 20LL) & 1) == 0;
}
