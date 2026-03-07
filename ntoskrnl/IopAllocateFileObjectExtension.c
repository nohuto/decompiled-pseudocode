__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // r14
  volatile signed __int64 *v6; // r15
  KIRQL v7; // al
  __int64 Pool2; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v19; // eax

  v2 = *(void **)(a1 + 208);
  v3 = 0LL;
  if ( v2 )
  {
    if ( v2 != IopRevocationExtension )
    {
      if ( a2 )
        *a2 = (__int64)v2;
      return 0LL;
    }
  }
  else
  {
    v6 = (volatile signed __int64 *)(a1 + 184);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    Pool2 = *(_QWORD *)(a1 + 208);
    v9 = v7;
    if ( Pool2 )
    {
LABEL_7:
      if ( a2 )
        *a2 = Pool2;
      KxReleaseSpinLock(v6);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v15 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8((unsigned __int8)v9);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      v11 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    __writecr8(v9);
    Pool2 = ExAllocatePool2(64LL, 96LL, 1162243913LL);
    if ( Pool2 )
    {
      LOBYTE(v9) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
      if ( *(_QWORD *)(a1 + 208) )
      {
        v3 = (void *)Pool2;
        Pool2 = *(_QWORD *)(a1 + 208);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 208), Pool2);
      }
      goto LABEL_7;
    }
  }
  return 3221225626LL;
}
