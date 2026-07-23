/*
 * XREFs of VmpMergeMemoryRanges @ 0x1405A4280
 * Callers:
 *     VmMergeMemoryRanges @ 0x14092F0C0 (VmMergeMemoryRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x1405A489C (VmpProcessContextLockExclusive.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1405A5510 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFreeMemoryRanges @ 0x14092F6E8 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpMergeMemoryRanges(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  _RTL_BALANCED_NODE *v3; // rdi
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  bool v15; // zf
  _RTL_BALANCED_NODE *v17; // rcx
  _RTL_BALANCED_NODE *i; // rax
  unsigned __int64 j; // rdi
  __int64 v20; // rax
  __int64 v21; // r8
  _RTL_BALANCED_NODE *ParentValue; // rsi
  _QWORD *v23; // r15
  _QWORD *v24; // r14
  _RTL_BALANCED_NODE *v25; // r8
  _QWORD *v26; // rcx
  unsigned __int64 k; // rdx
  _RTL_BALANCED_NODE *v28; // rax
  __int64 v29; // [rsp+70h] [rbp+18h]

  v3 = 0LL;
  v29 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a3 )
  {
    v7 = -1073740007;
    goto LABEL_17;
  }
  v8 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v8 )
    v8 ^= (unsigned __int64)(SpinLock + 6);
  while ( 1 )
  {
    if ( !v8 )
    {
      v7 = -1073741172;
      goto LABEL_17;
    }
    v9 = *(_QWORD *)(v8 + 32);
    if ( a2 <= v9 )
      break;
    v10 = *(_QWORD *)(v8 + 8);
LABEL_11:
    if ( (SpinLock[8] & 1) != 0 && v10 )
      v8 ^= v10;
    else
      v8 = v10;
  }
  if ( a2 < *(_QWORD *)(v8 + 24) )
  {
    v10 = *(_QWORD *)v8;
    goto LABEL_11;
  }
  if ( v9 == a2 )
  {
    v3 = *(_RTL_BALANCED_NODE **)(v8 + 8);
    v17 = (_RTL_BALANCED_NODE *)v8;
    if ( v3 )
    {
      for ( i = v3->Children[0]; i; i = i->Children[0] )
        v3 = i;
    }
    else
    {
      for ( j = *(_QWORD *)(v8 + 16); ; j = v3->ParentValue )
      {
        v3 = (_RTL_BALANCED_NODE *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v3 || v3->Children[0] == v17 )
          break;
        v17 = v3;
      }
    }
    if ( v3 && v3[1].Children[0] == (_RTL_BALANCED_NODE *)(a2 + 1) )
    {
      VmpVaRangeNumberOfGpaRanges(v8);
      v20 = VmpVaRangeNumberOfGpaRanges(v3);
      if ( v21 == v20 )
      {
        ParentValue = (_RTL_BALANCED_NODE *)v3[1].ParentValue;
        v23 = (_QWORD *)(v8 + 40);
        v24 = *(_QWORD **)(v8 + 40);
        v25 = ParentValue;
        v26 = v24;
        for ( k = v24[7]; k + 1 >= k && (_RTL_BALANCED_NODE *)(k + 1) == v25[2].Children[0]; k = v26[7] )
        {
          v26 = (_QWORD *)*v26;
          v25 = v25->Children[0];
          if ( v26 == v23 )
          {
            do
            {
              RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 2), ParentValue + 1);
              ParentValue[1].ParentValue = -1LL;
              v24[7] = ParentValue[2].Children[1];
              v24 = (_QWORD *)*v24;
              ParentValue = ParentValue->Children[0];
            }
            while ( v24 != v23 );
            RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 6), v3);
            v28 = v3[1].Children[1];
            v3->ParentValue = -1LL;
            *(_QWORD *)(v8 + 32) = v28;
            ++*((_QWORD *)SpinLock + 5);
            v7 = 0;
            goto LABEL_17;
          }
        }
      }
      v7 = -1073741182;
    }
    else
    {
      v7 = -1073741503;
    }
    v3 = 0LL;
  }
  else
  {
    v7 = -1073741503;
  }
LABEL_17:
  if ( v29 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v29 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v29);
  }
  if ( v3 )
    VmpFreeMemoryRanges(v3);
  return v7;
}
