/*
 * XREFs of SdbReadDWORDTag @ 0x14079FC18
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066B804 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbGetDatabaseEdition @ 0x14079CA70 (SdbGetDatabaseEdition.c)
 *     KsepDbGetDriverShimsInternal @ 0x14079EF10 (KsepDbGetDriverShimsInternal.c)
 *     InitOnceScanIndexes @ 0x1407A16B0 (InitOnceScanIndexes.c)
 *     SdbpCheckAllAttributes @ 0x1407A24E8 (SdbpCheckAllAttributes.c)
 *     KsepDbGetShimInfo @ 0x140800448 (KsepDbGetShimInfo.c)
 *     SdbpGetExeEntryFlags @ 0x14084BD1C (SdbpGetExeEntryFlags.c)
 *     KsepDbReadKData @ 0x140973EE8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4C328 (SdbQueryDataExTagID.c)
 *     SdbpCheckOSKind @ 0x140A4DBF0 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x140A4DCC0 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x140A4E1B8 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A4E208 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A4E434 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x140A50A7C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x1407A21B8 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  v10 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3) & 0xF000) == 0x4000 )
  {
    v7 = SdbpReadTagData(a1, v4, &v10, 4LL);
    v8 = v10;
    if ( !v7 )
      return v3;
    return v8;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4, v6);
    AslLogCallPrintf(1LL);
    return v3;
  }
}
