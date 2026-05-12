/*
 * XREFs of RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003834
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006778 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011BC0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaAdapterStartPowerIo @ 0x1C0014CB0 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00151D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019D9C (RaidPnPPassToMiniPort.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C002D730 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EE18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F2DC (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D24 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00752D4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C007843C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078750 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 */

__int64 __fastcall RaidAdapterRaiseIrqlAndExecuteXrb(__int64 a1, __int64 a2)
{
  KIRQL v4; // di

  v4 = KfRaiseIrql(2u);
  LODWORD(a2) = RaidAdapterExecuteXrb(a1, a2);
  KeLowerIrql(v4);
  return (unsigned int)a2;
}
