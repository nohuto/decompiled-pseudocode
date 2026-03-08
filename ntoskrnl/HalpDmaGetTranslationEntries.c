/*
 * XREFs of HalpDmaGetTranslationEntries @ 0x14039860C
 * Callers:
 *     HalpDmaCommitContiguousMapBuffers @ 0x14039839C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateMapRegisters @ 0x14045399E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x14050E5D4 (HalpDmaCommitScatterMapBuffers.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14050E378 (HalpDmaAllocateNewTranslationBuffer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpDmaGetTranslationEntries(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned int *v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rsi
  unsigned int v13; // ecx
  __int64 v14; // r13
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned int v18; // r15d
  __int64 v19; // rax
  bool v20; // zf
  unsigned __int64 OldIrql; // rbx
  __int64 NewTranslationBuffer; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r11
  _DWORD *v29; // r9
  int v30; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+60h]

  result = 0LL;
  v6 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
  {
    v7 = 64LL;
    goto LABEL_3;
  }
  if ( a2 == 1 )
  {
    v7 = 80LL;
LABEL_3:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    v8 = *(_QWORD *)(v6 + v7);
    v9 = v6 + 8;
    if ( v8 )
    {
      v10 = (unsigned int *)(v7 + v9);
      v11 = *(_QWORD *)v8;
      v12 = *(__int64 **)(v6 + v7);
      v13 = *(_DWORD *)(v8 + 8) - *v10;
      while ( v11 )
      {
        v13 += *(_DWORD *)(v11 + 8);
        v12 = (__int64 *)v11;
        v11 = *(_QWORD *)v11;
      }
      if ( v13 >= a3 )
        goto LABEL_7;
    }
    else
    {
      v13 = 0;
      v12 = 0LL;
      v10 = (unsigned int *)(v7 + v9);
    }
    NewTranslationBuffer = HalpDmaAllocateNewTranslationBuffer(v6, a3 - v13);
    if ( !NewTranslationBuffer )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = 0LL;
      goto LABEL_17;
    }
    if ( v12 )
    {
      *v12 = NewTranslationBuffer;
    }
    else
    {
      v8 = NewTranslationBuffer;
      if ( a2 )
        *(_QWORD *)(v6 + 56) = NewTranslationBuffer;
      else
        *(_QWORD *)(v6 + 48) = NewTranslationBuffer;
    }
LABEL_7:
    v14 = 0LL;
    v15 = *v10;
    v16 = 0LL;
    v17 = 0LL;
    if ( a3 )
    {
      v18 = *(_DWORD *)(v8 + 8);
      v34 = a3;
      do
      {
        if ( v15 >= v18 )
        {
          v8 = *(_QWORD *)v8;
          v15 = 0;
          v18 = *(_DWORD *)(v8 + 8);
        }
        v19 = *(_QWORD *)(v8 + 16);
        v17 = v19 + 72LL * v15;
        if ( v14 )
          *(_QWORD *)(v16 + 8) = v17;
        else
          v14 = v19 + 72LL * v15;
        memset((void *)(v19 + 72LL * v15++), 0, 0x48uLL);
        *(_QWORD *)(v17 + 56) = v17;
        v20 = v34-- == 1;
        v16 = v17;
      }
      while ( !v20 );
      v6 = a1;
    }
    *(_QWORD *)(v6 + v7) = v8;
    *v10 = v15;
    *(_QWORD *)(v17 + 8) = 0LL;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    result = v14;
LABEL_17:
    __writecr8(OldIrql);
  }
  return result;
}
