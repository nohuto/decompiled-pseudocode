void __fastcall MiEnumerateQuarantinedBadHugeRangePages(__int64 a1)
{
  unsigned __int64 v1; // rsi
  SIZE_T v3; // rdx
  _QWORD *Pool; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rsi
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  int v14; // eax
  _DWORD *v15; // r8
  _QWORD *v16; // rax

  v1 = qword_140C66FE8;
  if ( qword_140C66FE8 )
  {
    while ( 1 )
    {
      if ( v1 > 0x1FFFFFFFFFFFFFFFLL
        || (v3 = 8 * v1 + 32, v3 <= 8 * v1)
        || (Pool = MiAllocatePool(64, v3, 0x61426D4Du)) == 0LL )
      {
        *(_DWORD *)(a1 + 16) = -1073741670;
        return;
      }
      v5 = ExAcquireSpinLockShared(&dword_140C66F90);
      if ( v1 >= qword_140C66FE8 )
        break;
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66F90);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v10 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v5);
      ExFreePoolWithTag(Pool, 0);
      v1 = qword_140C66FE8;
      if ( !qword_140C66FE8 )
        return;
    }
    Pool[3] = Pool + 4;
    v11 = MiEnumerateBadHugeRangePages((__int64)(Pool + 4), v1, 1);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66F90);
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v15 = v13->SchedulerAssist;
        v10 = (v14 & v15[5]) == 0;
        v15[5] &= v14;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)v13);
      }
    }
    __writecr8(v5);
    if ( v11 )
    {
      Pool[2] = v11;
      *(_QWORD *)(a1 + 24) += v11;
      v16 = *(_QWORD **)(a1 + 8);
      if ( *v16 != a1 )
        __fastfail(3u);
      *Pool = a1;
      Pool[1] = v16;
      *v16 = Pool;
      *(_QWORD *)(a1 + 8) = Pool;
    }
    else
    {
      ExFreePoolWithTag(Pool, 0);
    }
  }
}
