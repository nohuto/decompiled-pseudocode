/*
 * XREFs of SdbReadDWORDTag @ 0x140759584
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F8D90 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbGetDatabaseEdition @ 0x140755CA0 (SdbGetDatabaseEdition.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075867C (KsepDbGetDriverShimsInternal.c)
 *     InitOnceScanIndexes @ 0x1407597B0 (InitOnceScanIndexes.c)
 *     SdbpCheckAllAttributes @ 0x1407B243C (SdbpCheckAllAttributes.c)
 *     SdbQueryDataExTagID @ 0x1407C1F28 (SdbQueryDataExTagID.c)
 *     SdbpGetExeEntryFlags @ 0x1407C2320 (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x1408BF86C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408BFCA0 (KsepDbReadKData.c)
 *     SdbpCheckOSKind @ 0x1409655E0 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x140965630 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x140965890 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x1409659A8 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409659F8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965C24 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140759730 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v12 = a3;
  v5 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x4000 )
  {
    v9 = SdbpReadTagData(a1, v5, &v12, 4LL);
    v10 = v12;
    if ( !v9 )
      return v4;
    return v10;
  }
  else
  {
    SdbGetTagFromTagID(a1, v5, v7, v8);
    AslLogCallPrintf(1LL);
    return v4;
  }
}
