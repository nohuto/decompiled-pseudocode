char __fastcall RtlCSparseBitmapLeaveLockingRegion(unsigned __int8 *a1)
{
  $C71981A45BEB2B45F82C232A7085991E *v1; // rax
  unsigned __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  bool v4; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v1 = ($C71981A45BEB2B45F82C232A7085991E *)*((_QWORD *)a1 + 1);
  if ( v1[1].ApcStateFill[0] )
  {
    v2 = *a1;
    if ( KiIrqlFlags )
    {
      LOBYTE(v1) = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)v1 <= 0xFu
        && (unsigned __int8)v2 <= 0xFu
        && (unsigned __int8)v1 >= 2u )
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
    __writecr8(v2);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 )
    {
      v1 = &CurrentThread->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v1->ApcState.ApcListHead[0].Flink != v1 )
        LOBYTE(v1) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v1;
}
