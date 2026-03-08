/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x1406B6158
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmpRundownUnitOfWork @ 0x1406B6040 (CmpRundownUnitOfWork.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140846130 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1408462FC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpFreezeHive @ 0x1408726EC (CmpFreezeHive.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1CC50 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x140A273A0 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
