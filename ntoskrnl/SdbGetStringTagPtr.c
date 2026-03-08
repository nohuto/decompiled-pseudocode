/*
 * XREFs of SdbGetStringTagPtr @ 0x1407A20E8
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066B804 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpSearchDB @ 0x14079F878 (SdbpSearchDB.c)
 *     SdbpCheckMatchingFiles @ 0x1407A0E80 (SdbpCheckMatchingFiles.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407A1870 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407A1E68 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpMatchList @ 0x1407A2310 (SdbpMatchList.c)
 *     SdbpCheckAllAttributes @ 0x1407A24E8 (SdbpCheckAllAttributes.c)
 *     KsepDbGetSdbString @ 0x140800688 (KsepDbGetSdbString.c)
 *     KsepDbReadKFlag @ 0x140800CD0 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x140848B18 (SdbpFindMatchingName.c)
 *     KsepDbReadKData @ 0x140973EE8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4C328 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingDevice @ 0x140A4C900 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140A4C9D0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A4D6E0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x140A4DDE0 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A4E208 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A4E434 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140A4E9F0 (SdbpMatchDeviceString.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A4EEE0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A4EFC0 (SdbpFindNextNamedTagHelper.c)
 *     SdbMergeIsEntryUpdated @ 0x140A50A7C (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A50E64 (SdbpMergeAreTagValuesEqual.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpGetMappedStringFromTable @ 0x1407A2168 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetMappedTagData @ 0x1407A2238 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 *     SdbpReadStringRef @ 0x1407A2AA4 (SdbpReadStringRef.c)
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
