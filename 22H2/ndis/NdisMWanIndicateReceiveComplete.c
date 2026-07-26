/*
 * XREFs of NdisMWanIndicateReceiveComplete @ 0x1C0072B30
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisMWanIndicateReceiveComplete(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  _NDIS_OPEN_BLOCK *i; // rdi
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  for ( i = a1->OpenQueue; ; i = i->MiniportNextOpen )
  {
    a1->MiniportThread = 0LL;
    p_Lock = &a1->Lock;
    if ( !i )
      break;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    i->ReceiveCompleteHandler(a2);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
  }
  KeReleaseSpinLock(p_Lock, NewIrql);
}
