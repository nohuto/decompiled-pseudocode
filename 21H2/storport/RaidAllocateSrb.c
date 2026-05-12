/*
 * XREFs of RaidAllocateSrb @ 0x1C000BE14
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001190 (RaUnitAtaPassThroughIoctl.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C00067E8 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011C30 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015244 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C00187E4 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C0018ADC (RaidBusEnumeratorAllocateReportLunsResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019E0C (RaidPnPPassToMiniPort.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001CBA4 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001EC78 (RaidUnitLogSenseCommandSrb.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EE38 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F2FC (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitSmartDataIoctl @ 0x1C0048618 (RaUnitSmartDataIoctl.c)
 *     RaidUnitAbortSrb @ 0x1C004A2F4 (RaidUnitAbortSrb.c)
 *     RaidUnitResetTarget @ 0x1C004B428 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004B6E0 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C004B9FC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D24 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00752D4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C007843C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078750 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     memset @ 0x1C0020540 (memset.c)
 */

_BYTE *__fastcall RaidAllocateSrb(__int64 a1, unsigned int a2, char a3, char a4)
{
  _BYTE *v4; // rdi
  _BYTE *Pool; // rax
  unsigned int v8; // esi
  int v9; // ebp
  _BYTE *v10; // rax

  v4 = 0LL;
  if ( a3 != 1 )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x58uLL, 0x72536152u, a1);
    v4 = Pool;
    if ( Pool )
      memset(Pool, 0, 0x58uLL);
    return v4;
  }
  if ( a2 > 0x17 )
  {
    if ( a2 != 32 )
    {
      if ( a2 == 37 )
        goto LABEL_12;
      if ( a2 <= 0x25 || a2 > 0x27 && (a2 <= 0x29 || a2 > 0x2B) )
        return v4;
    }
LABEL_9:
    v8 = 144;
    v9 = 0;
LABEL_14:
    v10 = RaidAllocatePool(NonPagedPoolNx, v8, 0x72536152u, a1);
    v4 = v10;
    if ( v10 )
    {
      memset(v10, 0, v8);
      v4[2] = 40;
      *(_WORD *)v4 = 8;
      *((_DWORD *)v4 + 2) = 1397899864;
      *((_DWORD *)v4 + 3) = 1;
      *((_DWORD *)v4 + 4) = v8;
      *((_DWORD *)v4 + 5) = a2;
      *((_WORD *)v4 + 18) = 2;
      *((_DWORD *)v4 + 13) = 128;
      *((_DWORD *)v4 + 14) = v9;
      *((_WORD *)v4 + 64) = 1;
      *((_DWORD *)v4 + 33) = 4;
      if ( v9 )
        *((_DWORD *)v4 + 30) = 144;
    }
    return v4;
  }
  if ( a2 == 23 )
  {
LABEL_12:
    v8 = 168;
LABEL_13:
    v9 = 1;
    goto LABEL_14;
  }
  if ( a2 )
  {
    if ( a2 != 2 && a2 != 9 && a2 != 16 && a2 != 19 )
      return v4;
    goto LABEL_9;
  }
  if ( (a4 & 1) != 0 )
  {
    v8 = 184;
    goto LABEL_13;
  }
  return 0LL;
}
