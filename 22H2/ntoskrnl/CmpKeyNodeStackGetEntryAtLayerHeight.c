/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407D2290
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140616604 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140616830 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14061733C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1407D2230 (CmpCleanupKeyNodeStack.c)
 *     CmSaveKey @ 0x140A0BA40 (CmSaveKey.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140A1BA14 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140A1FF4C (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpResetKeyNodeStack @ 0x140A201EC (CmpResetKeyNodeStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A20448 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x140A20628 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A21188 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140A23664 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140A23748 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140A237DC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A23964 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140A241D4 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A25438 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A25DB0 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A25E84 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140A262C8 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSubkeys @ 0x140A26450 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A269A0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A26B3C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140A26C60 (CmpPromoteSubtree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyNodeStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 72) + 32 * (a2 - 2LL);
  else
    return a1 + 32LL * a2 + 8;
}
