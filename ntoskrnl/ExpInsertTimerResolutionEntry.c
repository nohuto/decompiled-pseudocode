/*
 * XREFs of ExpInsertTimerResolutionEntry @ 0x1403AFE14
 * Callers:
 *     NtSetTimerResolution @ 0x1407DFD50 (NtSetTimerResolution.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpInsertTimerResolutionEntry(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v3 = ExpTimerResolutionListHead;
  v4 = (__int64 *)(a1 + 2080);
  if ( *(__int64 **)(ExpTimerResolutionListHead + 8) != &ExpTimerResolutionListHead )
    __fastfail(3u);
  v4[1] = (__int64)&ExpTimerResolutionListHead;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  ExpTimerResolutionListHead = (__int64)v4;
  result = KxReleaseSpinLock((volatile signed __int64 *)&ExpKernelResolutionLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
