/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x1406D5850
 * Callers:
 *     CmQueryLayeredKey @ 0x14035D634 (CmQueryLayeredKey.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14061633C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1406163C4 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x140616EBC (CmpCreateTombstone.c)
 *     CmRmIsKcbStackVisible @ 0x140680480 (CmRmIsKcbStackVisible.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x140693570 (CmpDoWritethroughReparse.c)
 *     CmpCreateChild @ 0x1406D1020 (CmpCreateChild.c)
 *     CmpIsKeyStackSymlink @ 0x1406D32B0 (CmpIsKeyStackSymlink.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3F5C (CmpIsKeyStackDeleted.c)
 *     CmpReportNotifyForKcbStack @ 0x1406D5460 (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x1406D54F0 (CmpReportNotifyHelper.c)
 *     CmpLockKcbStackShared @ 0x1406D56E8 (CmpLockKcbStackShared.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D5730 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406DD670 (CmpConstructNameFromKeyNodes.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FBF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x140710868 (CmpLockKcbStackExclusive.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13C14 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A13F50 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A164C4 (CmpEnumerateLayeredKey.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140A1FF4C (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A20448 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140A23A98 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140A24498 (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A25DB0 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140A26450 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140A2665C (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A269A0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A26B3C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetKcbAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2 - 16);
  else
    return *(_QWORD *)(a1 + 8LL * a2 + 8);
}
