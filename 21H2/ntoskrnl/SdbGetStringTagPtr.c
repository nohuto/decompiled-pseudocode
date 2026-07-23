/*
 * XREFs of SdbGetStringTagPtr @ 0x140756740
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F98F0 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckSdbCapability @ 0x1405D1DB0 (SdbpCheckSdbCapability.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407537AC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x140754680 (SdbpCheckMatchingFiles.c)
 *     SdbpMatchList @ 0x140754A68 (SdbpMatchList.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140759948 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14077E974 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x1407B219C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407B3B20 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407C1280 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407C1C88 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407C1EAC (SdbFindFirstNamedTag.c)
 *     KsepDbGetSdbString @ 0x1408BF948 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1408BFDB0 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x140964480 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140964550 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965260 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1409657C0 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x140965B88 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965DB4 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140966164 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1409662B0 (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbpGetMappedStringFromTable @ 0x1407567C0 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x1407568E8 (SdbpReadStringRef.c)
 *     SdbpGetMappedTagData @ 0x140759FC4 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x14075A5B4 (SdbGetTagFromTagID.c)
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
