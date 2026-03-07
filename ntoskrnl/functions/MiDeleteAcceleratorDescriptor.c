void __fastcall MiDeleteAcceleratorDescriptor(__int64 a1)
{
  void *v1; // rsi
  _DWORD *v2; // rbx
  unsigned __int64 v3; // rdi
  bool v4; // zf
  _QWORD *v5; // rcx
  void **v6; // rax
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax

  v1 = (void *)(a1 - 32);
  v2 = *(_DWORD **)(a1 - 32 + 24);
  v3 = ExAcquireSpinLockExclusive(&dword_140C694A0);
  v4 = v2[12]-- == 1;
  if ( v4 && (v2[13] & 1) != 0 )
  {
    v5 = *(_QWORD **)v2;
    v6 = (void **)*((_QWORD *)v2 + 1);
    if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2 || *v6 != v2 )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    --dword_140C69490;
    v7 = *(_QWORD *)(qword_140C65720 + 376LL * (unsigned int)v2[6] + 368);
    --*(_WORD *)(v7 + 10);
    --*(_WORD *)(v7 + 16);
    MiWakeLargePageWaiters(*((_QWORD **)v2 + 5));
  }
  else
  {
    v2 = 0LL;
  }
  ExFreePoolWithTag(v1, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C694A0);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v4 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v4 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
}
