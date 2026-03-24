/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x14066D0B0
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x1402FBC44 (CmpTransEnlistUowInKcb.c)
 *     CmpCreateLayerLink @ 0x1405D8378 (CmpCreateLayerLink.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405F35A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x14066C550 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140734DF4 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140765B90 (CmpFindSubkeyInHashByChildCell.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E774 (CmpResolveHiveLoadConflict.c)
 *     CmpGetVirtualStoreRoot @ 0x14087095C (CmpGetVirtualStoreRoot.c)
 *     CmpPrepareDiscardReplacePost @ 0x1408764F0 (CmpPrepareDiscardReplacePost.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F814 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     CmpRemoveFromDelayedClose @ 0x14066D410 (CmpRemoveFromDelayedClose.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  if ( !_InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2) )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 64) & 2) != 0 )
    return CmpRemoveFromDelayedClose();
  return result;
}
