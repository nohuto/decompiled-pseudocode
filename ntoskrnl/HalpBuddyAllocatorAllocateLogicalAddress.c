__int64 __fastcall HalpBuddyAllocatorAllocateLogicalAddress(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        _QWORD *a6)
{
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  int v12; // ebx
  unsigned __int64 i; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // cl
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // r8d
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  unsigned __int64 v40; // rcx
  _QWORD *v41; // rdi
  __int64 v42; // r14
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  KIRQL v47; // [rsp+20h] [rbp-208h]
  int v48; // [rsp+24h] [rbp-204h]
  __int64 v49; // [rsp+28h] [rbp-200h]
  _QWORD v51[52]; // [rsp+40h] [rbp-1E8h] BYREF

  memset(v51, 0, sizeof(v51));
  v10 = *(_QWORD *)(a1 + 40);
  v11 = 0LL;
  v48 = 0;
  *(_BYTE *)(a1 + 120) = 0;
  if ( a2 )
    return (unsigned int)-1073741637;
  if ( a3 > *(_QWORD *)(a1 + 32) )
    return (unsigned int)-1073741583;
  for ( i = *(_QWORD *)(a1 + 24); i < a3; i *= 2LL )
    ;
  if ( a4 )
    v11 = *a4;
  if ( a5 )
    v10 = *a5;
  if ( ((i - 1) & i) != 0 )
    return (unsigned int)-1073741811;
  if ( !i )
    return (unsigned int)-1073741811;
  v14 = ~(i - 1);
  v15 = v14 & (i + v11 - 1);
  if ( v15 < v11 )
    return (unsigned int)-1073741811;
  if ( v10 == -1LL )
  {
    v16 = -1LL;
  }
  else
  {
    v16 = (v14 & (v10 + 1)) - 1;
    if ( v16 > v10 )
      return (unsigned int)-1073741811;
  }
  if ( v15 > v16 || i > v16 - v15 + 1 && v16 - v15 != -1LL )
    return (unsigned int)-1073741811;
  v18 = *(_QWORD *)(a1 + 88);
  v12 = 0;
  v19 = *(_QWORD *)(v18 + 48);
  if ( *(_QWORD *)(v18 + 56) + v19 - 1 < v15 || v19 > v16 )
    return (unsigned int)-1073741776;
  v20 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 112));
  v21 = HalpBuddyAllocatorBltFindAndPop(i, a1, v15, v16);
  if ( !v21 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v20);
    v47 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
    v21 = HalpBuddyAllocatorBltFindAndPop(i, a1, v15, v16);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    if ( KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && v47 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (v47 + 1));
        v26 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    __writecr8(v47);
    if ( !v21 )
      return (unsigned int)-1073741670;
    LOBYTE(v20) = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 112));
  }
  v31 = v21;
  v49 = v21;
  if ( *(_QWORD *)(v21 + 56) != i )
  {
    while ( 1 )
    {
      v12 = HalpBuddyAllocatorSplitNode(a1, v21);
      if ( v12 < 0 )
        break;
      v32 = *(_QWORD *)(v21 + 24);
      v33 = *(_QWORD *)(v32 + 48);
      if ( v33 + *(_QWORD *)(v32 + 56) - 1LL < i + v15 - 1 || v33 > v16 - i + 1 )
      {
        v21 = *(_QWORD *)(v21 + 32);
        v34 = v32;
      }
      else
      {
        v34 = *(_QWORD *)(v21 + 32);
        v21 = *(_QWORD *)(v21 + 24);
      }
      v51[v48] = v34;
      v35 = ++v48;
      if ( *(_QWORD *)(v21 + 56) == i )
      {
        v31 = v49;
        goto LABEL_61;
      }
    }
    v31 = v49;
    goto LABEL_52;
  }
  v35 = 0;
LABEL_61:
  v40 = *(_QWORD *)(v21 + 48);
  if ( v40 < v15 || *(_QWORD *)(v21 + 56) + v40 - 1 > v16 )
  {
LABEL_52:
    HalpBuddyAllocatorDeleteSubtree(a1, v31);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    if ( KiIrqlFlags )
    {
      v36 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v36 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
        v26 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
    __writecr8((unsigned __int8)v20);
    return (unsigned int)-1073741670;
  }
  if ( v35 )
  {
    v41 = v51;
    v42 = v35;
    do
    {
      HalpBuddyAllocatorBltAdd(*v41++, a1);
      --v42;
    }
    while ( v42 );
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
  if ( KiIrqlFlags )
  {
    v43 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v43 >= 2u )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
      v26 = (v46 & v45[5]) == 0;
      v45[5] &= v46;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
  __writecr8((unsigned __int8)v20);
  *(_QWORD *)(v21 + 40) = 0LL;
  *(_QWORD *)(v21 + 64) = a3;
  *(_BYTE *)(v21 + 72) = 1;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), a3);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), *(_QWORD *)(v21 + 56));
  *a6 = *(_QWORD *)(v21 + 48);
  return (unsigned int)v12;
}
