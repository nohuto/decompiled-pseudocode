/*
 * XREFs of SdbReadQWORDTag @ 0x14080B234
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066DE54 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpMatchOsVersion @ 0x140757794 (SdbpMatchOsVersion.c)
 *     SdbpCheckAllAttributes @ 0x140757C04 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x14080B194 (KsepDbReadKFlag.c)
 *     KsepDbReadKData @ 0x140976F88 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4EFF8 (SdbQueryDataExTagID.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51104 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x1407579AC (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140758190 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    v6 = SdbpReadTagData(a1, a2, &v9, 8u);
    v7 = v9;
    if ( !v6 )
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
