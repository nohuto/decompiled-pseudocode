/*
 * XREFs of PnpQueuePendingSurpriseRemoval @ 0x14074A960
 * Callers:
 *     PiEventRemovalPostSurpriseRemove @ 0x14074CD2C (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     PpDevNodeUnlockTree @ 0x1406B29A0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406B29FC (PnpAcquireDependencyRelationsLock.c)
 *     IopAllocateRelationList @ 0x14074A604 (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x14074A6C8 (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x14074A7F4 (PnpAllocateCriticalMemory.c)
 *     IopEnumerateRelations @ 0x14074B374 (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x14074B508 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x1408B2654 (IopCheckIfMergeRequired.c)
 *     IopMergeRelationLists @ 0x1408B2778 (IopMergeRelationLists.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PnpQueuePendingSurpriseRemoval(PVOID a1, _QWORD **a2, int a3, int a4)
{
  PVOID *CriticalMemory; // rbx
  _QWORD *v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v10; // rsi
  PVOID *v11; // r14
  PVOID **v12; // rax
  char v13; // r9
  __int64 v14; // r11
  __int64 v15; // r11
  PVOID *v17; // rdi
  __int64 v18; // r8
  _BYTE *RelationList; // rax
  PVOID *v20; // rax
  PVOID **v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF

  v23 = 0LL;
  CriticalMemory = 0LL;
  v22 = 0LL;
  v6 = *a2;
  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v10 = v6;
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
      CriticalMemory = v17;
      v10 = v17[8];
      break;
    }
    if ( (unsigned __int8)IopCheckIfMergeRequired(v17[8], v10) )
    {
      if ( v10 == v6 )
      {
        CriticalMemory = v17;
        RelationList = IopAllocateRelationList(3LL);
        v10 = RelationList;
        if ( !RelationList )
        {
          v10 = v6;
          break;
        }
        IopMergeRelationLists(RelationList, v6, 0LL);
      }
      LOBYTE(v18) = 1;
      IopMergeRelationLists(v10, v17[8], v18);
      IopFreeRelationList(v17[8]);
      if ( CriticalMemory == v17 )
      {
        CriticalMemory[8] = 0LL;
      }
      else
      {
        v20 = (PVOID *)*v17;
        if ( *((PVOID **)*v17 + 1) != v17 )
          goto LABEL_27;
        v21 = (PVOID **)v17[1];
        if ( *v21 != v17 )
          goto LABEL_27;
        *v21 = v20;
        v20[1] = v21;
        ExFreePoolWithTag(v17, 0);
      }
    }
  }
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  if ( v6 == v10 )
  {
    CriticalMemory = (PVOID *)PnpAllocateCriticalMemory(3, NonPagedPoolNx, 0x70uLL, 0x54706E50u);
    v12 = (PVOID **)qword_140C44BE8;
    if ( *(PVOID **)qword_140C44BE8 != &IopPendingSurpriseRemovals )
LABEL_27:
      __fastfail(3u);
    *CriticalMemory = &IopPendingSurpriseRemovals;
    CriticalMemory[1] = v12;
    *v12 = CriticalMemory;
    qword_140C44BE8 = (__int64)CriticalMemory;
  }
  else
  {
    IopFreeRelationList(v6);
  }
  while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v10, (unsigned int)&v22, (unsigned int)&v23, 0, 0LL) )
  {
    if ( v23 )
      v14 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
    else
      v14 = 0LL;
    if ( (*(_BYTE *)(v14 + 648) & 1) != 0 )
    {
      if ( (unsigned __int8)IopIsDescendantNode(v10) )
      {
        *(_QWORD *)(v15 + 648) &= ~1uLL;
        --*(_DWORD *)(*(_QWORD *)(v15 + 648) + 656LL);
      }
    }
  }
  CriticalMemory[7] = a1;
  *((_DWORD *)CriticalMemory + 21) = a3;
  *((_BYTE *)CriticalMemory + 88) = v13;
  CriticalMemory[8] = v10;
  *((_DWORD *)CriticalMemory + 27) = a4;
  *((_BYTE *)CriticalMemory + 104) = v13;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
