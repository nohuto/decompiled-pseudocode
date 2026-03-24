/*
 * XREFs of SdbReadQWORDTag @ 0x1407B3A20
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F9710 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpMatchOsVersion @ 0x140754B18 (SdbpMatchOsVersion.c)
 *     SdbpCheckAllAttributes @ 0x1407B1FFC (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407B3980 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x1407C1768 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x1408BFC50 (KsepDbReadKData.c)
 *     SdbpCheckPackageAttributes @ 0x1409655E0 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965BD4 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140759F40 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14075A3F4 (SdbGetTagFromTagID.c)
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
