/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x140769400
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F659C (CmpLoadKeyCommon.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8840 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x14072F7D0 (CmpCreateKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x1407692E8 (CmpRundownUnitOfWork.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140849290 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14084945C (CmpCreateGlobalKeyLockEntry.c)
 *     CmpFreezeHive @ 0x1408755AC (CmpFreezeHive.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1F9B0 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x140A2A100 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
