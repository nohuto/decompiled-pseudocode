/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x14074BF00
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x1402C0814 (CmpTransEnlistUowInKcb.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x14074B840 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpCreateLayerLink @ 0x14074BAE4 (CmpCreateLayerLink.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074BC50 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407ACFB0 (CmpFindSubKeyByNumberEx.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A13D78 (CmpResolveHiveLoadConflict.c)
 *     CmpGetVirtualStoreRoot @ 0x140A16FE4 (CmpGetVirtualStoreRoot.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x140A1D350 (CmpPrepareDiscardReplacePost.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A266F0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpRemoveFromDelayedClose @ 0x14074BFBC (CmpRemoveFromDelayedClose.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  if ( !_InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2) )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 64) & 2) != 0 )
    return CmpRemoveFromDelayedClose(BugCheckParameter2);
  return result;
}
