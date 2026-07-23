/*
 * XREFs of WmipSendWmiIrp @ 0x1407576DC
 * Callers:
 *     WmipQueryAllData @ 0x14062DEE4 (WmipQueryAllData.c)
 *     WmipRegisterOrUpdateDS @ 0x14075694C (WmipRegisterOrUpdateDS.c)
 *     WmipQuerySetExecuteSI @ 0x140757430 (WmipQuerySetExecuteSI.c)
 *     WmipEnableCollectionForNewGuid @ 0x140757C8C (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1407582D4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x14077E1C0 (WmipSendEnableDisableRequest.c)
 *     WmipDereferenceEvent @ 0x14093254C (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x140933900 (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     IoAllocateIrp @ 0x1402F76C0 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x14062E4FC (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrp(
        unsigned __int8 a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        __int64 a5,
        _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v11; // rbx
  unsigned int v12; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(WmipServiceDeviceObject->StackSize + 1, 0);
    v11 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)a5;
    v12 = WmipForwardWmiIrp(Irp, a1, a2, a3, a4, a5);
    *a6 = *(_OWORD *)&v11->IoStatus.Status;
    IoFreeIrp(v11);
    if ( v12 != -1073741160 )
      return v12;
  }
  return 3221225626LL;
}
