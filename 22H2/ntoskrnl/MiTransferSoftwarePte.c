/*
 * XREFs of MiTransferSoftwarePte @ 0x1402856B0
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140215680 (MiOutSwapWorkingSetPte.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiFindFreePageFileSpace @ 0x1402945B4 (MiFindFreePageFileSpace.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDetermineModifiedPageListHead @ 0x1402D91F0 (MiDetermineModifiedPageListHead.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346714 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140347C78 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140394B34 (MiMoveModifiedPagesToCompressList.c)
 *     MiStoreWriteModifiedPages @ 0x14046D44A (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x14063A1B4 (MiGatherPagefilePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B760 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14028551C (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiTransferSoftwarePte(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r10
  unsigned __int64 result; // rax
  __int64 updated; // rax
  char v8; // r9
  __int16 v9; // r10

  v4 = -9LL;
  if ( (a1 & 0x400) != 0 )
    v4 = -2049LL;
  v5 = a1 & v4;
  result = v5;
  if ( (a1 & 0x400) == 0 && (a4 & 4) == 0 )
    result = v5 & 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( result )
      updated = MiUpdatePageFileHighInPte(result, a3);
    else
      updated = MiSwizzleInvalidPte((unsigned __int64)a3 << 32);
    result = (unsigned __int16)(updated ^ (v9 << 12)) & 0xF000 ^ (unsigned __int64)updated;
    if ( (v8 & 1) != 0 )
      result |= 4uLL;
    if ( (v8 & 2) != 0 )
      result |= 2uLL;
  }
  return result;
}
