/*
 * XREFs of RtlCSparseBitmapLeaveLockingRegion @ 0x140363560
 * Callers:
 *     RtlSparseArrayElementAllocate @ 0x14023D4C8 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14023DD4C (RtlpCSparseBitmapPageDecommit.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x140363490 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140363A64 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall RtlCSparseBitmapLeaveLockingRegion(unsigned __int8 *a1)
{
  $CEA84C04E3712D858E5667A507841A2A *v1; // rax
  unsigned __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  bool v4; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v1 = ($CEA84C04E3712D858E5667A507841A2A *)*((_QWORD *)a1 + 1);
  if ( v1[1].ApcStateFill[0] )
  {
    LOBYTE(v1) = KiIrqlFlags;
    v2 = *a1;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( (unsigned __int8)v1 <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)v1 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          LODWORD(v1) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v4 = ((unsigned int)v1 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= (unsigned int)v1;
          if ( v4 )
            LOBYTE(v1) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 )
    {
      v1 = &CurrentThread->152;
      if ( ($CEA84C04E3712D858E5667A507841A2A *)v1->ApcState.ApcListHead[0].Flink != v1 )
        LOBYTE(v1) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v1;
}
