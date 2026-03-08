/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x1402019D8
 * Callers:
 *     PopGetSettingNotificationName @ 0x14068CCC4 (PopGetSettingNotificationName.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(unsigned int a1)
{
  int SessionId; // eax
  int v3; // edx
  bool v4; // di
  __int64 CurrentServerSilo; // rbp
  _QWORD *v6; // rcx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  v3 = 0;
  if ( SessionId != -1 )
    v3 = SessionId;
  if ( v3 == a1 )
    return 1;
  v4 = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  v6 = (_QWORD *)qword_140C65670;
  while ( v6 )
  {
    if ( a1 > *((_DWORD *)v6 - 32) )
    {
      v6 = (_QWORD *)v6[1];
    }
    else
    {
      if ( a1 >= *((_DWORD *)v6 - 32) )
        break;
      v6 = (_QWORD *)*v6;
    }
  }
  if ( v6 && v6[81] == CurrentServerSilo && *((_DWORD *)v6 - 32) == a1 && (*((_DWORD *)v6 - 33) & 2) == 0 )
    v4 = *(v6 - 15) != (_QWORD)(v6 - 15);
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v4;
}
