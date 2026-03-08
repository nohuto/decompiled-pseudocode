/*
 * XREFs of HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404FD2D4
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x1404FF03C (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     HalpDmaIndexToTranslationEntry @ 0x1404540DE (HalpDmaIndexToTranslationEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromContiguousPoolV3(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        char a4,
        char a5,
        ULONG *a6)
{
  __int64 v9; // r15
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
  RTL_BITMAP *v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rsi
  ULONG v23; // ebx
  ULONG v24; // r10d
  ULONG ClearBitsAndSet; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r8
  int v31; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  if ( a5 )
  {
    v10 = *(_DWORD *)(a2 + 208);
    v9 = a2;
    v11 = *(_DWORD *)(a2 + 212);
    if ( v10 <= v11 )
    {
LABEL_3:
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
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
  if ( a4 )
  {
    v20 = *(RTL_BITMAP **)(a2 + 24);
    if ( v20->SizeOfBitMap - RtlNumberOfSetBits(v20) < a3 )
      goto LABEL_3;
  }
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( a3 )
  {
    do
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 24), 1u, v24);
      if ( ClearBitsAndSet == -1 )
        break;
      v26 = HalpDmaIndexToTranslationEntry(a2, ClearBitsAndSet, 0LL);
      if ( v21 )
        *(_QWORD *)(v22 + 8) = v26;
      else
        v21 = v26;
      ++v23;
      v22 = v26;
    }
    while ( v23 < a3 );
    if ( v22 )
      *(_QWORD *)(v22 + 8) = 0LL;
  }
  if ( a5 )
    *(_DWORD *)(v9 + 208) -= v23;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v27 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v28 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v17 = (v31 & v30[5]) == 0;
      v30[5] &= v31;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(v29);
    }
  }
  __writecr8(v27);
  if ( !v23 )
    goto LABEL_11;
  result = v21;
  *a6 = v23;
  return result;
}
