/*
 * XREFs of MiReleasePageFileSpace @ 0x14034BE0C
 * Callers:
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 *     MiDeleteMergedPte @ 0x14029CAD8 (MiDeleteMergedPte.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiDeletePerSessionProtos @ 0x1402CF6DC (MiDeletePerSessionProtos.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeImageSection @ 0x1402FECC8 (MiPurgeImageSection.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiDeleteSubsectionPages @ 0x14034B8E0 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReleasePageFileSpace(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  if ( (a2 & 4) != 0 )
  {
    v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7);
    if ( !a3 )
      v5 &= ~2uLL;
  }
  else
  {
    if ( !a3 || (a2 & 2) == 0 )
      return 0LL;
    v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7);
  }
  if ( !v5 )
    return 0LL;
  MiReleasePageFileInfo(a1, v5, 0);
  return 1LL;
}
