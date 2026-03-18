/*
 * XREFs of SdbFindFirstTag @ 0x140792CCC
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14075B48C (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14075BB10 (SdbpSearchDB.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075C380 (KsepDbGetDriverShimsInternal.c)
 *     InitOnceScanIndexes @ 0x140791640 (InitOnceScanIndexes.c)
 *     SdbGetDatabaseEdition @ 0x1407ECF00 (SdbGetDatabaseEdition.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1407ED16C (SdbpValidateAndApplyCompatFlags.c)
 *     SdbGetDatabaseID @ 0x1407ED1D8 (SdbGetDatabaseID.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1407ED53C (KsepDbCacheReadDeviceInternal.c)
 *     SdbQueryDataExTagID @ 0x1408411FC (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x140841428 (SdbFindFirstNamedTag.c)
 *     SdbpCheckMatchingFiles @ 0x1408414E0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckAllAttributes @ 0x140841610 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140842864 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x140842978 (SdbpFindMatchingName.c)
 *     SdbReadEntryInformation @ 0x140842F74 (SdbReadEntryInformation.c)
 *     SdbpMatchCpu @ 0x14084328C (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x1408432E0 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x140843334 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140843388 (SdbpMatchAcpi.c)
 *     SdbpCheckForMatch @ 0x1408433DC (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x1408434E0 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x1408436C0 (SdbpMatchOsVersion.c)
 *     SdbpGetExeEntryFlags @ 0x1408437A4 (SdbpGetExeEntryFlags.c)
 *     InitOnceGetStringTableOffset @ 0x140861690 (InitOnceGetStringTableOffset.c)
 *     KsepDbGetShimInfo @ 0x1409638AC (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x140963CD0 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x140A10C20 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140A10CF0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A11A00 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140A11F60 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckSdbCapability @ 0x140A122E0 (SdbpCheckSdbCapability.c)
 *     SdbpGetDeviceDWORD @ 0x140A12454 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A124A4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A126D0 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140A12C84 (SdbpMatchDeviceString.c)
 *     SdbpMatchOne @ 0x140A12D00 (SdbpMatchOne.c)
 *     SdbpFindNextNamedTag @ 0x140A1311C (SdbpFindNextNamedTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140A146FC (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbGetFirstChild @ 0x140791910 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x140792D40 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x14079499C (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebp
  unsigned int i; // eax
  unsigned int v8; // ebx

  v3 = 0;
  v5 = a2;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, v5, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
      return v8;
  }
  return v3;
}
