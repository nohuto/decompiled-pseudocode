/*
 * XREFs of SdbFindFirstTag @ 0x14075A184
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F9710 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckSdbCapability @ 0x1405D1DB0 (SdbpCheckSdbCapability.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407535EC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x1407544C0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckForMatch @ 0x1407547A4 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x1407548A8 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x140754B18 (SdbpMatchOsVersion.c)
 *     KsepDbCacheReadDeviceInternal @ 0x140755D74 (KsepDbCacheReadDeviceInternal.c)
 *     SdbGetDatabaseEdition @ 0x1407564B0 (SdbGetDatabaseEdition.c)
 *     SdbGetDatabaseID @ 0x140758460 (SdbGetDatabaseID.c)
 *     KsepDbGetDriverShimsInternal @ 0x140758E8C (KsepDbGetDriverShimsInternal.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140759788 (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceScanIndexes @ 0x140759FC0 (InitOnceScanIndexes.c)
 *     InitOnceGetStringTableOffset @ 0x140773AC0 (InitOnceGetStringTableOffset.c)
 *     SdbpSearchDB @ 0x14077E7B4 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x1407B1FFC (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407B3980 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407C0D60 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407C1768 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407C198C (SdbFindFirstNamedTag.c)
 *     SdbReadEntryInformation @ 0x1407C1A3C (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407C1B60 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchAcpi @ 0x1407D3118 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407D316C (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407D31C0 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407D3214 (SdbpMatchCpu.c)
 *     KsepDbGetShimInfo @ 0x1408BF81C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408BFC50 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x1409642A0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140964370 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965080 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1409655E0 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x140965958 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409659A8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965BD4 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140965F84 (SdbpMatchDeviceString.c)
 *     SdbpMatchOne @ 0x140966000 (SdbpMatchOne.c)
 *     SdbpFindNextNamedTag @ 0x1409660D0 (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetNextChild @ 0x14075A1F8 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x14075A3F4 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x14075A470 (SdbGetFirstChild.c)
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
