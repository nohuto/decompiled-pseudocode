__int64 __fastcall CmpCompleteLazyWrite(PKTIMER Timer, __int64 *a2)
{
  volatile signed __int64 *p_DueTime; // r15
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdi
  ULONG v9; // r14d
  __int64 result; // rax
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r11
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  p_DueTime = (volatile signed __int64 *)&Timer[2].DueTime;
  v6 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
  if ( a2 || ((__int64)Timer[2].TimerListEntry.Blink & 7) == 3 )
  {
    v7 = 1LL;
    if ( a2 )
    {
      v8 = *a2;
    }
    else
    {
      LOBYTE(v5) = 1;
      v8 = 20000000LL;
      v9 = 1000;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v5);
      if ( UnbiasedInterruptTime >= v12 )
        goto LABEL_7;
      v13 = v12 - UnbiasedInterruptTime;
      if ( v13 <= 0x1312D00 )
        goto LABEL_7;
      v8 = v13;
    }
    v9 = *(_DWORD *)&Timer[2].Processor;
LABEL_7:
    KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-v8, 0, v9, (PKDPC)&Timer[1]);
    goto LABEL_8;
  }
  v7 = 0LL;
LABEL_8:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v7;
  result = KxReleaseSpinLock(p_DueTime);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v16 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  return result;
}
