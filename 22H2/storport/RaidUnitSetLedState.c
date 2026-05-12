/*
 * XREFs of RaidUnitSetLedState @ 0x1C004BEAC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B178 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaidSetLedStateByAcpiDsm @ 0x1C0045BB8 (RaidSetLedStateByAcpiDsm.c)
 */

NTSTATUS __fastcall RaidUnitSetLedState(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rdi
  unsigned int MdlAddress; // eax
  unsigned int v8; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x10
    && *(_DWORD *)&MasterIrp->Type == 16
    && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x10u
    && (MdlAddress = (unsigned int)MasterIrp->MdlAddress, (MdlAddress & 0x3FF) != 0)
    && RtlNumberOfSetBitsUlongPtr(MdlAddress) == 1 )
  {
    if ( *(_DWORD *)(a1 + 3280) == 17 )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    }
    v8 = RaidSetLedStateByAcpiDsm(*(struct _DEVICE_OBJECT **)(a1 + 8), (__int64)MasterIrp);
  }
  else
  {
    v8 = -1073741811;
  }
  return RaidCompleteRequestEx(a2, 0, v8);
}
