/*
 * XREFs of KeRequestTerminationThread @ 0x14035BD28
 * Callers:
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x140707AC0 (PspTerminateThreadByPointer.c)
 *     KeRequestTerminationProcess @ 0x1408BAD80 (KeRequestTerminationProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KeForceResumeThread @ 0x14034281C (KeForceResumeThread.c)
 *     KiSignalThreadForApc @ 0x1403436D0 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140343854 (KiInsertQueueApc.c)
 *     KeAlertThread @ 0x14035BE90 (KeAlertThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 */

char __fastcall KeRequestTerminationThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rax
  char v6; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v9; // rcx
  struct _KPRCB *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v18[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v19[14]; // [rsp+40h] [rbp-98h] BYREF

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_BYTE *)(v4 + 992) & 1) != 0 )
  {
    memset(v19, 0, 0x68uLL);
    v19[1] = *(unsigned int *)(a1 + 796);
    v19[2] = a1;
    LOBYTE(v4) = VslpEnterIumSecureMode(2u, 9, 0, (__int64)v19);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xFu) )
  {
    v6 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v18[0] = 0;
    while ( 1 )
    {
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v9[6];
          v9[6] = v15 + 1;
          if ( v15 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v16 = v14[6] - 1;
          v14[6] = v16;
          if ( !v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(v18, a2, a3, (__int64)SchedulerAssist);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v10 = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v6 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
        KiSignalThreadForApc((__int64)v10, a1 + 648, CurrentIrql);
      }
    }
    KiReleaseThreadLockSafe(a1);
    LOBYTE(v4) = KiExitDispatcher((__int64)v10, 0LL, 1LL, 0LL, CurrentIrql);
    if ( v6 )
    {
      KeAlertThread(a1, 0LL);
      LOBYTE(v4) = KeForceResumeThread(a1, v11, v12, v13);
    }
  }
  return v4;
}
