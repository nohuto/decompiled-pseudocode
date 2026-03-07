void KiResumeClockTimer()
{
  char v0; // di
  struct _KPRCB *CurrentPrcb; // rbp
  int v2; // ebx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  unsigned __int8 v6; // cl
  struct _KPRCB *v7; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  unsigned __int64 InterruptTimePrecise; // rsi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  LARGE_INTEGER v14; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0LL;
  v0 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0LL;
  v14.QuadPart = 0LL;
  v2 = KiClockState;
  if ( CurrentPrcb->Number == (_DWORD)KiClockTimerOwner )
  {
    v0 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    goto LABEL_6;
  }
  off_140C01C90[0]();
  off_140C01C88[0]();
  if ( !v0 )
  {
LABEL_6:
    if ( !KiClockTimerPerCpuTickScheduling )
      return;
    goto LABEL_7;
  }
  ++dword_140C417C4;
  CurrentPrcb->ClockOwner = 1;
LABEL_7:
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v5) = 0x8000;
      else
        v5 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v5;
    }
    KiSetClockTimer((__int64)CurrentPrcb, -(__int64)(unsigned int)KeMaximumIncrement, KeMinimumIncrement, 3, 1, 0);
    if ( v0 || !KiSerializeTimerExpiration )
      KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, v0);
    if ( KiIrqlFlags )
    {
      v6 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        v7 = KeGetCurrentPrcb();
        v8 = v7->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)v7);
      }
    }
    __writecr8(CurrentIrql);
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v14);
  KiRestoreClockTickRate(InterruptTimePrecise, (__int64)&v12, (unsigned int *)&v13);
  if ( v0 )
  {
    if ( v2 == 2 )
      LOBYTE(v2) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v2, &v13, &v12);
    KiClockTimerNextTickTime = InterruptTimePrecise + (unsigned int)KeTimeIncrement;
  }
}
