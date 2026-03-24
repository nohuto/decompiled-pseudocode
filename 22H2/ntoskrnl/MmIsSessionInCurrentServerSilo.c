/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x1403A6308
 * Callers:
 *     PopGetSettingNotificationName @ 0x1406F2614 (PopGetSettingNotificationName.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206500 (PsGetThreadServerSilo.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2494 (KeIsExecutingInArbitraryThreadContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(unsigned int a1)
{
  unsigned int SessionId; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  bool v6; // di
  __int64 ThreadServerSilo; // rsi
  _QWORD *v8; // rcx
  unsigned int v9; // eax
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v4 = 0LL;
  if ( SessionId != -1 )
    v4 = SessionId;
  if ( (_DWORD)v4 == a1 )
    return 1;
  v6 = 0;
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(v3, v4) )
    ThreadServerSilo = 0LL;
  else
    ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v8 = (_QWORD *)qword_140C4DDE8;
  while ( v8 )
  {
    v9 = *((_DWORD *)v8 - 34);
    if ( a1 > v9 )
    {
      v8 = (_QWORD *)v8[1];
    }
    else
    {
      if ( a1 >= v9 )
      {
        if ( v8[113] == ThreadServerSilo && v9 == a1 && (*((_DWORD *)v8 - 35) & 2) == 0 )
          v6 = *(v8 - 16) != (_QWORD)(v8 - 16);
        break;
      }
      v8 = (_QWORD *)*v8;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v6;
}
