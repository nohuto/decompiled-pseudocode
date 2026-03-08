/*
 * XREFs of PnpQueuePendingSurpriseRemoval @ 0x14087E79C
 * Callers:
 *     PiEventRemovalPostSurpriseRemove @ 0x14087E710 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     IopIsDescendantNode @ 0x140861DAC (IopIsDescendantNode.c)
 *     IopEnumerateRelations @ 0x140863508 (IopEnumerateRelations.c)
 *     IopFreeRelationList @ 0x140863634 (IopFreeRelationList.c)
 *     IopAllocateRelationList @ 0x140863684 (IopAllocateRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x1408637CC (PnpAllocateCriticalMemory.c)
 *     IopCheckIfMergeRequired @ 0x1409699BC (IopCheckIfMergeRequired.c)
 *     IopMergeRelationLists @ 0x140969AC4 (IopMergeRelationLists.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall PnpQueuePendingSurpriseRemoval(PVOID a1, unsigned int ***a2, int a3, int a4)
{
  unsigned int **v4; // rbp
  __int64 CriticalMemory; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int **v10; // rsi
  PVOID *v11; // r14
  __int64 *v12; // rax
  char v13; // r9
  __int64 v14; // r11
  __int64 v15; // r11
  PVOID *v17; // rdi
  __int64 v18; // r8
  __int64 RelationList; // rax
  PVOID *v20; // rcx
  PVOID **v21; // rax
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF

  v4 = *a2;
  v23 = 0LL;
  v22 = 0LL;
  CriticalMemory = 0LL;
  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v10 = v4;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  PnpAcquireDependencyRelationsLock(1);
  v11 = (PVOID *)IopPendingSurpriseRemovals;
  while ( v11 != &IopPendingSurpriseRemovals )
  {
    v17 = v11;
    v11 = (PVOID *)*v11;
    if ( v17[7] == a1 )
    {
      CriticalMemory = (__int64)v17;
      v10 = (unsigned int **)v17[8];
      break;
    }
    if ( (unsigned __int8)IopCheckIfMergeRequired(v17[8], v10) )
    {
      if ( v10 == v4 )
      {
        CriticalMemory = (__int64)v17;
        RelationList = IopAllocateRelationList(3LL);
        v10 = (unsigned int **)RelationList;
        if ( !RelationList )
        {
          v10 = v4;
          break;
        }
        IopMergeRelationLists(RelationList, v4, 0LL);
      }
      LOBYTE(v18) = 1;
      IopMergeRelationLists(v10, v17[8], v18);
      IopFreeRelationList(v17[8]);
      if ( (PVOID *)CriticalMemory == v17 )
      {
        *(_QWORD *)(CriticalMemory + 64) = 0LL;
      }
      else
      {
        v20 = (PVOID *)*v17;
        if ( *((PVOID **)*v17 + 1) != v17 )
          goto LABEL_28;
        v21 = (PVOID **)v17[1];
        if ( *v21 != v17 )
          goto LABEL_28;
        *v21 = v20;
        v20[1] = v21;
        ExFreePoolWithTag(v17, 0);
      }
    }
  }
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  if ( v4 == v10 )
  {
    CriticalMemory = PnpAllocateCriticalMemory(3, 64LL, 112LL, 0x54706E50u);
    v12 = (__int64 *)qword_140C5C6E8;
    if ( *(PVOID **)qword_140C5C6E8 != &IopPendingSurpriseRemovals )
LABEL_28:
      __fastfail(3u);
    *(_QWORD *)CriticalMemory = &IopPendingSurpriseRemovals;
    *(_QWORD *)(CriticalMemory + 8) = v12;
    *v12 = CriticalMemory;
    qword_140C5C6E8 = CriticalMemory;
  }
  else
  {
    IopFreeRelationList(v4);
  }
  while ( IopEnumerateRelations(v10, (int *)&v22, &v23, 0LL, 0LL) )
  {
    if ( v23 )
      v14 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
    else
      v14 = 0LL;
    if ( (*(_BYTE *)(v14 + 648) & 1) != 0 )
    {
      if ( (unsigned __int8)IopIsDescendantNode(v10, v23) )
      {
        *(_QWORD *)(v15 + 648) &= ~1uLL;
        --*(_DWORD *)(*(_QWORD *)(v15 + 648) + 656LL);
      }
    }
  }
  *(_QWORD *)(CriticalMemory + 56) = a1;
  *(_DWORD *)(CriticalMemory + 84) = a3;
  *(_BYTE *)(CriticalMemory + 88) = v13;
  *(_QWORD *)(CriticalMemory + 64) = v10;
  *(_DWORD *)(CriticalMemory + 108) = a4;
  *(_BYTE *)(CriticalMemory + 104) = v13;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
