/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x1407B05D8
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140846130 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1408462FC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpFreezeHive @ 0x1408726EC (CmpFreezeHive.c)
 *     CmpCloneToUnbackedKcb @ 0x140A14164 (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1CC50 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140A20D38 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x140A273A0 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlockUnsafe(volatile signed __int64 *BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  return result;
}
