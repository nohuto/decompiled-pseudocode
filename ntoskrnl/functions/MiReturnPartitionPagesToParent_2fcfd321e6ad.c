__int64 __fastcall MiReturnPartitionPagesToParent(ULONG_PTR BugCheckParameter2)
{
  __int16 *v2; // rbx
  KIRQL v3; // al
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // r10
  _QWORD *v9; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int16 *v16[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(v16, 0, 0x48uLL);
  v2 = **(__int16 ***)(*(_QWORD *)(BugCheckParameter2 + 200) + 64LL);
  MiDrainZeroLookasides(BugCheckParameter2, 0LL, 0LL, 0);
  v16[0] = v2;
  v16[1] = (__int16 *)BugCheckParameter2;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(BugCheckParameter2 + 224));
  v4 = *(_QWORD **)(BugCheckParameter2 + 24);
  v5 = 0LL;
  v6 = v3;
  LOBYTE(v16[2]) = v3;
  while ( v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
  }
  while ( v5 )
  {
    v7 = (_QWORD *)v5[1];
    v8 = (__int64)v5;
    v9 = v5;
    if ( v7 )
    {
      do
      {
        v5 = v7;
        v7 = (_QWORD *)*v7;
      }
      while ( v7 );
    }
    else
    {
      while ( 1 )
      {
        v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v5 || (_QWORD *)*v5 == v9 )
          break;
        v9 = v5;
      }
    }
    MiActOnPartitionNodePages(v8, 6u, 0, v16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 224));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  return MiReleasePartitionHugeIoSpace(BugCheckParameter2);
}
