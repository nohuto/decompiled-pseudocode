/*
 * XREFs of FsRtlAcquireEofLock @ 0x140240AC0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x140239650 (ExpReleaseFastMutexContended.c)
 *     FsRtlpWaitForIoAtEof @ 0x140240CC0 (FsRtlpWaitForIoAtEof.c)
 *     ExpAcquireFastMutexContended @ 0x1402410FC (ExpAcquireFastMutexContended.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // bp
  ULONG_PTR v12; // rbx
  unsigned __int64 v13; // rdi
  signed __int32 v14; // eax
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  unsigned __int8 v18; // cl
  struct _KPRCB *v19; // r9
  int v20; // eax
  _DWORD *v21; // r8
  bool v22; // zf
  unsigned int v23; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v5, CurrentThread)) != 0 )
  {
    _BitScanForward(&v7, AbEntrySummary);
    v23 = v7;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v4 = (__int64)(&CurrentThread[1].Process + 12 * v23);
    if ( (unsigned __int64)(v5 - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5, v4);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
  }
  else if ( *(_QWORD *)a1 )
  {
    FsRtlpWaitForIoAtEof(a1, a2, -1LL);
  }
  else
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
  }
  if ( a2 )
    _InterlockedIncrement(a2);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v13 = *(unsigned __int8 *)(v12 + 48);
  *(_QWORD *)(v12 + 8) = 0LL;
  v14 = _InterlockedCompareExchange((volatile signed __int32 *)v12, 1, 0);
  if ( v14 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v12, v14);
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v18 >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
      v21 = v19->SchedulerAssist;
      v22 = (v20 & v21[5]) == 0;
      v21[5] &= v20;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
  }
  __writecr8(v13);
  return KeAbPostRelease(v12);
}
