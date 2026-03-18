/*
 * XREFs of SdbReadQWORDTag @ 0x140842904
 * Callers:
 *     SdbQueryDataExTagID @ 0x1408411FC (SdbQueryDataExTagID.c)
 *     SdbpCheckAllAttributes @ 0x140841610 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140842864 (KsepDbReadKFlag.c)
 *     SdbpMatchOsVersion @ 0x1408436C0 (SdbpMatchOsVersion.c)
 *     KsepDbReadKData @ 0x140963CD0 (KsepDbReadKData.c)
 *     SdbpCheckPackageAttributes @ 0x140A11F60 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A126D0 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140791084 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14079499C (SdbGetTagFromTagID.c)
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
