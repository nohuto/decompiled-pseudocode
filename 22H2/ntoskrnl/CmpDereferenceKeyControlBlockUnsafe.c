/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x14071CD1C
 * Callers:
 *     CmpLoadKeyCommon @ 0x14036102C (CmpLoadKeyCommon.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140649B30 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyBody @ 0x140649DB0 (CmpCreateKeyBody.c)
 *     CmpFreezeHive @ 0x14066C5D0 (CmpFreezeHive.c)
 *     CmpRundownUnitOfWork @ 0x14071CBAC (CmpRundownUnitOfWork.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407C3ABC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407C3B18 (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140876070 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x14087FE50 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
