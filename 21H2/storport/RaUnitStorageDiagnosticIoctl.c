/*
 * XREFs of RaUnitStorageDiagnosticIoctl @ 0x1C007B44C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B1E8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     Feature_2360613179__private_IsEnabledDeviceUsage @ 0x1C001D688 (Feature_2360613179__private_IsEnabledDeviceUsage.c)
 *     RaidCallerIsAdmin @ 0x1C001E824 (RaidCallerIsAdmin.c)
 */

NTSTATUS __fastcall RaUnitStorageDiagnosticIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  unsigned int v5; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !(unsigned int)Feature_2360613179__private_IsEnabledDeviceUsage()
    || RaidCallerIsAdmin() && a2->Tail.Overlay.Thread == KeGetCurrentThread() )
  {
    if ( a2->AssociatedIrp.MasterIrp )
    {
      if ( CurrentStackLocation->Parameters.Create.Options >= 0x14
        && CurrentStackLocation->Parameters.Read.Length >= 0x24 )
      {
        ++a2->CurrentLocation;
        ++a2->Tail.Overlay.CurrentStackLocation;
        return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
      }
      v5 = -1073741820;
    }
    else
    {
      v5 = -1073741811;
    }
  }
  else
  {
    v5 = -1073741790;
  }
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v5);
}
