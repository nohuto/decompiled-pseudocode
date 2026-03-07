__int64 __fastcall PoFxRemoveComponentRelation(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  ULONG_PTR v6; // r13
  __int64 v7; // rdi
  KIRQL v8; // al
  ULONG_PTR v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // edx
  __int64 v22; // rsi
  __int64 v23; // rcx
  KIRQL v25; // al
  __int64 v26; // rcx
  unsigned __int64 v27; // r12
  _QWORD **v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r8
  _QWORD *v31; // rdx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int64 v36; // r12
  __int64 v37; // rdx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  char v42; // [rsp+20h] [rbp-48h]
  __int64 i; // [rsp+28h] [rbp-40h] BYREF
  __int64 v44; // [rsp+30h] [rbp-38h]
  _QWORD **v45; // [rsp+38h] [rbp-30h]

  v4 = 0;
  i = 0LL;
  v6 = BugCheckParameter2;
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741585;
  if ( a2 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    return (unsigned int)-1073741584;
  _mm_lfence();
  v44 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * a2);
  if ( !a3 )
    return (unsigned int)-1073741583;
  v7 = *(_QWORD *)(*(_QWORD *)(a3 + 312) + 40LL);
  if ( !v7 )
    return (unsigned int)-1073741583;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 88));
  v9 = *(_QWORD *)(v7 + 80);
  v10 = v8;
  if ( !v9 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 88));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v10);
    return (unsigned int)-1073741583;
  }
  PopFxAddRefDevice(*(_QWORD *)(v7 + 80));
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 88));
  if ( KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v16 >= 2u )
    {
      v17 = KeGetCurrentPrcb();
      v18 = v17->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v15 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)v17);
    }
  }
  __writecr8(v10);
  v20 = *(_DWORD *)(v9 + 828);
  v21 = 0;
  if ( !v20 )
    goto LABEL_29;
  while ( 1 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(v9 + 832) + 8LL * v21);
    v23 = *a4 - *(_QWORD *)v22;
    if ( *a4 == *(_QWORD *)v22 )
      v23 = a4[1] - *(_QWORD *)(v22 + 8);
    if ( !v23 )
      break;
    if ( ++v21 >= v20 )
      goto LABEL_29;
  }
  if ( v22 )
  {
    PopFxActivateComponent(v6, v44, 1, 0);
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v44 + 128));
    v26 = i;
    v27 = v25;
    v28 = (_QWORD **)(v44 + 456);
    v42 = 0;
    v45 = (_QWORD **)(v44 + 456);
    while ( PopFxNextParentRelationSafe(v28, v26, &i) )
    {
      v26 = i;
      v28 = v45;
      if ( *(_QWORD *)(i + 24) == v22 )
      {
        *(_DWORD *)(i + 16) &= ~8u;
        v29 = (_QWORD *)(v26 + 56);
        *(_QWORD *)(v26 + 48) = 0LL;
        v30 = *(_QWORD *)(v26 + 56);
        v31 = *(_QWORD **)(v26 + 64);
        if ( *(_QWORD *)(v30 + 8) != v26 + 56 || (_QWORD *)*v31 != v29 )
          __fastfail(3u);
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        *(_QWORD *)(v26 + 64) = v26 + 56;
        *v29 = v29;
        v42 = 1;
        KxReleaseSpinLock((volatile signed __int64 *)(v26 + 8));
        break;
      }
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v44 + 128));
    if ( KiIrqlFlags )
    {
      v32 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
        v15 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)v33);
      }
    }
    __writecr8(v27);
    if ( v42 )
    {
      v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 128));
      v37 = 0LL;
      for ( i = 0LL; PopFxNextComponentChildRelationSafe(v22, v37, &i); v37 = i )
        ;
      KxReleaseSpinLock((volatile signed __int64 *)(v22 + 128));
      if ( KiIrqlFlags )
      {
        v38 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
          v15 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)v39);
        }
      }
      __writecr8(v36);
      PopFxIdleComponent(v9, *(unsigned int *)(v22 + 16), 2);
      v6 = BugCheckParameter2;
    }
    else
    {
      v4 = -1073741811;
    }
    PopFxIdleComponent(v6, *(unsigned int *)(v44 + 16), 2);
  }
  else
  {
LABEL_29:
    v4 = -1073741582;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 244), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v9 + 248), 0, 0);
  return v4;
}
