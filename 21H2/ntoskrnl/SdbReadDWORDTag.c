/*
 * XREFs of SdbReadDWORDTag @ 0x140759F54
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F98F0 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbGetDatabaseEdition @ 0x140756670 (SdbGetDatabaseEdition.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075904C (KsepDbGetDriverShimsInternal.c)
 *     InitOnceScanIndexes @ 0x14075A180 (InitOnceScanIndexes.c)
 *     SdbpCheckAllAttributes @ 0x1407B219C (SdbpCheckAllAttributes.c)
 *     SdbQueryDataExTagID @ 0x1407C1C88 (SdbQueryDataExTagID.c)
 *     SdbpGetExeEntryFlags @ 0x1407C2080 (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x1408BF97C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408BFDB0 (KsepDbReadKData.c)
 *     SdbpCheckOSKind @ 0x140965770 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x1409657C0 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x140965A20 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x140965B38 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x140965B88 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965DB4 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14075A100 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14075A5B4 (SdbGetTagFromTagID.c)
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
