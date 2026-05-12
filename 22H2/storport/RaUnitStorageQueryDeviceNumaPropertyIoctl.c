/*
 * XREFs of RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x1C00494D4
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C0072480 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceNumaPropertyIoctl(__int64 a1, IRP *a2)
{
  unsigned int v3; // r8d
  _IRP *MasterIrp; // rdx
  int v5; // r9d
  unsigned __int64 Length; // r11

  v3 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      v3 = -1073741637;
LABEL_8:
      a2->IoStatus.Information = 0LL;
    }
  }
  else
  {
    if ( (unsigned int)Length >= 0xC )
    {
      *(_DWORD *)&MasterIrp->Type = 12;
      *(_DWORD *)(&MasterIrp->Size + 1) = 12;
      LODWORD(MasterIrp->MdlAddress) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4800LL);
      a2->IoStatus.Information = Length;
      return RaidCompleteRequestEx(a2, 0, v3);
    }
    if ( (unsigned int)Length < 8 )
    {
      v3 = -1073741789;
      goto LABEL_8;
    }
    *(_DWORD *)&MasterIrp->Type = 12;
    *(_DWORD *)(&MasterIrp->Size + 1) = 12;
    a2->IoStatus.Information = 8LL;
  }
  return RaidCompleteRequestEx(a2, 0, v3);
}
