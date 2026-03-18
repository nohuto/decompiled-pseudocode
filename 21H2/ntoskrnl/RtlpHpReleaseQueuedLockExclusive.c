/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x14034F7F0
 * Callers:
 *     RtlpHpVsContextMultiAlloc @ 0x140232528 (RtlpHpVsContextMultiAlloc.c)
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14034BBF0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x14034BFE0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x14034CEB0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextFreeList @ 0x14036E0E4 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x14036E174 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x14036E388 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextAllocate @ 0x14037193C (RtlpHpVsContextAllocate.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall RtlpHpReleaseQueuedLockExclusive(int a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  _DWORD *v4; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v7; // rax
  ULONG_PTR v8; // rbp
  struct _KTHREAD *CurrentThread; // r14
  unsigned int SessionId; // edx
  __int64 p_Process; // rsi
  unsigned int i; // r8d
  int v13; // r8d
  struct _KTHREAD *v14; // rcx
  bool v15; // zf
  int v16; // eax
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // edx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a1 )
  {
    v3 = *(unsigned __int8 *)(a2 + 16);
    v4 = *(_DWORD **)(a2 + 8);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
    else
      *v4 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = SchedulerAssist[6] - 1;
        SchedulerAssist[6] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    LOBYTE(v7) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v7) = KeGetCurrentIrql();
        if ( (unsigned __int8)v7 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v7 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v7 = -1LL << ((unsigned __int8)v3 + 1);
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)v7;
          v15 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v15 )
            LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
    __writecr8(v3);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    CurrentThread = KeGetCurrentThread();
    if ( v8 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    p_Process = (__int64)&CurrentThread[1].Process;
    for ( i = 0; i < 6; ++i )
    {
      if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_BYTE *)(p_Process + 18)
        && (*(_DWORD *)p_Process & 1) == 0
        && *(_DWORD *)(p_Process + 8) == SessionId )
      {
        *(_BYTE *)(p_Process + 18) = 0;
        if ( *(__int64 *)p_Process < 0 )
        {
          *(_BYTE *)p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process);
          _disable();
        }
        v13 = *(_DWORD *)(p_Process + 88);
        *(_DWORD *)(p_Process + 88) = 0;
        *(_BYTE *)(p_Process + 17) = 0;
        *(_QWORD *)p_Process = 0LL;
        LOBYTE(v7) = *(_BYTE *)(p_Process + 16);
        CurrentThread->AbEntrySummary |= 1 << v7;
        _enable();
        if ( v13 )
          LOBYTE(v7) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v8, v13);
        goto LABEL_20;
      }
      p_Process += 96LL;
    }
    LODWORD(v7) = *((_DWORD *)&CurrentThread->0 + 1);
    if ( (v7 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v8, SessionId, 0LL);
    _enable();
LABEL_20:
    v14 = KeGetCurrentThread();
    v15 = v14->SpecialApcDisable++ == -1;
    if ( v15 )
    {
      v7 = (__int64)&v14->152;
      if ( *(_QWORD *)v7 != v7 )
        LOBYTE(v7) = KiCheckForKernelApcDelivery();
    }
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return v7;
}
