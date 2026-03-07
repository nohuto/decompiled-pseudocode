__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v7; // edx
  bool v8; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C5D990);
  v1 = qword_140C5D980;
  v2 = v0;
  v3 = *(_QWORD *)qword_140C5D980;
  if ( *(__int64 **)(qword_140C5D980 + 8) != &qword_140C5D980 || *(_QWORD *)(v3 + 8) != qword_140C5D980 )
    __fastfail(3u);
  qword_140C5D980 = *(_QWORD *)qword_140C5D980;
  *(_QWORD *)(v3 + 8) = &qword_140C5D980;
  IopCurrentHardError = v1;
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C5D990);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return v1;
}
