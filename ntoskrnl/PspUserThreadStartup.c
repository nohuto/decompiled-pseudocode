/*
 * XREFs of PspUserThreadStartup @ 0x1407ED430
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PspTerminateThreadByPointer @ 0x1407DA8F0 (PspTerminateThreadByPointer.c)
 *     MmGetSessionLocaleId @ 0x1407ED514 (MmGetSessionLocaleId.c)
 *     PspNotifyThreadCreation @ 0x1407ED550 (PspNotifyThreadCreation.c)
 *     PspDisablePrimaryTokenExchange @ 0x1407ED630 (PspDisablePrimaryTokenExchange.c)
 *     PspWriteTebIdealProcessor @ 0x1407ED78C (PspWriteTebIdealProcessor.c)
 *     PspInitializeThunkContext @ 0x1407EDF4C (PspInitializeThunkContext.c)
 *     DbgkCreateMinimalThread @ 0x14093621C (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rcx
  __int64 v2; // r8
  NTSTATUS *v3; // rdi
  int SessionLocaleId; // eax
  __int64 v5; // rdx
  NTSTATUS result; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v10; // zf

  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
    PspTerminateThreadByPointer((__int64)CurrentThread, 0xC000004B, 1);
  v3 = (NTSTATUS *)&CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink + 1;
  if ( (*v3 & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    SessionLocaleId = MmGetSessionLocaleId(v1, CurrentThread->Teb, v2);
    *(_DWORD *)(v5 + 264) = SessionLocaleId;
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    PspNotifyThreadCreation(CurrentThread);
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  result = *v3;
  if ( (*v3 & 1) == 0 )
    return PspInitializeThunkContext();
  return result;
}
