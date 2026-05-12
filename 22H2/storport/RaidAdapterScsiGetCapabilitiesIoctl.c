/*
 * XREFs of RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C002E9DC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B6C8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaidAdapterScsiGetCapabilitiesIoctl(__int64 a1, IRP *a2)
{
  unsigned int v4; // r8d
  _IRP *MasterIrp; // rcx
  int v6; // eax

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 0x18 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    *(_DWORD *)&MasterIrp->Type = 24;
    *(_DWORD *)(&MasterIrp->Size + 1) = *(_DWORD *)(a1 + 352);
    v6 = *(_DWORD *)(a1 + 356);
    HIDWORD(MasterIrp->MdlAddress) = 0;
    LODWORD(MasterIrp->MdlAddress) = v6;
    MasterIrp->Flags = *(_DWORD *)(a1 + 376);
    *((_BYTE *)&MasterIrp->Flags + 4) = 1;
    *((_BYTE *)&MasterIrp->Flags + 5) = *(_BYTE *)(a1 + 412);
    *((_BYTE *)&MasterIrp->Flags + 6) = 0;
    a2->IoStatus.Information = 24LL;
    v4 = 0;
  }
  else
  {
    v4 = -1073741789;
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
