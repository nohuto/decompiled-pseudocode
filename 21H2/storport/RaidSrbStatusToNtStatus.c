/*
 * XREFs of RaidSrbStatusToNtStatus @ 0x1C00073CC
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaUnitStartIo @ 0x1C0003A20 (RaUnitStartIo.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C00067E8 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitAsyncError @ 0x1C0007438 (RaUnitAsyncError.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011C30 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C00144B0 (RaidBusEnumeratorProcessAtaInformation.c)
 *     RaidBusEnumeratorProcessDeviceId @ 0x1C0014610 (RaidBusEnumeratorProcessDeviceId.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015244 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidBusEnumeratorProcess1667DeviceInquiry @ 0x1C0015B80 (RaidBusEnumeratorProcess1667DeviceInquiry.c)
 *     RaidBusEnumeratorProcessSupportedPages @ 0x1C0015D20 (RaidBusEnumeratorProcessSupportedPages.c)
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1C0015F00 (RaidBusEnumeratorProcessSerialNumber.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019E0C (RaidPnPPassToMiniPort.c)
 *     RaidBusEnumeratorProcessInquiry @ 0x1C001A270 (RaidBusEnumeratorProcessInquiry.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EE38 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F2FC (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidBusEnumeratorProcessBlockDeviceCharacteristics @ 0x1C0033900 (RaidBusEnumeratorProcessBlockDeviceCharacteristics.c)
 *     RaidBusEnumeratorProcessProbeLunZero @ 0x1C0033970 (RaidBusEnumeratorProcessProbeLunZero.c)
 *     RaidCancelIrp @ 0x1C0044D68 (RaidCancelIrp.c)
 *     RaidUnitCompleteResetRequest @ 0x1C004A680 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D24 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00752D4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C007843C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078750 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbStatusToNtStatus(char a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx

  v1 = a1 & 0x3F;
  if ( v1 == 18 )
    return 2147483653LL;
  if ( v1 > 0x12 )
  {
    if ( v1 != 21 )
    {
      if ( v1 == 22 )
        return 3221225473LL;
      if ( v1 <= 0x1F )
        return 3221225861LL;
      if ( v1 <= 0x21 )
        return 3221225664LL;
      if ( v1 != 34 )
      {
        if ( v1 == 38 )
          return 3221225626LL;
        if ( v1 != 39 )
        {
          if ( v1 != 56 )
            return 3221225861LL;
          return 3221226762LL;
        }
        return 3221225473LL;
      }
    }
    return 3221225488LL;
  }
  v2 = v1 - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 4;
  if ( !v3 )
    return 2147483665LL;
  v4 = v3 - 3;
  if ( !v4 )
    return 3221225664LL;
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
      return 3221225629LL;
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 6 )
        return 3221225861LL;
      return 3221225664LL;
    }
  }
  return 3221225653LL;
}
