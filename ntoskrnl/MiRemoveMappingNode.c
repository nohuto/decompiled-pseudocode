/*
 * XREFs of MiRemoveMappingNode @ 0x1403BD598
 * Callers:
 *     MmFreeMappingAddress @ 0x14086B720 (MmFreeMappingAddress.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 *__fastcall MiRemoveMappingNode(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rbp
  KIRQL v4; // al
  unsigned __int64 *v5; // rbx
  ULONG_PTR v6; // r8
  unsigned __int64 v7; // rdi
  ULONG_PTR v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf

  v3 = (unsigned int)BugCheckParameter3;
  v4 = ExAcquireSpinLockExclusive(&dword_140C68140);
  v5 = (unsigned __int64 *)qword_140C68148;
  v6 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  v7 = v4;
  while ( v5 )
  {
    v8 = v5[3];
    if ( v6 < v8 )
    {
      v5 = (unsigned __int64 *)*v5;
    }
    else
    {
      if ( v6 < v8 + (v5[4] << 12) )
        break;
      v5 = (unsigned __int64 *)v5[1];
    }
  }
  if ( !v5 )
    KeBugCheckEx(0xDAu, 0x106uLL, BugCheckParameter2, v3, 0LL);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140C68148, v5);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68140);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return v5;
}
