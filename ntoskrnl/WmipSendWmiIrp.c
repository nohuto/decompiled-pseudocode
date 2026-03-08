/*
 * XREFs of WmipSendWmiIrp @ 0x14069CD88
 * Callers:
 *     WmipQuerySetExecuteSI @ 0x14069C72C (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x14069DF2C (WmipQueryAllData.c)
 *     WmipSendEnableDisableRequest @ 0x1407870B0 (WmipSendEnableDisableRequest.c)
 *     WmipRegisterOrUpdateDS @ 0x14086785C (WmipRegisterOrUpdateDS.c)
 *     WmipEnableCollectionForNewGuid @ 0x140868484 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14087EB44 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDereferenceEvent @ 0x1409DD790 (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x1409DEC30 (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     IoAllocateIrp @ 0x140208CF0 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x14069CE70 (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrp(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v8; // rbx
  unsigned int v9; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(WmipServiceDeviceObject->StackSize + 1, 0);
    v8 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)a5;
    v9 = WmipForwardWmiIrp(Irp, a4, a5);
    *a6 = *(_OWORD *)&v8->IoStatus.Status;
    IoFreeIrp(v8);
    if ( v9 != -1073741160 )
      return v9;
  }
  return 3221225626LL;
}
