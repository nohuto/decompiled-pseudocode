/*
 * XREFs of SdbGetTagFromTagID @ 0x1407A2A70
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066B804 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbReadBinaryTag @ 0x14079D160 (SdbReadBinaryTag.c)
 *     SdbpGetFirstIndexedRecord @ 0x14079F5A8 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x14079FC18 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x1407A0218 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x1407A029C (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x1407A16B0 (InitOnceScanIndexes.c)
 *     SdbpGetIndex @ 0x1407A1F98 (SdbpGetIndex.c)
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbpFindMatcher @ 0x1407A2454 (SdbpFindMatcher.c)
 *     SdbGetFirstChild @ 0x1407A2738 (SdbGetFirstChild.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x1407A280C (SdbGetNextChild.c)
 *     SdbpReadStringRef @ 0x1407A2AA4 (SdbpReadStringRef.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1407A2B08 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbReadQWORDTag @ 0x140800D70 (SdbReadQWORDTag.c)
 *     SdbpGetNextIndexedRecord @ 0x140848BC4 (SdbpGetNextIndexedRecord.c)
 *     SdbpCheckPackageAttributes @ 0x140A4DC40 (SdbpCheckPackageAttributes.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A4EEE0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A4EFC0 (SdbpFindNextNamedTagHelper.c)
 *     SdbGetBinaryTagData @ 0x140A4F154 (SdbGetBinaryTagData.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x140A4F5AC (SdbpIsEntryIdAvailableInOtherDb.c)
 *     SdbMergeIsEntryUpdated @ 0x140A50A7C (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A50E64 (SdbpMergeAreTagValuesEqual.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, unsigned int a2)
{
  if ( a2 < 0xFFFFFFFE && *(_DWORD *)(a1 + 20) >= a2 + 2 )
    return *(unsigned __int16 *)(a2 + *(_QWORD *)(a1 + 8));
  AslLogCallPrintf(1LL);
  AslLogCallPrintf(1LL);
  return 0LL;
}
