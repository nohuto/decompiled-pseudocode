/*
 * XREFs of SdbFindFirstTag @ 0x140759974
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F8D90 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckSdbCapability @ 0x1405D1DB0 (SdbpCheckSdbCapability.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140752DDC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x140753CB0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckForMatch @ 0x140753F94 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x140754098 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x140754308 (SdbpMatchOsVersion.c)
 *     KsepDbCacheReadDeviceInternal @ 0x140755564 (KsepDbCacheReadDeviceInternal.c)
 *     SdbGetDatabaseEdition @ 0x140755CA0 (SdbGetDatabaseEdition.c)
 *     SdbGetDatabaseID @ 0x140757C50 (SdbGetDatabaseID.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075867C (KsepDbGetDriverShimsInternal.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140758F78 (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceScanIndexes @ 0x1407597B0 (InitOnceScanIndexes.c)
 *     InitOnceGetStringTableOffset @ 0x140773970 (InitOnceGetStringTableOffset.c)
 *     SdbpSearchDB @ 0x14077E6B4 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x1407B243C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407B3DC0 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407C1520 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407C1F28 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407C214C (SdbFindFirstNamedTag.c)
 *     SdbReadEntryInformation @ 0x1407C21FC (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407C2320 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchAcpi @ 0x1407D3038 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407D308C (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407D30E0 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407D3134 (SdbpMatchCpu.c)
 *     KsepDbGetShimInfo @ 0x1408BF86C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408BFCA0 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x1409642F0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x1409643C0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409650D0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140965630 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x1409659A8 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409659F8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965C24 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140965FD4 (SdbpMatchDeviceString.c)
 *     SdbpMatchOne @ 0x140966050 (SdbpMatchOne.c)
 *     SdbpFindNextNamedTag @ 0x140966120 (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetNextChild @ 0x1407599E8 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x140759C60 (SdbGetFirstChild.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebp
  unsigned int i; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx

  v3 = 0;
  v5 = a2;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, v5, v10) )
  {
    v10 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i, v8, v9) == a3 )
      return v10;
  }
  return v3;
}
