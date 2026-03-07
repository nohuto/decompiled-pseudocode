void __fastcall MiDeleteExtentPfns(__int64 a1)
{
  __int64 v2; // rax
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  if ( a1 )
  {
    v2 = KeAbPreAcquire((__int64)&qword_140C65388, 0LL);
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
  }
  do
  {
    while ( qword_140C65360 )
      MiRemovePhysicalMemory(0LL);
    v3 = ExAcquireSpinLockExclusive(&dword_140C6CB20);
    v6 = qword_140C65360;
    v7 = v3;
    if ( a1 )
    {
      if ( !qword_140C65360 )
      {
        LOBYTE(v4) = v3;
        MiWakeExtentDeletionWaiters(v5, v4);
        MiPurgeBadFileOnlyPages();
        goto LABEL_22;
      }
    }
    else if ( qword_140C65360 || byte_140C653A9 )
    {
      LOBYTE(v4) = v3;
      MiWaitForExtentDeletions(v5, v4);
      return;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CB20);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v7);
  }
  while ( v6 );
  if ( !a1 )
    return;
LABEL_22:
  KeAbPostRelease((ULONG_PTR)&qword_140C65388);
}
