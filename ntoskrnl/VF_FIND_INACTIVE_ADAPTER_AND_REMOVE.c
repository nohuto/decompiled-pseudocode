/*
 * XREFs of VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x140AC19DC
 * Callers:
 *     VfGetDmaAdapter @ 0x140AC3560 (VfGetDmaAdapter.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _LIST_ENTRY *__fastcall VF_FIND_INACTIVE_ADAPTER_AND_REMOVE(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // rdi
  unsigned __int64 v3; // rbx
  struct _LIST_ENTRY *i; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C36590);
  for ( i = ViAdapterList.Flink; &ViAdapterList != i; i = i->Flink )
  {
    if ( i[4].Flink == a1 && (SHIDWORD(i[4].Blink) <= 0 || LOBYTE(i[4].Blink) == 1) )
    {
      Flink = i->Flink;
      v2 = i;
      Blink = i->Blink;
      if ( i->Flink->Blink != i || Blink->Flink != i )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      break;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C36590);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  return v2;
}
