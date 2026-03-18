/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x1406D9378
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F659C (CmpLoadKeyCommon.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8840 (CmpCreateKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769424 (CmpTransMgrFreeVolatileData.c)
 *     CmLoadAppKey @ 0x140769B50 (CmLoadAppKey.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140849290 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14084945C (CmpCreateGlobalKeyLockEntry.c)
 *     CmpFreezeHive @ 0x1408755AC (CmpFreezeHive.c)
 *     CmpCloneToUnbackedKcb @ 0x140A16EB4 (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1F9B0 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140A23A98 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x140A2A100 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
