/*
 * XREFs of WmipSendWmiIrp @ 0x140756D0C
 * Callers:
 *     WmipQueryAllData @ 0x1406B1EB4 (WmipQueryAllData.c)
 *     WmipRegisterOrUpdateDS @ 0x140755F7C (WmipRegisterOrUpdateDS.c)
 *     WmipQuerySetExecuteSI @ 0x140756A60 (WmipQuerySetExecuteSI.c)
 *     WmipEnableCollectionForNewGuid @ 0x1407572BC (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140757904 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x14077DF00 (WmipSendEnableDisableRequest.c)
 *     WmipDereferenceEvent @ 0x14093243C (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x140933780 (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     IoFreeIrp @ 0x1402D3CF0 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x1403616C0 (IoAllocateIrp.c)
 *     WmipForwardWmiIrp @ 0x1406B24CC (WmipForwardWmiIrp.c)
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
