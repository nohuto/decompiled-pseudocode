/*
 * XREFs of SdbGetStringTagPtr @ 0x140756580
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F9710 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckSdbCapability @ 0x1405D1DB0 (SdbpCheckSdbCapability.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407535EC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x1407544C0 (SdbpCheckMatchingFiles.c)
 *     SdbpMatchList @ 0x1407548A8 (SdbpMatchList.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140759788 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14077E7B4 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x1407B1FFC (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407B3980 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407C0D60 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407C1768 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407C198C (SdbFindFirstNamedTag.c)
 *     KsepDbGetSdbString @ 0x1408BF7E8 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1408BFC50 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x1409642A0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140964370 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965080 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1409655E0 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409659A8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965BD4 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140965F84 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1409660D0 (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbpGetMappedStringFromTable @ 0x140756600 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140756728 (SdbpReadStringRef.c)
 *     SdbpGetMappedTagData @ 0x140759E04 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x14075A3F4 (SdbGetTagFromTagID.c)
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
