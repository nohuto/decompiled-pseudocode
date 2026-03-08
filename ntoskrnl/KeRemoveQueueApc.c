/*
 * XREFs of KeRemoveQueueApc @ 0x1402F7360
 * Callers:
 *     EtwpCancelPendingStackWalkApcs @ 0x14028E24C (EtwpCancelPendingStackWalkApcs.c)
 *     ExpCancelTimer @ 0x1402CE3BC (ExpCancelTimer.c)
 *     EtwpQueueStackWalkApc @ 0x140460526 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405FF6DC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140600A20 (EtwpCovSampCaptureCancelApcs.c)
 *     CmNotifyRunDown @ 0x1407D9F54 (CmNotifyRunDown.c)
 *     ExSwapinWorkerThreads @ 0x1409FD778 (ExSwapinWorkerThreads.c)
 * Callees:
 *     KiRemoveQueueApc @ 0x1402F742C (KiRemoveQueueApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeRemoveQueueApc(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bl
  char v4; // al
  char v5; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v8) = 4;
    if ( CurrentIrql != 2 )
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( *(_QWORD *)(v1 + 64) );
  }
  v4 = KiRemoveQueueApc(a1);
  *(_QWORD *)(v1 + 64) = 0LL;
  v5 = v4;
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
