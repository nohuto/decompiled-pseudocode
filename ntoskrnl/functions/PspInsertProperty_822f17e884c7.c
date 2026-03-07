__int64 __fastcall PspInsertProperty(KSPIN_LOCK *a1, __int64 a2, void *a3)
{
  int v3; // edi
  KSPIN_LOCK *Pool2; // rbx
  unsigned __int64 v8; // rbp
  KSPIN_LOCK v9; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  v3 = 0;
  Pool2 = (KSPIN_LOCK *)ExAllocatePool2(64LL, 32LL, 1349742672LL);
  if ( Pool2 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(a1 + 2);
    if ( PspFindPropertySetEntry(a1, a2) )
    {
      v3 = -1073741771;
    }
    else
    {
      Pool2[2] = a2;
      Pool2[3] = (KSPIN_LOCK)a3;
      v9 = *a1;
      if ( *(KSPIN_LOCK **)(*a1 + 8) != a1 )
        __fastfail(3u);
      *Pool2 = v9;
      Pool2[1] = (KSPIN_LOCK)a1;
      *(_QWORD *)(v9 + 8) = Pool2;
      *a1 = (KSPIN_LOCK)Pool2;
      ObfReferenceObjectWithTag(a3, 0x72507350u);
    }
    KxReleaseSpinLock((volatile signed __int64 *)a1 + 2);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
    if ( v3 < 0 )
      ExFreePoolWithTag(Pool2, 0x50737050u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
