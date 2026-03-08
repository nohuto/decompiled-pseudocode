/*
 * XREFs of SdbReadQWORDTag @ 0x140800D70
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066B804 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpMatchOsVersion @ 0x1407A2004 (SdbpMatchOsVersion.c)
 *     SdbpCheckAllAttributes @ 0x1407A24E8 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140800CD0 (KsepDbReadKFlag.c)
 *     KsepDbReadKData @ 0x140973EE8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4C328 (SdbQueryDataExTagID.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A4E434 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x1407A21B8 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, unsigned int a2, __int64 a3)
{
  int TagData; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    TagData = SdbpReadTagData(a1, a2, (__int64)&v9, 8u);
    v7 = v9;
    if ( !TagData )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(1LL);
    return a3;
  }
}
