/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x14036424C
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14034A490 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x140365BA0 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  int v3; // r14d
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // r15
  __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int SessionId; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  __int64 p_Process; // rdi
  unsigned int v17; // edx
  int v18; // r8d
  struct _KTHREAD *v19; // rcx

  v2 = (_QWORD *)(a1 + 24);
  v3 = a2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v5 = a1 + 16;
  v6 = (unsigned __int8)RtlpHpAcquireLockExclusive(a1 + 16, a2);
  if ( (_QWORD *)*v2 == v2 )
    v7 = 0LL;
  else
    v7 = RtlpHpLfhOwnerMoveSubsegment(a1, *v2, 2LL);
  if ( v3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    CurrentThread = KeGetCurrentThread();
    if ( v5 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    p_Process = (__int64)&CurrentThread[1].Process;
    v17 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v5 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v17;
      p_Process += 96LL;
      if ( v17 >= 6 )
        goto LABEL_28;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_28:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, SessionId, 0LL);
      _enable();
      goto LABEL_34;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v18 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v18 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v5, v18);
LABEL_34:
    v19 = KeGetCurrentThread();
    v15 = v19->SpecialApcDisable++ == -1;
    if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
      KiCheckForKernelApcDelivery();
  }
  return v7;
}
