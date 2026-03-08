/*
 * XREFs of ??$GetUniqueId@VBamoDataProviderProxy@@@DataProviderHelper@@YA_KPEAVBamoDataProviderProxy@@@Z @ 0x1800FF7C0
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800FF72C (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x1801B489C (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DataProviderHelper::GetUniqueId<BamoDataProviderProxy>(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h]

  v1 = a1 + 8;
  LODWORD(v3) = *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 72LL))(a1 + 8);
  HIDWORD(v3) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1) + 4);
  return v3;
}
