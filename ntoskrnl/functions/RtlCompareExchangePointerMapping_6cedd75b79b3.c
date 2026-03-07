__int64 __fastcall RtlCompareExchangePointerMapping(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *Pool2; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  bool v11; // r8
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf

  if ( KeGetCurrentIrql() <= 2u )
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1886539858LL);
  else
    Pool2 = 0LL;
  v9 = (unsigned __int8)RtlpAcquirePropStoreLockExclusive(&RtlpPtrTreeLock);
  if ( (qword_140C0DB48 & 1) != 0 )
  {
    if ( RtlpPtrTree )
      v10 = RtlpPtrTree ^ (unsigned __int64)&RtlpPtrTree;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = RtlpPtrTree;
  }
  v11 = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( a1 - *(_QWORD *)(v10 + 24) >= 0 )
      {
        if ( a1 - *(_QWORD *)(v10 + 24) <= 0 )
        {
          v15 = *(_QWORD *)(v10 + 32);
          if ( !a3 || v15 == *a3 )
            *(_QWORD *)(v10 + 32) = a2;
          v13 = 0x40000000;
LABEL_28:
          if ( a4 )
            *a4 = v15;
          goto LABEL_30;
        }
        v14 = *(_QWORD *)(v10 + 8);
        if ( !v14 || (v12 = v10 ^ v14) == 0 )
        {
          v11 = 1;
          break;
        }
      }
      else
      {
        if ( !*(_QWORD *)v10 )
          break;
        v12 = v10 ^ *(_QWORD *)v10;
        if ( !v12 )
          break;
      }
      v10 = v12;
    }
  }
  if ( Pool2 )
  {
    Pool2[3] = a1;
    Pool2[4] = a2;
    RtlRbInsertNodeEx((unsigned __int64 *)&RtlpPtrTree, v10, v11, (unsigned __int64)Pool2);
    if ( a3 )
      v15 = *a3;
    else
      v15 = 0LL;
    Pool2 = 0LL;
    v13 = 0;
    goto LABEL_28;
  }
  v13 = -1073741670;
LABEL_30:
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPtrTreeLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v13;
}
