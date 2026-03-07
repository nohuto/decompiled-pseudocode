__int64 __fastcall PoFxRemoveDeviceRelation(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // r14
  volatile LONG *v8; // rdi
  KIRQL v9; // al
  ULONG_PTR v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // edx
  __int64 v23; // rbp
  __int64 v24; // rcx
  unsigned __int64 v26; // r12
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  char v30; // r13
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  unsigned __int64 v35; // rsi
  __int64 v36; // rdx
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r8
  _DWORD *v39; // r10
  int v40; // eax
  _QWORD v41[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  v41[0] = 0LL;
  v6 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741585;
  if ( !a2 )
    return (unsigned int)-1073741584;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  if ( !v7 )
    return (unsigned int)-1073741584;
  v8 = (volatile LONG *)(v7 + 88);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 88));
  v10 = *(_QWORD *)(v7 + 80);
  v11 = v9;
  if ( !v10 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v11);
    return (unsigned int)-1073741584;
  }
  PopFxAddRefDevice(v10);
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v16 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)v18);
      v6 = v41[0];
    }
  }
  __writecr8(v11);
  v21 = *(_DWORD *)(v10 + 828);
  v22 = 0;
  if ( !v21 )
    goto LABEL_28;
  while ( 1 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(v10 + 832) + 8LL * v22);
    v24 = *a3 - *(_QWORD *)v23;
    if ( *a3 == *(_QWORD *)v23 )
      v24 = a3[1] - *(_QWORD *)(v23 + 8);
    if ( !v24 )
      break;
    if ( ++v22 >= v21 )
      goto LABEL_28;
  }
  if ( v23 )
  {
    PopFxActivateDevice(*(_QWORD *)(a1 + 96), 0, 0);
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1240));
    do
    {
      if ( !PopFxNextParentRelationSafe((_QWORD **)(a1 + 1264), v6, v41) )
      {
        v30 = 0;
        goto LABEL_41;
      }
      v6 = v41[0];
    }
    while ( *(_QWORD *)(v41[0] + 24LL) != v23 );
    *(_DWORD *)(v41[0] + 16LL) &= ~8u;
    v27 = (_QWORD *)(v6 + 56);
    *(_QWORD *)(v6 + 48) = 0LL;
    v28 = *(_QWORD *)(v6 + 56);
    v29 = *(_QWORD **)(v6 + 64);
    if ( *(_QWORD *)(v28 + 8) != v6 + 56 || (_QWORD *)*v29 != v27 )
      __fastfail(3u);
    *v29 = v28;
    v30 = 1;
    *(_QWORD *)(v28 + 8) = v29;
    *(_QWORD *)(v6 + 64) = v6 + 56;
    *v27 = v27;
    KxReleaseSpinLock((volatile signed __int64 *)(v6 + 8));
LABEL_41:
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 1240));
    if ( KiIrqlFlags )
    {
      v31 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
        v16 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v32);
      }
    }
    __writecr8(v26);
    if ( v30 )
    {
      v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 128));
      v36 = 0LL;
      v41[0] = 0LL;
      while ( PopFxNextComponentChildRelationSafe(v23, v36, v41) )
        v36 = v41[0];
      KxReleaseSpinLock((volatile signed __int64 *)(v23 + 128));
      if ( KiIrqlFlags )
      {
        v37 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v39 = v38->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
          v16 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v38);
        }
      }
      __writecr8(v35);
      PopFxIdleComponent(v10, *(unsigned int *)(v23 + 16), 2);
    }
    else
    {
      v3 = -1073741811;
    }
    PoFxIdleDevice(*(_QWORD *)(a1 + 96));
  }
  else
  {
LABEL_28:
    v3 = -1073741583;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 244), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v10 + 248), 0, 0);
  return v3;
}
