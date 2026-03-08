/*
 * XREFs of PopFxUpdateComponentAccountingEnhanced @ 0x1402F28E0
 * Callers:
 *     PopPepDeviceDState @ 0x1402B9C4C (PopPepDeviceDState.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1402EFB90 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1402F2810 (PopPepCompleteComponentIdleStateChangeActivity.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140306C00 (PopFxUpdateAccountingActiveTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxUpdateComponentAccountingEnhanced(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v9; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * a2) + 200LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
  if ( *(_DWORD *)(v6 + 16) == 2 )
  {
    v9 = *(_DWORD *)(v6 + 12);
    if ( v9 != -1 )
    {
      if ( a4 )
      {
        if ( a3 >= v9 )
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
  result = KxReleaseSpinLock((volatile signed __int64 *)v6);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v12 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return result;
}
