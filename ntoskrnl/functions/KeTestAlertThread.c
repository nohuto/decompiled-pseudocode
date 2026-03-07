unsigned __int8 __fastcall KeTestAlertThread(char a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v4; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v10; // r9
  int v11; // edx
  bool v12; // zf
  int v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v7) = 4;
    if ( CurrentIrql != 2 )
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( CurrentThread->ThreadLock );
  }
  v4 = CurrentThread->Alerted[v2];
  if ( v4 )
  {
    CurrentThread->Alerted[v2] = 0;
  }
  else if ( (_BYTE)v2 == 1
         && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    CurrentThread->ApcState.UserApcPendingAll |= 2u;
  }
  CurrentThread->ThreadLock = 0LL;
  if ( KiIrqlFlags )
  {
    v8 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v12 = (v11 & v10[5]) == 0;
      v10[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
