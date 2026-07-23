/*
 * XREFs of VmpSplitMemoryRange @ 0x1405A5084
 * Callers:
 *     VmSplitMemoryRange @ 0x14092F240 (VmSplitMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x1405A489C (VmpProcessContextLockExclusive.c)
 *     VmpProcessContextLockShared @ 0x1405A4914 (VmpProcessContextLockShared.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1405A5510 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpAllocateMemoryRanges @ 0x14092F59C (VmpAllocateMemoryRanges.c)
 *     VmpFreeMemoryRanges @ 0x14092F6E8 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpSplitMemoryRange(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  int v6; // r14d
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  _RTL_BALANCED_NODE *MemoryRanges; // r14
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  _RTL_RB_TREE *v25; // rcx
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rdx
  BOOLEAN v29; // r8
  _RTL_BALANCED_NODE *v30; // r8
  unsigned __int64 v31; // rax
  _RTL_BALANCED_NODE *ParentValue; // r14
  _QWORD *v33; // rbp
  _QWORD *v34; // r15
  _RTL_BALANCED_NODE **v35; // rbx
  _RTL_BALANCED_NODE *v36; // rcx
  unsigned __int64 v37; // rdx
  BOOLEAN v38; // r8
  _RTL_BALANCED_NODE *v39; // r8
  unsigned __int64 v40; // rax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // edx

  while ( 2 )
  {
    v6 = 1;
    v7 = VmpProcessContextLockShared(SpinLock);
    if ( *((_QWORD *)SpinLock + 9) != a3 )
    {
      v11 = -1073740007;
      goto LABEL_77;
    }
    v8 = *((_QWORD *)SpinLock + 3);
    if ( (SpinLock[8] & 1) != 0 && v8 )
      v8 ^= (unsigned __int64)(SpinLock + 6);
    while ( 1 )
    {
      if ( !v8 )
      {
        v11 = -1073741172;
        goto LABEL_77;
      }
      v9 = *(_QWORD *)(v8 + 32);
      if ( a2 <= v9 )
        break;
      v10 = *(_QWORD *)(v8 + 8);
LABEL_10:
      if ( (SpinLock[8] & 1) != 0 && v10 )
        v8 ^= v10;
      else
        v8 = v10;
    }
    if ( a2 < *(_QWORD *)(v8 + 24) )
    {
      v10 = *(_QWORD *)v8;
      goto LABEL_10;
    }
    if ( a2 == v9 )
    {
      v11 = -1073741503;
      goto LABEL_77;
    }
    v12 = VmpVaRangeNumberOfGpaRanges(v8);
    v13 = *((_QWORD *)SpinLock + 5);
    v14 = v12;
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v7);
    MemoryRanges = (_RTL_BALANCED_NODE *)VmpAllocateMemoryRanges(v14);
    if ( !MemoryRanges )
      return (unsigned int)-1073741670;
    v7 = VmpProcessContextLockExclusive(SpinLock);
    if ( v13 != *((_QWORD *)SpinLock + 5) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v19 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick((__int64)v22);
          }
        }
      }
      __writecr8((unsigned __int8)v7);
      VmpFreeMemoryRanges(MemoryRanges);
      continue;
    }
    break;
  }
  v25 = (_RTL_RB_TREE *)(SpinLock + 6);
  v26 = a2 - *(_QWORD *)(v8 + 24);
  MemoryRanges[1].Children[1] = *(_RTL_BALANCED_NODE **)(v8 + 32);
  v27 = v26 + 1;
  MemoryRanges[1].Children[0] = (_RTL_BALANCED_NODE *)(a2 + 1);
  *(_QWORD *)(v8 + 32) = a2;
  v28 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v28 )
    v28 ^= (unsigned __int64)v25;
  v29 = 0;
  if ( !v28 )
    goto LABEL_52;
  v30 = MemoryRanges[1].Children[0];
  while ( 2 )
  {
    if ( (unsigned __int64)v30 <= *(_QWORD *)(v28 + 32) && (unsigned __int64)v30 < *(_QWORD *)(v28 + 24) )
    {
      v31 = *(_QWORD *)v28;
      if ( (SpinLock[8] & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_45;
        v31 ^= v28;
      }
      if ( !v31 )
      {
LABEL_45:
        v29 = 0;
        goto LABEL_52;
      }
LABEL_50:
      v28 = v31;
      continue;
    }
    break;
  }
  v31 = *(_QWORD *)(v28 + 8);
  if ( (SpinLock[8] & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_51;
    v31 ^= v28;
  }
  if ( v31 )
    goto LABEL_50;
LABEL_51:
  v29 = 1;
LABEL_52:
  RtlRbInsertNodeEx(v25, (PRTL_BALANCED_NODE)v28, v29, MemoryRanges);
  ParentValue = (_RTL_BALANCED_NODE *)MemoryRanges[1].ParentValue;
  v33 = (_QWORD *)(v8 + 40);
  v34 = *(_QWORD **)(v8 + 40);
  v35 = (_RTL_BALANCED_NODE **)(SpinLock + 2);
  while ( 1 )
  {
    v36 = (_RTL_BALANCED_NODE *)(v27 + v34[6]);
    ParentValue[2].Children[0] = v36;
    ParentValue[2].Children[1] = (_RTL_BALANCED_NODE *)v34[7];
    v34[7] = (char *)v36 - 1;
    v37 = (unsigned __int64)*v35;
    if ( (SpinLock[4] & 1) != 0 && v37 )
      v37 ^= (unsigned __int64)v35;
    v38 = 0;
    if ( v37 )
    {
      v39 = ParentValue[2].Children[0];
      while ( 1 )
      {
        if ( (unsigned __int64)v39 > *(_QWORD *)(v37 + 32) || (unsigned __int64)v39 >= *(_QWORD *)(v37 + 24) )
        {
          v40 = *(_QWORD *)(v37 + 8);
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v40 )
              goto LABEL_70;
            v40 ^= v37;
          }
          if ( !v40 )
          {
LABEL_70:
            v38 = 1;
            break;
          }
        }
        else
        {
          v40 = *(_QWORD *)v37;
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v40 )
              goto LABEL_64;
            v40 ^= v37;
          }
          if ( !v40 )
          {
LABEL_64:
            v38 = 0;
            break;
          }
        }
        v37 = v40;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v37, v38, ParentValue + 1);
    v34 = (_QWORD *)*v34;
    if ( v34 == v33 )
      break;
    ParentValue = ParentValue->Children[0];
  }
  ++*((_QWORD *)SpinLock + 5);
  v6 = 0;
  v11 = 0;
LABEL_77:
  if ( v7 != -1 )
  {
    if ( v6 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v41 = KeGetCurrentIrql();
          if ( v41 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v41 >= 2u )
          {
            v42 = KeGetCurrentPrcb();
            v43 = v42->SchedulerAssist;
            v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v19 = (v44 & v43[5]) == 0;
            v43[5] &= v44;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick((__int64)v42);
          }
        }
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v45 = KeGetCurrentIrql();
          if ( v45 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v45 >= 2u )
          {
            v46 = KeGetCurrentPrcb();
            v47 = v46->SchedulerAssist;
            v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v19 = (v48 & v47[5]) == 0;
            v47[5] &= v48;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick((__int64)v46);
          }
        }
      }
    }
    __writecr8((unsigned __int8)v7);
  }
  return v11;
}
