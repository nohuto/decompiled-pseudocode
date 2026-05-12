/*
 * XREFs of RaidAdapterSetLedState @ 0x1C002F8D8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B738 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     RaidSetLedStateByAcpiDsm @ 0x1C0045BD8 (RaidSetLedStateByAcpiDsm.c)
 *     RaidSetLedStateByNpem @ 0x1C0045CD4 (RaidSetLedStateByNpem.c)
 */

__int64 __fastcall RaidAdapterSetLedState(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rbx
  unsigned int MdlAddress; // eax
  unsigned int v7; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x10
    && MasterIrp
    && *(_DWORD *)&MasterIrp->Type == 16
    && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x10u
    && (MdlAddress = (unsigned int)MasterIrp->MdlAddress, (MdlAddress & 0x3FF) != 0)
    && RtlNumberOfSetBitsUlongPtr(MdlAddress) == 1 )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      v7 = RaidSetLedStateByAcpiDsm(*(_QWORD *)(a1 + 8), MasterIrp);
      if ( v7 == -1073741637 )
        v7 = RaidSetLedStateByNpem(*(_QWORD *)(a1 + 8), MasterIrp);
    }
    else
    {
      v7 = -1073741496;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  return RaidCompleteRequestEx(a2, 0, v7);
}
