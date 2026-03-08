/*
 * XREFs of SdbFindFirstTag @ 0x1407A2798
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066B804 (SdbpCheckApplicationTypeAttributes.c)
 *     InitOnceGetStringTableOffset @ 0x140798120 (InitOnceGetStringTableOffset.c)
 *     SdbGetDatabaseEdition @ 0x14079CA70 (SdbGetDatabaseEdition.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x14079D0F4 (SdbpValidateAndApplyCompatFlags.c)
 *     KsepDbGetDriverShimsInternal @ 0x14079EF10 (KsepDbGetDriverShimsInternal.c)
 *     SdbGetDatabaseID @ 0x14079F0D0 (SdbGetDatabaseID.c)
 *     SdbpSearchDB @ 0x14079F878 (SdbpSearchDB.c)
 *     SdbpCheckMatchingFiles @ 0x1407A0E80 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckForMatch @ 0x1407A1468 (SdbpCheckForMatch.c)
 *     InitOnceScanIndexes @ 0x1407A16B0 (InitOnceScanIndexes.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407A1870 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407A1E68 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpMatchOsVersion @ 0x1407A2004 (SdbpMatchOsVersion.c)
 *     SdbpMatchList @ 0x1407A2310 (SdbpMatchList.c)
 *     SdbpCheckAllAttributes @ 0x1407A24E8 (SdbpCheckAllAttributes.c)
 *     SdbGetKShimTagRef @ 0x14080030C (SdbGetKShimTagRef.c)
 *     KsepDbGetShimInfo @ 0x140800448 (KsepDbGetShimInfo.c)
 *     KsepDbReadKFlag @ 0x140800CD0 (KsepDbReadKFlag.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1408012E8 (KsepDbCacheReadDeviceInternal.c)
 *     SdbpFindMatchingName @ 0x140848B18 (SdbpFindMatchingName.c)
 *     SdbpGetExeEntryFlags @ 0x14084BD1C (SdbpGetExeEntryFlags.c)
 *     SdbpMatchOem @ 0x14085F35C (SdbpMatchOem.c)
 *     SdbpMatchCpu @ 0x14085F3B0 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x14085F404 (SdbpMatchBios.c)
 *     SdbpMatchAcpi @ 0x14085F458 (SdbpMatchAcpi.c)
 *     KsepDbReadKData @ 0x140973EE8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4C328 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x140A4C714 (SdbReadEntryInformation.c)
 *     SdbpCheckMatchingDevice @ 0x140A4C900 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140A4C9D0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A4D6E0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x140A4DDE0 (SdbpCheckSdbCapability.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x140A4DE80 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x140A4DF28 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x140A4DFD4 (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x140A4E050 (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbpGetDeviceDWORD @ 0x140A4E1B8 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A4E208 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A4E434 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140A4E9F0 (SdbpMatchDeviceString.c)
 *     SdbpMatchOne @ 0x140A4EA60 (SdbpMatchOne.c)
 *     SdbFindParentTagFromAncestors @ 0x140A4EE80 (SdbFindParentTagFromAncestors.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A4EEE0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A4EFC0 (SdbpFindNextNamedTagHelper.c)
 *     __SdbpFindTagFromAncestors @ 0x140A4F0E8 (__SdbpFindTagFromAncestors.c)
 *     SdbMergeIsEntryUpdated @ 0x140A50A7C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     SdbGetFirstChild @ 0x1407A2738 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x1407A280C (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int16 v4; // r14
  unsigned int v5; // ebp
  unsigned int i; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx

  v3 = 0;
  v4 = a3;
  v5 = a2;
  for ( i = SdbGetFirstChild(a1, a2, a3); ; i = SdbGetNextChild(a1, v5, v9) )
  {
    v9 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i, v8) == v4 )
      return v9;
  }
  return v3;
}
