/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x1407AF600
 * Callers:
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140613E8C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140613F14 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 *     CmRmIsKcbStackVisible @ 0x14067D55C (CmRmIsKcbStackVisible.c)
 *     CmpIsKeyStackDeleted @ 0x1406B5978 (CmpIsKeyStackDeleted.c)
 *     CmpLockKcbStackExclusive @ 0x1406B7DF8 (CmpLockKcbStackExclusive.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406BA388 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpIsKeyStackSymlink @ 0x1407A9830 (CmpIsKeyStackSymlink.c)
 *     CmpReportNotifyForKcbStack @ 0x1407AEF5C (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x1407AF050 (CmpReportNotifyHelper.c)
 *     CmpLockKcbStackShared @ 0x1407AF490 (CmpLockKcbStackShared.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1407AF4E0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpConstructNameFromKeyNodes @ 0x1407B0C90 (CmpConstructNameFromKeyNodes.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmpDoWritethroughReparse @ 0x1407B6860 (CmpDoWritethroughReparse.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A10EC4 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A11200 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140A1D1EC (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A1D6E8 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140A20D38 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140A21738 (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A23050 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140A236F0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140A238FC (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A23C40 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A23DDC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
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
