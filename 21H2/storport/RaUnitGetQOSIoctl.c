/*
 * XREFs of RaUnitGetQOSIoctl @ 0x1C0047910
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B1E8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     WPP_SF_q @ 0x1C0033618 (WPP_SF_q.c)
 */

__int64 __fastcall RaUnitGetQOSIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r8
  __int64 v4; // rcx
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edx

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 0x24 )
  {
    MasterIrp->MdlAddress = 0LL;
    *(_QWORD *)&MasterIrp->Flags = 0LL;
    MasterIrp->AssociatedIrp.MasterIrp = 0LL;
    LODWORD(MasterIrp->ThreadListEntry.Flink) = 0;
    *(_DWORD *)&MasterIrp->Type = 36;
    *(_DWORD *)(&MasterIrp->Size + 1) = 36;
    LOBYTE(MasterIrp->MdlAddress) = *(_BYTE *)(a1 + 3216);
    LODWORD(MasterIrp->ThreadListEntry.Flink) = *(_DWORD *)(a1 + 3228);
    HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)(a1 + 3220);
    *(&MasterIrp->Flags + 1) = 1000 * *(_DWORD *)(a1 + 3232);
    v6 = -1;
    v7 = *(_DWORD *)(a1 + 3224);
    if ( v7 == -1 )
      v8 = -1;
    else
      v8 = 500 * v7;
    HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = v8;
    v9 = *(_DWORD *)(a1 + 3240);
    if ( v9 != -1 )
      v6 = 500 * v9;
    MasterIrp->Flags = v6;
    MasterIrp->AssociatedIrp.IrpCount = 1000 * *(_DWORD *)(a1 + 3236);
    v5 = 0;
    v4 = 36LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x26u,
        (__int64)&WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
        a1);
    }
    v4 = 0LL;
    v5 = -1073741789;
  }
  a2->IoStatus.Information = v4;
  return RaidCompleteRequestEx(a2, 0, v5);
}
