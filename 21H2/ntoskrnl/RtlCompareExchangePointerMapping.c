/*
 * XREFs of RtlCompareExchangePointerMapping @ 0x1405E7140
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x1405E7AF0 (RtlpAcquirePropStoreLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlCompareExchangePointerMapping(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *Pool2; // rdi
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  bool v12; // r8
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf

  if ( KeGetCurrentIrql() <= 2u )
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1886539858LL);
  else
    Pool2 = 0LL;
  v9 = RtlpAcquirePropStoreLockExclusive(&RtlpPtrTreeLock);
  v10 = (unsigned __int64)RtlpPtrTree;
  v11 = v9;
  if ( (qword_140C0D788 & 1) != 0 )
  {
    if ( !RtlpPtrTree )
    {
      v12 = 0;
      goto LABEL_11;
    }
    v10 = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree;
  }
  v12 = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( a1 - *(_QWORD *)(v10 + 24) >= 0 )
      {
        if ( a1 - *(_QWORD *)(v10 + 24) <= 0 )
        {
          v16 = *(_QWORD *)(v10 + 32);
          if ( !a3 || v16 == *a3 )
            *(_QWORD *)(v10 + 32) = a2;
          v14 = 0x40000000;
LABEL_27:
          if ( a4 )
            *a4 = v16;
          goto LABEL_29;
        }
        v15 = *(_QWORD *)(v10 + 8);
        if ( !v15 || (v13 = v10 ^ v15) == 0 )
        {
          v12 = 1;
          break;
        }
      }
      else
      {
        if ( !*(_QWORD *)v10 )
          break;
        v13 = v10 ^ *(_QWORD *)v10;
        if ( !v13 )
          break;
      }
      v10 = v13;
    }
  }
LABEL_11:
  if ( Pool2 )
  {
    Pool2[3] = a1;
    Pool2[4] = a2;
    RtlRbInsertNodeEx((unsigned __int64 *)&RtlpPtrTree, v10, v12, (unsigned __int64)Pool2);
    if ( a3 )
      v16 = *a3;
    else
      v16 = 0LL;
    Pool2 = 0LL;
    v14 = 0;
    goto LABEL_27;
  }
  v14 = -1073741670;
LABEL_29:
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPtrTreeLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v14;
}
