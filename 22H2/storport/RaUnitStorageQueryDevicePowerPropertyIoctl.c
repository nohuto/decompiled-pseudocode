/*
 * XREFs of RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0075F14
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C0072480 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006370 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitStorageQueryDevicePowerPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rbx
  int v5; // edx
  unsigned int Length; // ecx
  unsigned int v7; // r8d

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      v7 = -1073741637;
      return RaidCompleteRequestEx(a2, 0, v7);
    }
  }
  else
  {
    Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    if ( Length < 8 )
    {
      a2->IoStatus.Information = 0LL;
      v7 = -1073741789;
      return RaidCompleteRequestEx(a2, 0, v7);
    }
    if ( Length >= 0x14 )
    {
      MasterIrp->MdlAddress = 0LL;
      MasterIrp->Flags = 0;
      *(_DWORD *)&MasterIrp->Type = 20;
      *(_DWORD *)(&MasterIrp->Size + 1) = 20;
      LOBYTE(MasterIrp->MdlAddress) = (*(_DWORD *)(a1 + 1824) & 2) != 0;
      BYTE1(MasterIrp->MdlAddress) = (*(_DWORD *)(a1 + 1824) & 4) != 0;
      if ( RaidUnitCheckAndAcquirePoFx(a1) )
      {
        BYTE2(MasterIrp->MdlAddress) = 1;
        BYTE3(MasterIrp->MdlAddress) = (*(_BYTE *)(a1 + 449) & 4) != 0;
        MasterIrp->Flags = *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 20LL);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
      }
      else
      {
        WORD1(MasterIrp->MdlAddress) = 0;
        MasterIrp->Flags = 0;
      }
      BYTE4(MasterIrp->MdlAddress) = (*(_BYTE *)(a1 + 449) & 2) != 0;
      a2->IoStatus.Information = 20LL;
    }
    else
    {
      *(_DWORD *)&MasterIrp->Type = 20;
      *(_DWORD *)(&MasterIrp->Size + 1) = 20;
      a2->IoStatus.Information = 8LL;
    }
  }
  v7 = 0;
  return RaidCompleteRequestEx(a2, 0, v7);
}
