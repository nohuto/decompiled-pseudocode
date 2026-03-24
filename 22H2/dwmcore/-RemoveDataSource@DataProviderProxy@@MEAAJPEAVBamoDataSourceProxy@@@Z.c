/*
 * XREFs of ?RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180181AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180181B08 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 */

__int64 __fastcall DataProviderProxy::RemoveDataSource(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  int v3; // r8d

  v3 = DataProviderProxy::RemoveSourceEntry(this, a2);
  if ( v3 < 0 )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, (unsigned int)v3);
  return 0LL;
}
