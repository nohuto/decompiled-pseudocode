/*
 * XREFs of MiReleasePageFileSpace @ 0x14021943C
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189D0 (MiDeleteClusterSection.c)
 *     MiDeleteSubsectionPages @ 0x140218F10 (MiDeleteSubsectionPages.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A4A0 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiActOnPte @ 0x140293FB4 (MiActOnPte.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiDeleteMergedPte @ 0x1402F408C (MiDeleteMergedPte.c)
 *     MiDeletePerSessionProtos @ 0x14033E9C4 (MiDeletePerSessionProtos.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140347C78 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeImageSection @ 0x140369DE8 (MiPurgeImageSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402951BC (MiReleasePageFileInfo.c)
 */

__int64 __fastcall MiReleasePageFileSpace(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  if ( (a2 & 4) != 0 )
  {
    v5 = MI_READ_PTE_LOCK_FREE(&v7);
    if ( !a3 )
      v5 &= ~2uLL;
  }
  else
  {
    if ( !a3 || (a2 & 2) == 0 )
      return 0LL;
    v5 = MI_READ_PTE_LOCK_FREE(&v7);
  }
  if ( !v5 )
    return 0LL;
  MiReleasePageFileInfo(a1, v5, 0LL);
  return 1LL;
}
