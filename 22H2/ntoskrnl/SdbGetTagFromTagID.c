/*
 * XREFs of SdbGetTagFromTagID @ 0x140758190
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066DE54 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbReadBinaryTag @ 0x140695430 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x140755968 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x1407560F8 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14075617C (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x140757010 (InitOnceScanIndexes.c)
 *     SdbpGetIndex @ 0x140757728 (SdbpGetIndex.c)
 *     SdbGetStringTagPtr @ 0x140757878 (SdbGetStringTagPtr.c)
 *     SdbpReadStringRef @ 0x140757948 (SdbpReadStringRef.c)
 *     SdbpFindMatcher @ 0x140757B70 (SdbpFindMatcher.c)
 *     SdbGetFirstChild @ 0x140757E54 (SdbGetFirstChild.c)
 *     SdbFindFirstTag @ 0x140757EB4 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140757F28 (SdbGetNextChild.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1407581C4 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetFirstIndexedRecord @ 0x1407CBAE8 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadQWORDTag @ 0x14080B234 (SdbReadQWORDTag.c)
 *     SdbpGetNextIndexedRecord @ 0x14084B234 (SdbpGetNextIndexedRecord.c)
 *     SdbpCheckPackageAttributes @ 0x140A50910 (SdbpCheckPackageAttributes.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51BB0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51C90 (SdbpFindNextNamedTagHelper.c)
 *     SdbGetBinaryTagData @ 0x140A51E24 (SdbGetBinaryTagData.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x140A5227C (SdbpIsEntryIdAvailableInOtherDb.c)
 *     SdbMergeIsEntryUpdated @ 0x140A5374C (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53B34 (SdbpMergeAreTagValuesEqual.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, unsigned int a2)
{
  if ( a2 < 0xFFFFFFFE && *(_DWORD *)(a1 + 20) >= a2 + 2 )
    return *(unsigned __int16 *)(a2 + *(_QWORD *)(a1 + 8));
  AslLogCallPrintf(1LL);
  AslLogCallPrintf(1LL);
  return 0LL;
}
