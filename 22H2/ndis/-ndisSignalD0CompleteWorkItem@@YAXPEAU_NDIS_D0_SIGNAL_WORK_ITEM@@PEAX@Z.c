/*
 * XREFs of ?ndisSignalD0CompleteWorkItem@@YAXPEAU_NDIS_D0_SIGNAL_WORK_ITEM@@PEAX@Z @ 0x1C0084080
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0015B70 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

void __fastcall ndisSignalD0CompleteWorkItem(struct _NDIS_D0_SIGNAL_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  KIRQL v4; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
  v4 = NewIrql;
  a2->D0CompleteSignalWorkItem.Scheduled = 0;
  LODWORD(a1) = a1->CompletionStatus;
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v4);
  ndisSignalD0RequestComplete(a2, (int)a1);
  ndisDereferenceMiniport(a2, 0x11u);
}
