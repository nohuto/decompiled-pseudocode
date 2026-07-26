/*
 * XREFs of ?ndisMWanSend@@YAHPEAX00@Z @ 0x1C00C3310
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C0070BF4 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall ndisMWanSend(_QWORD *a1, _LIST_ENTRY *a2, _LIST_ENTRY *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  char v4; // si
  int Flags; // eax
  _LIST_ENTRY *Blink; // rcx
  unsigned int v10; // r14d
  KSPIN_LOCK *p_Lock; // rbp
  _NDIS_MINIPORT_STATS *BottomIfStats; // r8
  __int64 Number; // rax
  _NDIS_MINIPORT_STATS *v14; // r8
  _NDIS_MINIPORT_STATS *v15; // rdx
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
  v4 = 0;
  NewIrql = 0;
  Flags = v3->Flags;
  if ( Flags < 0 )
    return 3221225473LL;
  if ( (Flags & 0x40000) == 0 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
    if ( !v3->LockAcquired )
    {
      v3->LockAcquired = 1;
      v4 = 1;
      v3->LockThread = KeGetCurrentThread();
    }
  }
  if ( (v3->Flags & 0x40000) != 0 )
  {
    p_Lock = &v3->Lock;
    goto LABEL_13;
  }
  if ( v4 )
  {
    v3->MiniportThread = 0LL;
    p_Lock = &v3->Lock;
    KeReleaseSpinLockFromDpcLevel(&v3->Lock);
LABEL_13:
    v10 = ((__int64 (__fastcall *)(void *, _LIST_ENTRY *, _LIST_ENTRY *))v3->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler)(
            v3->MiniportAdapterContext,
            a2,
            a3);
    if ( (v3->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(p_Lock);
      v3->MiniportThread = KeGetCurrentThread();
    }
    if ( !v10 )
    {
      BottomIfStats = v3->BottomIfStats;
      if ( BottomIfStats )
      {
        Number = KeGetPcr()->Prcb.Number;
        ++BottomIfStats[Number].ifHCOutUcastPkts;
        v14 = v3->BottomIfStats;
        if ( v14 )
        {
          v15 = &v14[KeGetPcr()->Prcb.Number];
          v15->ifHCOutUcastOctets += LODWORD(a3[1].Blink);
          v15->ifHCOutOctets += LODWORD(a3[1].Blink);
        }
      }
    }
    goto LABEL_19;
  }
  a3->Blink = a3;
  a3->Flink = a3;
  Blink = v3->PacketList.Blink;
  if ( Blink->Flink != &v3->PacketList )
    __fastfail(3u);
  a3->Blink = Blink;
  a3->Flink = &v3->PacketList;
  Blink->Flink = a3;
  v3->PacketList.Blink = a3;
  a3[5].Flink = a2;
  ndisMQueueWorkItem(v3, NdisWorkItemSend, 0LL);
  v10 = 259;
LABEL_19:
  if ( (v3->Flags & 0x40000) == 0 )
  {
    if ( v4 )
    {
      v3->LockThread = 0LL;
      v3->LockAcquired = 0;
    }
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, NewIrql);
  }
  return v10;
}
