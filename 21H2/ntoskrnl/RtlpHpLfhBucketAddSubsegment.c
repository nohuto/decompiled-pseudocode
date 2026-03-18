/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x140365834
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14034A490 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140364860 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x140365B78 (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x140365BA0 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentFree @ 0x14036EB14 (RtlpHpLfhSubsegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rbp
  volatile signed __int64 *v9; // rdi
  unsigned __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf
  __int64 p_Process; // rbx
  unsigned int v18; // edx
  int v19; // r8d
  struct _KTHREAD *v20; // rcx

  LOWORD(v4) = *(_WORD *)(a3 + 34);
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)v4 )
  {
    v9 = (volatile signed __int64 *)(a2 + 16);
    v10 = (unsigned __int8)RtlpHpAcquireLockExclusive(a2 + 16, *(unsigned __int8 *)(a1 + 57));
    RtlpHpLfhSubsegmentSetOwner(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = RtlpHpLfhOwnerMoveSubsegment(a2, v6, 0LL);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
      LOBYTE(v4) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v4) = KeGetCurrentIrql();
          if ( (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)v4 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v4 = -1LL << ((unsigned __int8)v10 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v15 = ~(unsigned __int16)v4;
            v16 = (v15 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v15;
            if ( v16 )
              LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 16);
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned __int64)v9 - qword_140C50630 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      _disable();
      p_Process = (__int64)&CurrentThread[1].Process;
      v18 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v18;
        p_Process += 96LL;
        if ( v18 >= 6 )
          goto LABEL_29;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( !p_Process )
      {
LABEL_29:
        LODWORD(v4) = *((_DWORD *)&CurrentThread->0 + 1);
        if ( (v4 & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2 + 16, SessionId, 0LL);
        _enable();
        goto LABEL_35;
      }
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v19 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      LOBYTE(v4) = *(_BYTE *)(p_Process + 16);
      CurrentThread->AbEntrySummary |= 1 << v4;
      _enable();
      if ( v19 )
        LOBYTE(v4) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, a2 + 16, v19);
LABEL_35:
      v20 = KeGetCurrentThread();
      v16 = v20->SpecialApcDisable++ == -1;
      if ( v16 )
      {
        v4 = (__int64)&v20->152;
        if ( *(_QWORD *)v4 != v4 )
          LOBYTE(v4) = KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( v6 )
    LOBYTE(v4) = RtlpHpLfhSubsegmentFree(a1, v6, a2, a4 & 1);
  return v4;
}
