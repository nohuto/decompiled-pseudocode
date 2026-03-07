__int64 ExWakeTimersPause()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v3; // eax
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  __int64 *v6; // rdi
  __int64 v7; // rbp
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax

  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, 0LL, (__int64)&ExpWakeTimerLock);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v3 = 4;
    if ( CurrentIrql != 2 )
      v3 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v3;
  }
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = (__int64 *)ExpWakeTimerList;
  while ( v6 != &ExpWakeTimerList )
  {
    v7 = (__int64)(v6 - 33);
    v6 = (__int64 *)*v6;
    KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 64));
    if ( *(_QWORD *)(v7 + 256) )
      ExpTimerPause(v7, v5, v4, 1);
    KxReleaseSpinLock((volatile signed __int64 *)(v7 + 64));
  }
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
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
