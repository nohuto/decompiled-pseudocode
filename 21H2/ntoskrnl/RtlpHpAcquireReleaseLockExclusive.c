/*
 * XREFs of RtlpHpAcquireReleaseLockExclusive @ 0x14036F354
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x14036F04C (RtlpHpHeapExtendContext.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall RtlpHpAcquireReleaseLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // bl
  struct _KTHREAD *v5; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v8; // edx
  int v9; // r8d
  $CEA84C04E3712D858E5667A507841A2A *v10; // rax
  struct _KTHREAD *v11; // rcx
  bool v12; // zf
  unsigned __int64 v13; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8

  if ( (_DWORD)a2 )
  {
    v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
    LOBYTE(v10) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v10) = KeGetCurrentIrql();
        if ( (unsigned __int8)v10 <= 0xFu && (unsigned __int8)v13 <= 0xFu && (unsigned __int8)v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          LODWORD(v10) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v12 = ((unsigned int)v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= (unsigned int)v10;
          if ( v12 )
            LOBYTE(v10) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, a2);
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock(BugCheckParameter2);
    v5 = KeGetCurrentThread();
    if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    p_Process = (__int64)&v5[1].Process;
    v8 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v8;
      p_Process += 96LL;
      if ( v8 >= 6 )
        goto LABEL_19;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( p_Process )
    {
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v9 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      LOBYTE(v10) = *(_BYTE *)(p_Process + 16);
      v5->AbEntrySummary |= 1 << (char)v10;
      _enable();
      if ( v9 )
        LOBYTE(v10) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v5, BugCheckParameter2, v9);
      goto LABEL_15;
    }
LABEL_19:
    LODWORD(v10) = *((_DWORD *)&v5->0 + 1);
    if ( ((unsigned int)v10 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, BugCheckParameter2, SessionId, 0LL);
    _enable();
LABEL_15:
    v11 = KeGetCurrentThread();
    v12 = v11->SpecialApcDisable++ == -1;
    if ( v12 )
    {
      v10 = &v11->152;
      if ( ($CEA84C04E3712D858E5667A507841A2A *)v10->ApcState.ApcListHead[0].Flink != v10 )
        LOBYTE(v10) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v10;
}
