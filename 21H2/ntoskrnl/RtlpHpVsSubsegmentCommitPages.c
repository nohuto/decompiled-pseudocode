/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x14036E5F0
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14034BFE0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x14034CEB0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkDecommit @ 0x14036E388 (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _DWORD *SchedulerAssist,
        int a5)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // rcx
  ULONG_PTR v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned __int8 CurrentIrql; // si
  int *v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned int v17; // r14d
  struct _KTHREAD *v19; // rdi
  unsigned int SessionId; // r8d
  __int64 p_Process; // rbx
  unsigned int i; // ecx
  int v23; // r8d
  struct _KTHREAD *v24; // rcx
  bool v25; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v29; // r8
  int v30; // eax
  int v31; // [rsp+30h] [rbp-58h]
  unsigned __int8 v32; // [rsp+48h] [rbp-40h]
  unsigned int v33; // [rsp+90h] [rbp+8h]

  _BitScanForward64(&v6, a3);
  _BitScanReverse64(&v8, a3);
  v9 = a2 + 24;
  v10 = (unsigned int)SchedulerAssist;
  v31 = v8 - v6 + 1;
  v11 = a2 + (unsigned int)((_DWORD)v6 << 12);
  v33 = v31 << 12;
  v12 = ((1LL << v31) - 1) << v6;
  if ( *(_DWORD *)(a1 + 8) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    v14 = (int *)(a2 + 24);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v14, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v14, CurrentIrql, a3, (__int64)SchedulerAssist);
    v32 = CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v32 = 0;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
    CurrentIrql = 0;
  }
  v15 = a1 ^ *(_QWORD *)(a1 + 128);
  if ( !a5 )
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 160)))(v15, v11, v33);
    *(_QWORD *)(a2 + 16) &= ~v12;
    v16 = -(int)v10;
LABEL_8:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v16);
    CurrentIrql = v32;
    v17 = 0;
    goto LABEL_9;
  }
  v17 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
          v15,
          v11,
          v33);
  if ( (v17 & 0x80000000) == 0 )
  {
    *(_QWORD *)(a2 + 16) |= v12;
    v16 = v10;
    goto LABEL_8;
  }
LABEL_9:
  if ( *(_DWORD *)(a1 + 8) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v9);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = CurrentPrcb->SchedulerAssist;
          CurrentIrql = v32;
          v30 = ~(unsigned __int16)(-1LL << (v32 + 1));
          v25 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return v17;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  v19 = KeGetCurrentThread();
  if ( v9 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v19->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (__int64)&v19[1].Process;
  for ( i = 0; i < 6; ++i )
  {
    if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
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
      v23 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      v19->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
      _enable();
      if ( v23 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v19, v9, v23);
      goto LABEL_26;
    }
    p_Process += 96LL;
  }
  if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v19, v9, SessionId, 0LL);
  _enable();
LABEL_26:
  v24 = KeGetCurrentThread();
  v25 = v24->SpecialApcDisable++ == -1;
  if ( !v25 || ($CEA84C04E3712D858E5667A507841A2A *)v24->ApcState.ApcListHead[0].Flink == &v24->152 )
    return v17;
  KiCheckForKernelApcDelivery();
  return v17;
}
