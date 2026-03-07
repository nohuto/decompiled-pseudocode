void __fastcall MiCombiningInProgress(__int64 *a1, unsigned __int64 *a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  unsigned __int64 **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 **v14; // rax
  unsigned __int64 v15; // rcx
  bool v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf

  v3 = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_140C66EC0);
  if ( !a3 )
  {
    v8 = *a2;
    v9 = (unsigned __int64 **)a2[1];
    if ( *(unsigned __int64 **)(*a2 + 8) == a2 && *v9 == a2 )
    {
      *v9 = (unsigned __int64 *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      RtlAvlRemoveNode((unsigned __int64 *)&qword_140C66EC8, a2 + 2);
      --*((_DWORD *)a1 + 16);
      if ( dword_140C66EC4 == 1 )
        MiFlushEntireTbDueToAttributeChange(v11, v10, v12);
      --dword_140C66EC4;
      goto LABEL_7;
    }
LABEL_25:
    __fastfail(3u);
  }
  ++*((_DWORD *)a1 + 16);
  ++dword_140C66EC4;
  if ( !dword_140C66ED8 )
  {
    dword_140C66ED8 = 1;
    qword_140C66ED0 = _InterlockedIncrement64(&PsNextSecurityDomain);
  }
  CurrentThread = KeGetCurrentThread();
  memset(a2, 0, 0x50uLL);
  v14 = (unsigned __int64 **)(v3 + 16528);
  a2[5] = (unsigned __int64)CurrentThread;
  v15 = *(_QWORD *)(v3 + 16528);
  if ( *(_QWORD *)(v15 + 8) != v3 + 16528 )
    goto LABEL_25;
  *a2 = v15;
  v16 = 0;
  a2[1] = (unsigned __int64)v14;
  *(_QWORD *)(v15 + 8) = a2;
  *v14 = a2;
  v17 = (_QWORD *)qword_140C66EC8;
  if ( !qword_140C66EC8 )
    goto LABEL_17;
  while ( (unsigned __int64)CurrentThread < v17[3] )
  {
    v18 = (_QWORD *)*v17;
    if ( !*v17 )
      goto LABEL_17;
LABEL_15:
    v17 = v18;
  }
  v18 = (_QWORD *)v17[1];
  if ( v18 )
    goto LABEL_15;
  v16 = 1;
LABEL_17:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C66EC8, (unsigned __int64)v17, v16, (unsigned __int64)(a2 + 2));
LABEL_7:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66EC0);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v23 = (v22 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v22;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
}
