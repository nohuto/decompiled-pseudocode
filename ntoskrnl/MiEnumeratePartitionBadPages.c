/*
 * XREFs of MiEnumeratePartitionBadPages @ 0x140627760
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiEnumeratePartitionBadPages(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  SIZE_T v5; // rdx
  __int64 *Pool; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  __int64 *v13; // rcx
  __int64 i; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  int v17; // eax
  _DWORD *v18; // r8
  __int64 **v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v22; // eax
  _DWORD *SchedulerAssist; // r8

  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 6720);
    if ( !v4 )
      break;
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL
      || (v5 = 8 * v4 + 32, v5 <= 8 * v4)
      || (Pool = (__int64 *)MiAllocatePool(64, v5, 0x61426D4Du)) == 0LL )
    {
      *(_DWORD *)(a2 + 16) = -1073741670;
      return;
    }
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 6752));
    if ( !*(_QWORD *)(a1 + 6720) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 6752));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v7);
      ExFreePoolWithTag(Pool, 0);
      return;
    }
    if ( v4 >= *(_QWORD *)(a1 + 6720) )
    {
      v13 = Pool + 4;
      Pool[2] = *(_QWORD *)(a1 + 6720);
      Pool[3] = (__int64)(Pool + 4);
      for ( i = *(_QWORD *)(a1 + 6736); i != 0x3FFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x220000000000LL) & 0xFFFFFFFFFFLL )
        *v13++ = i;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 6752));
      if ( KiIrqlFlags )
      {
        v15 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v18 = v16->SchedulerAssist;
          v12 = (v17 & v18[5]) == 0;
          v18[5] &= v17;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v16);
        }
      }
      __writecr8(v7);
      *(_QWORD *)(a2 + 24) += Pool[2];
      v19 = *(__int64 ***)(a2 + 8);
      if ( *v19 != (__int64 *)a2 )
        __fastfail(3u);
      *Pool = a2;
      Pool[1] = (__int64)v19;
      *v19 = Pool;
      *(_QWORD *)(a2 + 8) = Pool;
      return;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 6752));
    if ( KiIrqlFlags )
    {
      v8 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v9);
      }
    }
    __writecr8(v7);
    ExFreePoolWithTag(Pool, 0);
  }
}
