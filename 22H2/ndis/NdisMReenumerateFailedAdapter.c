/*
 * XREFs of NdisMReenumerateFailedAdapter @ 0x1C0081AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C00194F0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A5E8 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A680 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 */

void __fastcall NdisMReenumerateFailedAdapter(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_RESET_INTERFACE_STANDARD *ReenumerateSelfInterface; // rax
  struct _NDIS_IF_BLOCK *v3; // rdi
  struct _NDIS_WORK_ITEM *PoolWithTag; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x41u,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      a1);
  if ( a1->DriverHandle->ReenumerateFailedAdapterHandler )
  {
    ReenumerateSelfInterface = a1->ReenumerateSelfInterface;
    if ( ReenumerateSelfInterface )
    {
      if ( ReenumerateSelfInterface->DeviceReset && ndisReferenceMiniport(a1, 9u) )
      {
        v3 = ndisMReferenceIfBlock(a1, 0x13u);
        if ( v3 )
        {
          PoolWithTag = (struct _NDIS_WORK_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
          if ( PoolWithTag )
          {
            if ( v3->LastMiniportFatalErrorReason == NdisMEvent_Unknown )
              v3->LastMiniportFatalErrorReason = NdisMEventErr_MiniportRequested;
            PoolWithTag->Context = a1;
            PoolWithTag->Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedReenumerateFailedAdapter;
            ndisScheduleWorkItemInternal(PoolWithTag);
            return;
          }
          ndisMDereferenceIfBlock(a1, MPIFREF_FATAL_ERROR);
        }
        ndisDereferenceMiniport(a1, 9u);
      }
    }
  }
}
