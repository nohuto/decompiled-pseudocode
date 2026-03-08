/*
 * XREFs of FsRtlReleaseHeaderMutex @ 0x140240EF0
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x140240CC0 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlReleaseEofLock @ 0x1402C3460 (FsRtlReleaseEofLock.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x140239650 (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall FsRtlReleaseHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // rdi
  signed __int32 v4; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  if ( a2 )
    _InterlockedIncrement(a2);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v3 = *(unsigned __int8 *)(v2 + 48);
  *(_QWORD *)(v2 + 8) = 0LL;
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)v2, 1, 0);
  if ( v4 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v2, v4);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return KeAbPostRelease(v2);
}
