/*
 * XREFs of PopFxNotifyPreDIrpCompletion @ 0x1402BA43C
 * Callers:
 *     PopRequestCompletion @ 0x1402BB410 (PopRequestCompletion.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1405876D8 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 */

__int64 __fastcall PopFxNotifyPreDIrpCompletion(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  __int64 result; // rax
  int v6; // ett
  unsigned __int64 v7; // rsi
  unsigned int v8; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  int v12; // eax
  bool v13; // zf

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 824), 0, 0);
  if ( (result & 0x20) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter3 + 32));
    LODWORD(result) = *(_DWORD *)(BugCheckParameter3 + 32);
    do
    {
      v6 = result;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)(BugCheckParameter3 + 32),
                               result,
                               result);
    }
    while ( v6 != (_DWORD)result );
    if ( (result & 0x2000) != 0 )
    {
      _m_prefetchw((const void *)(BugCheckParameter3 + 32));
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 32), 0);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1152));
      v8 = *(_DWORD *)(BugCheckParameter3 + 1180) & 0xFFFFFFFC | 2;
      *(_DWORD *)(BugCheckParameter3 + 1176) = a3;
      *(_DWORD *)(BugCheckParameter3 + 1180) = v8;
      KxReleaseSpinLock((volatile signed __int64 *)(BugCheckParameter3 + 1152));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v7);
      return PopFxDerefAndCompleteDirectedPowerTransition(BugCheckParameter3);
    }
  }
  return result;
}
