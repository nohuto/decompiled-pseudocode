/*
 * XREFs of PopFxUpdateComponentAccountingEnhanced @ 0x14045DDF6
 * Callers:
 *     PopPepDeviceDState @ 0x1403B1624 (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14045E3C0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x14045E6A0 (PopPepStartComponentIdleStateChangeActivity.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateAccountingActiveTime @ 0x1403559E4 (PopFxUpdateAccountingActiveTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxUpdateComponentAccountingEnhanced(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned int v8; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * a2) + 200LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
  if ( *(int *)(v6 + 16) <= 0 )
  {
    v8 = *(_DWORD *)(v6 + 12);
    if ( v8 != -1 )
    {
      if ( a4 )
      {
        if ( a3 >= v8 )
        {
          PopFxUpdateAccountingActiveTime(v6, MEMORY[0xFFFFF78000000008], 0LL);
          *(_BYTE *)(v6 + 8) = 0;
        }
      }
      else if ( !a3 && !*(_BYTE *)(v6 + 8) )
      {
        *(_QWORD *)(v6 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v6 + 8) = 1;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v6);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
