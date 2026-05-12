/*
 * XREFs of RaUnitStorageGetIdlePowerUpReason @ 0x1C007B7B4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B178 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitStorageGetIdlePowerUpReason(__int64 a1, IRP *a2)
{
  unsigned int v3; // r8d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rcx

  v3 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Read.Length >= 0xC )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp )
    {
      *(_DWORD *)&MasterIrp->Type = 1;
      *(_DWORD *)(&MasterIrp->Size + 1) = 12;
      LODWORD(MasterIrp->MdlAddress) = *(_DWORD *)(a1 + 816);
      a2->IoStatus.Information = 12LL;
    }
    else
    {
      v3 = -1073741811;
    }
  }
  else
  {
    v3 = -1073741789;
  }
  return RaidCompleteRequestEx(a2, 0, v3);
}
