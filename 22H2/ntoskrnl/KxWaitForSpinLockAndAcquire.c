/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x1402D8A70
 * Callers:
 *     IoRemoveIoCompletion @ 0x140204390 (IoRemoveIoCompletion.c)
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 *     PpmUpdatePerformanceFeedback @ 0x140224030 (PpmUpdatePerformanceFeedback.c)
 *     KxAcquireSpinLock @ 0x140229570 (KxAcquireSpinLock.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     KiExecuteAllDpcs @ 0x140246C20 (KiExecuteAllDpcs.c)
 *     NtCancelTimer @ 0x140248470 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140248D90 (ExpSetTimerObject.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402D3F10 (IopDequeueIrpFromThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402ED670 (NtAssociateWaitCompletionPacket.c)
 *     PsGetThreadProperty @ 0x1402EFE20 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x1402F1100 (IopQueueIrpToFileObject.c)
 *     KiCallInterruptServiceRoutine @ 0x1403439C0 (KiCallInterruptServiceRoutine.c)
 *     KiAcquireSpinLockInstrumented @ 0x1405167CC (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14038FA40 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390820 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  volatile signed __int32 *v5; // rdi
  unsigned int v6; // ebx
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  int v10; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a1;
  v6 = 0;
  while ( 1 )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)v5 );
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = SchedulerAssist[6];
        SchedulerAssist[6] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64(v5, 0LL) )
      break;
    a1 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( a1 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = *((_DWORD *)a1 + 6) - 1;
        *((_DWORD *)a1 + 6) = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  return v6;
}
