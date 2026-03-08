/*
 * XREFs of HalpDmaRemoveAdapterFromMasterQueue @ 0x1404FE580
 * Callers:
 *     HalCancelAdapterChannel @ 0x14050CA30 (HalCancelAdapterChannel.c)
 *     HalCancelAdapterChannelDmaThin @ 0x140510AC0 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x1405112B0 (HalCancelAdapterChannelDmarThin.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140512A4C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpDmaRemoveAdapterFromMasterQueue(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD **v3; // rdx
  _QWORD **v4; // rbx
  char v5; // di
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD **v8; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf
  _QWORD *v16; // rdx
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  memset(&v17, 0, sizeof(v17));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 128), &v17);
  v3 = (_QWORD **)(v1 + 160);
  v4 = (_QWORD **)(v1 + 176);
  if ( !*(_BYTE *)(a1 + 442) )
    v4 = v3;
  v5 = 0;
  v6 = *v4;
  if ( *v4 != v4 )
  {
    v7 = (_QWORD *)(a1 + 168);
    while ( 1 )
    {
      v8 = (_QWORD **)*v6;
      if ( v6 == v7 )
        break;
      v6 = (_QWORD *)*v6;
      if ( v8 == v4 )
        goto LABEL_7;
    }
    v16 = (_QWORD *)v6[1];
    if ( v8[1] != v6 || (_QWORD *)*v16 != v6 )
      __fastfail(3u);
    *v16 = v8;
    v5 = 1;
    v8[1] = v16;
  }
LABEL_7:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v17);
  OldIrql = v17.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v17.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (v17.OldIrql + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v5;
}
