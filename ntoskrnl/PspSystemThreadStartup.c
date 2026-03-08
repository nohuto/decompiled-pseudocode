/*
 * XREFs of PspSystemThreadStartup @ 0x140354CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheck @ 0x140415FE0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PspTerminateThreadByPointer @ 0x1407DA8F0 (PspTerminateThreadByPointer.c)
 *     PspDisablePrimaryTokenExchange @ 0x1407ED630 (PspDisablePrimaryTokenExchange.c)
 */

__int64 __fastcall PspSystemThreadStartup(void (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // r8
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (((unsigned __int8)*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) ^ 1) & 3) == 3 )
    a1(a2);
  LOBYTE(v5) = 1;
  return PspTerminateThreadByPointer(CurrentThread, 0LL, v5);
}
