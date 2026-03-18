/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x1402F6220
 * Callers:
 *     PsGetEffectiveContainerId @ 0x140234210 (PsGetEffectiveContainerId.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402F5EA0 (IoReferenceIoAttributionFromThread.c)
 *     IopQueueWorkItemProlog @ 0x1403467F0 (IopQueueWorkItemProlog.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406BCB64 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureAttributes @ 0x1407AB790 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1409663D0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

PVOID __fastcall PsGetWorkOnBehalfThread(struct _KTHREAD *a1, _DWORD *a2)
{
  PVOID result; // rax
  KIRQL v5; // al
  PVOID Object; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  result = a1[1].WaitBlock[1].Object;
  *a2 = 0;
  if ( result && a1 != KeGetCurrentThread() )
  {
    v5 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = a1[1].WaitBlock[1].Object;
    v7 = v5;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      *a2 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    return Object;
  }
  return result;
}
