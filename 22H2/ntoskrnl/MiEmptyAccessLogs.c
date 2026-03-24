/*
 * XREFs of MiEmptyAccessLogs @ 0x1403A2D30
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDrainSystemAccessLog @ 0x14025B3E0 (MiDrainSystemAccessLog.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MiGetNextSession @ 0x140263DF8 (MiGetNextSession.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmDetachSession @ 0x1402EC090 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EC130 (MmAttachSession.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403A2F14 (MiCheckAndProcessCcAccessLog.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     PsGetNextProcess @ 0x14062BFA0 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void MiEmptyAccessLogs()
{
  PSLIST_ENTRY v0; // r15
  unsigned __int64 v1; // rdi
  _KPROCESS *i; // rcx
  __int64 NextProcess; // rax
  __int64 v4; // rdx
  _KPROCESS *v5; // rdi
  __int64 v6; // r14
  _DWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _DMA_ADAPTER *j; // rcx
  _KPROCESS *NextSession; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  unsigned __int64 SessionVm; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rdi
  __int64 v19; // r14
  unsigned __int64 v20; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v36[3]; // [rsp+38h] [rbp-38h] BYREF

  memset(v36, 0, sizeof(v36));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4E840, &LockHandle);
  if ( dword_140C4E828 )
  {
    stru_140C4E808.Parameter = 0LL;
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
          v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v26 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    v0 = 0LL;
    do
    {
      stru_140C4E808.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v1 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v26 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
      }
      __writecr8(v1);
      for ( i = 0LL; ; i = v5 )
      {
        NextProcess = PsGetNextProcess(i);
        v5 = (_KPROCESS *)NextProcess;
        if ( !NextProcess )
          break;
        v6 = NextProcess + 1664;
        if ( *((_QWORD *)MiGetSharedVm(NextProcess + 1664) + 5) )
        {
          KiStackAttachProcess(v5, 0LL, (__int64)v36, v7);
          MiDrainSystemAccessLog(v6, v8, v9);
          KiUnstackDetachProcess((__int64)v36, 0);
        }
      }
      for ( j = 0LL; ; j = (struct _DMA_ADAPTER *)v14 )
      {
        NextSession = (_KPROCESS *)MiGetNextSession(j, v4);
        v14 = (__int64)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, (__int64)v36) >= 0 )
        {
          SessionVm = MiGetSessionVm();
          MiDrainSystemAccessLog(SessionVm, v16, v17);
          MmDetachSession(v14, (__int64)v36);
        }
      }
      v18 = &unk_140C4F000;
      v19 = 3LL;
      do
      {
        if ( v18[14] )
          MiDrainSystemAccessLog((__int64)v18, v12, v13);
        v18 += 40;
        --v19;
      }
      while ( v19 );
      MiCheckAndProcessCcAccessLog(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&qword_140C4E840, &LockHandle);
    }
    while ( stru_140C4E808.Parameter != (void *)2 );
    if ( !dword_140C4E828 )
    {
      v0 = P;
      P = 0LL;
    }
    stru_140C4E808.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v20 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && LockHandle.OldIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v26 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
    }
    __writecr8(v20);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
