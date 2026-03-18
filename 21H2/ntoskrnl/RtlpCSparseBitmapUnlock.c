/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x1403635BC
 * Callers:
 *     RtlSparseArrayElementAllocate @ 0x14023D4C8 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14023DD4C (RtlpCSparseBitmapPageDecommit.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x140363490 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140363A64 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall RtlpCSparseBitmapUnlock(int *a1)
{
  __int64 v1; // rax
  int v2; // edx
  ULONG_PTR v3; // rdi
  unsigned __int64 v4; // rbx
  volatile LONG *v5; // rcx
  __int64 v6; // rax
  struct _KTHREAD *v7; // rcx
  bool v8; // zf
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v12; // edx
  int v13; // r8d
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // edx

  v1 = *((_QWORD *)a1 + 1);
  v2 = *a1;
  v3 = v1 + 24;
  if ( *(_BYTE *)(v1 + 48) )
  {
    v4 = *((unsigned __int8 *)a1 + 4);
    v5 = (volatile LONG *)(v1 + 24);
    if ( v2 == 1 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    LOBYTE(v6) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v6) = KeGetCurrentIrql();
        if ( (unsigned __int8)v6 <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = -1LL << ((unsigned __int8)v4 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)v6;
          v8 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v8 )
            LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  else
  {
    if ( v2 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
      CurrentThread = KeGetCurrentThread();
      if ( v3 - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      _disable();
      p_Process = (__int64)&CurrentThread[1].Process;
      v12 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v12;
        p_Process += 96LL;
        if ( v12 >= 6 )
          goto LABEL_25;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( !p_Process )
      {
LABEL_25:
        LODWORD(v6) = *((_DWORD *)&CurrentThread->0 + 1);
        if ( (v6 & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
        _enable();
        goto LABEL_11;
      }
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
      LOBYTE(v6) = *(_BYTE *)(p_Process + 16);
      CurrentThread->AbEntrySummary |= 1 << v6;
      _enable();
      if ( v13 )
        LOBYTE(v6) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v3, v13);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v3);
      LOBYTE(v6) = KeAbPostRelease(v3);
    }
LABEL_11:
    v7 = KeGetCurrentThread();
    v8 = v7->SpecialApcDisable++ == -1;
    if ( v8 )
    {
      v6 = (__int64)&v7->152;
      if ( *(_QWORD *)v6 != v6 )
        LOBYTE(v6) = KiCheckForKernelApcDelivery();
    }
  }
  return v6;
}
