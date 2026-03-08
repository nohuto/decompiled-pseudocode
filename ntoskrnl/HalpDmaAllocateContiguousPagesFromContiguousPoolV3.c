/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x1404FD018
 * Callers:
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x140452D5A (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     HalpDmaLinkContiguousTranslations @ 0x140454118 (HalpDmaLinkContiguousTranslations.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPoolV3(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        char a4,
        char a5,
        ULONG *a6)
{
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax
  ULONG v19; // eax
  ULONG ClearBitsAndSet; // ebp
  unsigned __int64 v21; // rsi
  unsigned __int8 v22; // cl
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r8
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+20h] [rbp-28h] BYREF

  memset(&v29, 0, sizeof(v29));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &v29);
  if ( a5 )
  {
    v10 = *(_DWORD *)(a2 + 208);
    v9 = a2;
    v11 = *(_DWORD *)(a2 + 212);
    if ( v10 <= v11 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v29);
      OldIrql = v29.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v29.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (v29.OldIrql + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
LABEL_11:
      *a6 = 0;
      return 0LL;
    }
    v19 = v10 - v11;
    if ( a3 > v19 )
      a3 = v19;
  }
  ClearBitsAndSet = -1;
  if ( a3 )
  {
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 24), a3, 0);
      if ( ClearBitsAndSet != -1 )
        break;
      if ( !a4 )
      {
        a3 >>= 1;
        if ( a3 )
          continue;
      }
      goto LABEL_21;
    }
    if ( a5 )
      *(_DWORD *)(v9 + 208) -= a3;
  }
LABEL_21:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v29);
  v21 = v29.OldIrql;
  if ( KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && v29.OldIrql <= 0xFu && v22 >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << (v29.OldIrql + 1));
      v17 = (v25 & v24[5]) == 0;
      v24[5] &= v25;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(v23);
    }
  }
  __writecr8(v21);
  if ( ClearBitsAndSet == -1 )
    goto LABEL_11;
  result = HalpDmaLinkContiguousTranslations(a2, ClearBitsAndSet, a3);
  v26 = 0LL;
  v27 = result;
  if ( a3 )
  {
    v28 = a3;
    do
    {
      v26 = v27;
      v27 = *(_QWORD *)(v27 + 8);
      --v28;
    }
    while ( v28 );
  }
  *(_QWORD *)(v26 + 8) = 0LL;
  *a6 = a3;
  return result;
}
