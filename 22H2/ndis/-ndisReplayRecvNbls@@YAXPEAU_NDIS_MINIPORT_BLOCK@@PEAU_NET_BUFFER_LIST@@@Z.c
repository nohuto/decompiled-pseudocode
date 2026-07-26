/*
 * XREFs of ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00A6D3C
 * Callers:
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A6E7C (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A7674 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00A8CBC (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000326C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisReplayRecvNbls(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_BUFFER_LIST *a2)
{
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, (unsigned __int64)a1->NblTracker, 0x8Du, 0);
  a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler(a1->MiniportAdapterContext, a2, 0);
}
