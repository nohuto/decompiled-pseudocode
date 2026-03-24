/*
 * XREFs of SdbReadQWORDTag @ 0x1407B3E60
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F8D90 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpMatchOsVersion @ 0x140754308 (SdbpMatchOsVersion.c)
 *     SdbpCheckAllAttributes @ 0x1407B243C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407B3DC0 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x1407C1F28 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x1408BFCA0 (KsepDbReadKData.c)
 *     SdbpCheckPackageAttributes @ 0x140965630 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965C24 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140759730 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int TagData; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    TagData = SdbpReadTagData(a1, v4, (__int64)&v9, 8u);
    v7 = v9;
    if ( !TagData )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL);
    return a3;
  }
}
