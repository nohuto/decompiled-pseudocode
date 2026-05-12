/*
 * XREFs of RaSrbSetMiniportContext @ 0x1C00067BC
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C00067E8 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011C30 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPowerPassToMiniPort @ 0x1C0014BB8 (RaidPowerPassToMiniPort.c)
 *     RaAdapterStartPowerIo @ 0x1C0014D20 (RaAdapterStartPowerIo.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019E0C (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EE38 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F2FC (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D24 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00752D4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078750 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSrbSetMiniportContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 468) + 7);
  if ( (result & 0xFFFFFFF8) != 0 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      *(_QWORD *)(a2 + 104) = a3;
    else
      *(_QWORD *)(a2 + 56) = a3;
  }
  return result;
}
