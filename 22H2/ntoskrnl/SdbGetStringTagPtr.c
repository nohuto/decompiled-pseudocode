/*
 * XREFs of SdbGetStringTagPtr @ 0x140755D70
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F8D90 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckSdbCapability @ 0x1405D1DB0 (SdbpCheckSdbCapability.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140752DDC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x140753CB0 (SdbpCheckMatchingFiles.c)
 *     SdbpMatchList @ 0x140754098 (SdbpMatchList.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140758F78 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14077E6B4 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x1407B243C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407B3DC0 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407C1520 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407C1F28 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407C214C (SdbFindFirstNamedTag.c)
 *     KsepDbGetSdbString @ 0x1408BF838 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1408BFCA0 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x1409642F0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x1409643C0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409650D0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140965630 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409659F8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965C24 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140965FD4 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x140966120 (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpGetMappedStringFromTable @ 0x140755DF0 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140755F18 (SdbpReadStringRef.c)
 *     SdbpGetMappedTagData @ 0x1407595F4 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int16 v7; // ax
  unsigned int StringRef; // eax

  v4 = 0LL;
  v5 = a2;
  if ( a1 )
  {
    v7 = SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000;
    if ( v7 == (__int16)0x8000 )
      return SdbpGetMappedTagData(a1, v5);
    if ( v7 != 24576 )
      return v4;
    StringRef = SdbpReadStringRef(a1, v5);
    if ( StringRef )
      return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
