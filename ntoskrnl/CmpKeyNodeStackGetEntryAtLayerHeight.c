/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140614148 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140614374 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140614E8C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140783738 (CmpCleanupKeyNodeStack.c)
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140A18CC4 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140A1D1EC (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpResetKeyNodeStack @ 0x140A1D48C (CmpResetKeyNodeStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A1D6E8 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x140A1D8C8 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A1E428 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140A20904 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140A209E8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140A20A7C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A20C04 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140A21474 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A226D8 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A23050 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140A23568 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSubkeys @ 0x140A236F0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A23C40 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A23DDC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140A23F00 (CmpPromoteSubtree.c)
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
