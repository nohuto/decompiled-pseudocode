/*
 * XREFs of MiGetUsedPtesHandle @ 0x140346CA0
 * Callers:
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiCompleteRestrictedImageFault @ 0x14028D690 (MiCompleteRestrictedImageFault.c)
 *     MiUpdatePageTableUseCount @ 0x14029EC20 (MiUpdatePageTableUseCount.c)
 *     MiInsertPhysicalPteMapping @ 0x14029F690 (MiInsertPhysicalPteMapping.c)
 *     MiReducePteUseCount @ 0x1402D0E3C (MiReducePteUseCount.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiReservePageFileSpaceForPage @ 0x14032ECD0 (MiReservePageFileSpaceForPage.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x140346460 (MiEvictPageTableLock.c)
 *     MiIsPageTableDeletable @ 0x140346AB4 (MiIsPageTableDeletable.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14062EF5C (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x14063FEB8 (MiCommitHotPatchTable.c)
 *     MiUpdateAwePageTable @ 0x140649AB0 (MiUpdateAwePageTable.c)
 *     MiDeleteLargeUserPde @ 0x14064DD80 (MiDeleteLargeUserPde.c)
 *     MiInsertLargeUserMapping @ 0x140666510 (MiInsertLargeUserMapping.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetUsedPtesHandle(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL
    && v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v5 = v2 | 0x20;
      v6 = *((_QWORD *)&Flink->Flink + ((v1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( (v6 & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  v7 = v2;
  return 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFFLL)
       - 0x220000000000LL;
}
