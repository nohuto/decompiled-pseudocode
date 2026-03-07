__int64 __fastcall PoFxAddDeviceRelation(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rsi
  volatile LONG *v8; // rdi
  KIRQL v9; // al
  ULONG_PTR v10; // rsi
  unsigned __int64 v11; // r15
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
  _QWORD *v23; // r15
  __int64 v24; // rcx
  __int64 Pool2; // rax
  __int64 v27; // rcx
  _QWORD *v28; // r12
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  unsigned __int8 v31; // al
  KIRQL v32; // r12
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  KIRQL v36; // al
  _QWORD *v37; // r15
  unsigned __int64 v38; // r12
  _QWORD *v39; // rax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  __int64 v44; // [rsp+20h] [rbp-48h]
  KIRQL v45; // [rsp+70h] [rbp+8h]
  volatile signed __int64 *v46; // [rsp+70h] [rbp+8h]

  v4 = 0;
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
    }
  }
  __writecr8(v11);
  if ( v10 == a1 )
  {
    v4 = -1073741584;
  }
  else
  {
    v21 = *(_DWORD *)(v10 + 828);
    v22 = 0;
    if ( !v21 )
      goto LABEL_29;
    while ( 1 )
    {
      v23 = *(_QWORD **)(*(_QWORD *)(v10 + 832) + 8LL * v22);
      v24 = *a3 - *v23;
      if ( *a3 == *v23 )
        v24 = a3[1] - v23[1];
      if ( !v24 )
        break;
      if ( ++v22 >= v21 )
        goto LABEL_29;
    }
    if ( v23 )
    {
      if ( (unsigned int)(a4 - 2) > 2 )
      {
        v4 = -1073741582;
      }
      else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 1) != 0
             || (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 824), 0, 0) & 1) != 0 )
      {
        v4 = -1073741811;
      }
      else
      {
        Pool2 = ExAllocatePool2(64LL, 72LL, 1297630800LL);
        v44 = Pool2;
        v27 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = 0;
          v28 = (_QWORD *)(Pool2 + 56);
          *(_QWORD *)(Pool2 + 8) = 0LL;
          v29 = (_QWORD *)(Pool2 + 32);
          *(_QWORD *)(v27 + 24) = v23;
          *(_QWORD *)(v27 + 64) = v27 + 56;
          *(_QWORD *)(v27 + 56) = v27 + 56;
          v29[1] = v29;
          *v29 = v29;
          *(_QWORD *)(v27 + 48) = a1 + 1240;
          *(_DWORD *)(v27 + 16) = *(_DWORD *)(v27 + 16) ^ (*(_DWORD *)(v27 + 16) ^ (16 * a4)) & 0x30 | 0xE;
          PopFxActivateComponent(v10, (__int64)v23, 1, 0);
          PopFxActivateDevice(*(_QWORD *)(a1 + 96), 0, 0);
          v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1240));
          v30 = *(_QWORD **)(a1 + 1272);
          if ( *v30 != a1 + 1264 )
            goto LABEL_57;
          *v28 = a1 + 1264;
          v28[1] = v30;
          *v30 = v28;
          *(_QWORD *)(a1 + 1272) = v28;
          KxReleaseSpinLock((volatile signed __int64 *)(a1 + 1240));
          if ( KiIrqlFlags && (v31 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v31 <= 0xFu )
          {
            v32 = v45;
            if ( v45 <= 0xFu && v31 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = v33->SchedulerAssist;
              v35 = ~(unsigned __int16)(-1LL << (v45 + 1));
              v16 = (v35 & v34[5]) == 0;
              v34[5] &= v35;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v33);
            }
          }
          else
          {
            v32 = v45;
          }
          __writecr8(v32);
          v46 = v23 + 16;
          v36 = KeAcquireSpinLockRaiseToDpc(v23 + 16);
          v37 = v23 + 55;
          v38 = v36;
          v39 = (_QWORD *)v37[1];
          if ( (_QWORD *)*v39 != v37 )
LABEL_57:
            __fastfail(3u);
          *(_QWORD *)(v44 + 32) = v37;
          *(_QWORD *)(v44 + 40) = v39;
          *v39 = v44 + 32;
          v37[1] = v44 + 32;
          KxReleaseSpinLock(v46);
          if ( KiIrqlFlags )
          {
            v40 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v40 >= 2u )
            {
              v41 = KeGetCurrentPrcb();
              v42 = v41->SchedulerAssist;
              v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
              v16 = (v43 & v42[5]) == 0;
              v42[5] &= v43;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)v41);
            }
          }
          __writecr8(v38);
          PoFxIdleDevice(*(_QWORD *)(a1 + 96));
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
    else
    {
LABEL_29:
      v4 = -1073741583;
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 244), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v10 + 248), 0, 0);
  return v4;
}
