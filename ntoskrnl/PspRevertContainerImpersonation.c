/*
 * XREFs of PspRevertContainerImpersonation @ 0x140248164
 * Callers:
 *     IopProcessWorkItem @ 0x140203980 (IopProcessWorkItem.c)
 *     PsImpersonateContainerOfThread @ 0x140225F60 (PsImpersonateContainerOfThread.c)
 *     NtRevertContainerImpersonation @ 0x1405A1CC0 (NtRevertContainerImpersonation.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140231900 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiClearSystemPriority @ 0x1402DAA90 (KiClearSystemPriority.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140369DE4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(ULONG_PTR BugCheckParameter1)
{
  void *v1; // rbx
  KIRQL v4; // al
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v1 = *(void **)(BugCheckParameter1 + 1552);
  if ( !v1 )
    return 3221225473LL;
  KeSetThreadChargeOnlySchedulingGroup(BugCheckParameter1);
  v4 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
  *(_QWORD *)(BugCheckParameter1 + 1552) = 0LL;
  v5 = v4;
  KiClearSystemPriority(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  EtwTraceThreadWorkOnBehalfUpdate((__int64)v1, 0LL);
  ObDereferenceObjectDeferDeleteWithTag(v1, 0x746E6F43u);
  return 0LL;
}
