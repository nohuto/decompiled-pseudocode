/*
 * XREFs of ??$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z @ 0x1801B44F0
 * Callers:
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x1801B489C (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 *     ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E1140 (-AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 *     ?QueueForDeferredDestruction@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E1C5C (-QueueForDeferredDestruction@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E1E04 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DataProviderHelper::GetUniqueId<BamoDataSourceProxy>(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h]

  v1 = a1 + 8;
  LODWORD(v3) = *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 40LL))(a1 + 8);
  HIDWORD(v3) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1) + 4);
  return v3;
}
