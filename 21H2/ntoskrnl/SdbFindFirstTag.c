/*
 * XREFs of SdbFindFirstTag @ 0x14075A344
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F98F0 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckSdbCapability @ 0x1405D1DB0 (SdbpCheckSdbCapability.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407537AC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x140754680 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckForMatch @ 0x140754964 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x140754A68 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x140754CD8 (SdbpMatchOsVersion.c)
 *     KsepDbCacheReadDeviceInternal @ 0x140755F34 (KsepDbCacheReadDeviceInternal.c)
 *     SdbGetDatabaseEdition @ 0x140756670 (SdbGetDatabaseEdition.c)
 *     SdbGetDatabaseID @ 0x140758620 (SdbGetDatabaseID.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075904C (KsepDbGetDriverShimsInternal.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140759948 (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceScanIndexes @ 0x14075A180 (InitOnceScanIndexes.c)
 *     InitOnceGetStringTableOffset @ 0x140773C80 (InitOnceGetStringTableOffset.c)
 *     SdbpSearchDB @ 0x14077E974 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x1407B219C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407B3B20 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407C1280 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407C1C88 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407C1EAC (SdbFindFirstNamedTag.c)
 *     SdbReadEntryInformation @ 0x1407C1F5C (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407C2080 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchAcpi @ 0x1407D3288 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407D32DC (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407D3330 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407D3384 (SdbpMatchCpu.c)
 *     KsepDbGetShimInfo @ 0x1408BF97C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408BFDB0 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x140964480 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140964550 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965260 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1409657C0 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x140965B38 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140965B88 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965DB4 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140966164 (SdbpMatchDeviceString.c)
 *     SdbpMatchOne @ 0x1409661E0 (SdbpMatchOne.c)
 *     SdbpFindNextNamedTag @ 0x1409662B0 (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetNextChild @ 0x14075A3B8 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x14075A5B4 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x14075A630 (SdbGetFirstChild.c)
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
