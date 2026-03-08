/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x140580A80
 * Callers:
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  void *v2; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C64C98);
  if ( !P || dword_140C64CA0 == P[41] )
  {
    v2 = (void *)qword_140C64C88;
    if ( qword_140C64C88 )
    {
      qword_140C64C88 = 0LL;
      KeSetActualBasePriorityThread((ULONG_PTR)v2, dword_140C64C90);
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C64C98);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( v2 )
    ObDereferenceObjectDeferDeleteWithTag(v2, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
