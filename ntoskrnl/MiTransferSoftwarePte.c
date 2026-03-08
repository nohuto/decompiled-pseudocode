/*
 * XREFs of MiTransferSoftwarePte @ 0x14032F630
 * Callers:
 *     MiFindFreePageFileSpace @ 0x140209F7C (MiFindFreePageFileSpace.c)
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDetermineModifiedPageListHead @ 0x14027E090 (MiDetermineModifiedPageListHead.c)
 *     MiOutSwapWorkingSetPte @ 0x1402CC600 (MiOutSwapWorkingSetPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1402DC734 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140392EB4 (MiMoveModifiedPagesToCompressList.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
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
