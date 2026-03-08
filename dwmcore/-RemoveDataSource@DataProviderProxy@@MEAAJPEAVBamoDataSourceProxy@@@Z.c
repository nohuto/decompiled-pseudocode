/*
 * XREFs of ?RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E1DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E1E04 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 */

__int64 __fastcall DataProviderProxy::RemoveDataSource(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  int v3; // r8d

  v3 = DataProviderProxy::RemoveSourceEntry(this, a2);
  if ( v3 < 0 )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8, (unsigned int)v3);
  return 0LL;
}
