/*
 * XREFs of SdbGetStringTagPtr @ 0x140757878
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066DE54 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpSearchDB @ 0x140752714 (SdbpSearchDB.c)
 *     SdbpCheckMatchingFiles @ 0x140756E10 (SdbpCheckMatchingFiles.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407575F8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpMatchList @ 0x140757A2C (SdbpMatchList.c)
 *     SdbpCheckAllAttributes @ 0x140757C04 (SdbpCheckAllAttributes.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140758F00 (SdbpFindFirstIndexedWildCardTag.c)
 *     KsepDbReadKFlag @ 0x14080B194 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x14084B188 (SdbpFindMatchingName.c)
 *     KsepDbGetSdbString @ 0x140856690 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x140976F88 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4EFF8 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingDevice @ 0x140A4F5D0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140A4F6A0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A503B0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x140A50AB0 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A50ED8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51104 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140A516C0 (SdbpMatchDeviceString.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51BB0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51C90 (SdbpFindNextNamedTagHelper.c)
 *     SdbMergeIsEntryUpdated @ 0x140A5374C (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53B34 (SdbpMergeAreTagValuesEqual.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x140740E9C (SdbpGetMappedTagData.c)
 *     SdbpGetMappedStringFromTable @ 0x1407578F8 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140757948 (SdbpReadStringRef.c)
 *     SdbGetTagFromTagID @ 0x140758190 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int16 v6; // ax
  unsigned int StringRef; // eax

  v3 = 0LL;
  v4 = a2;
  if ( a1 )
  {
    v6 = SdbGetTagFromTagID(a1, a2, a3) & 0xF000;
    if ( v6 == (__int16)0x8000 )
      return SdbpGetMappedTagData(a1, v4);
    if ( v6 != 24576 )
      return v3;
    StringRef = SdbpReadStringRef(a1, v4);
    if ( StringRef )
      return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
