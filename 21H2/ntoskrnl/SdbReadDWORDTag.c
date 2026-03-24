/*
 * XREFs of SdbReadDWORDTag @ 0x140759D94
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F9710 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbGetDatabaseEdition @ 0x1407564B0 (SdbGetDatabaseEdition.c)
 *     KsepDbGetDriverShimsInternal @ 0x140758E8C (KsepDbGetDriverShimsInternal.c)
 *     InitOnceScanIndexes @ 0x140759FC0 (InitOnceScanIndexes.c)
 *     SdbpCheckAllAttributes @ 0x1407B1FFC (SdbpCheckAllAttributes.c)
 *     SdbQueryDataExTagID @ 0x1407C1768 (SdbQueryDataExTagID.c)
 *     SdbpGetExeEntryFlags @ 0x1407C1B60 (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x1408BF81C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408BFC50 (KsepDbReadKData.c)
 *     SdbpCheckOSKind @ 0x140965590 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x1409655E0 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x140965840 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x140965958 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409659A8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965BD4 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140759F40 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14075A3F4 (SdbGetTagFromTagID.c)
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
