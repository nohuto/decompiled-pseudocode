/*
 * XREFs of RaidXrbDeallocateResources @ 0x1C00076A8
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006778 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitReleaseIrp @ 0x1C00077D4 (RaidUnitReleaseIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011BC0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaAdapterStartPowerIo @ 0x1C0014CB0 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00151D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019D9C (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EE18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F2DC (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitCompleteResetRequest @ 0x1C004A660 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D24 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00752D4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C007843C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078750 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     RaidDmaPutScatterGatherList @ 0x1C0007218 (RaidDmaPutScatterGatherList.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x1C004D674 (RaidFreeRemappedScatterGatherListMdl.c)
 */

void __fastcall RaidXrbDeallocateResources(__int64 a1, int a2)
{
  KIRQL v2; // bp
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _MDL *v7; // rcx

  if ( a1 )
  {
    v2 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      if ( RaidVerifierEnabled )
        RaidFreeRemappedScatterGatherListMdl();
      if ( !a2 )
        v2 = KfRaiseIrql(2u);
      RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)(a1 + 216) + 728LL));
      v5 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 144) = 0LL;
      if ( v5 )
      {
        RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)(a1 + 216) + 728LL));
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      if ( !a2 )
        KeLowerIrql(v2);
    }
    v6 = *(_QWORD *)(a1 + 104);
    if ( v6 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v6 + 10) & 2) != 0 )
      {
        MmUnlockPages((PMDL)v6);
        v6 = *(_QWORD *)(a1 + 104);
      }
      IoFreeMdl((PMDL)v6);
      *(_QWORD *)(a1 + 104) = 0LL;
      *(_BYTE *)(a1 + 16) &= ~1u;
    }
    v7 = *(struct _MDL **)(a1 + 136);
    if ( v7 )
    {
      MmUnlockPages(v7);
      IoFreeMdl(*(PMDL *)(a1 + 136));
      *(_QWORD *)(a1 + 136) = 0LL;
    }
  }
}
