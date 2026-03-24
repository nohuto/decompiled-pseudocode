/*
 * XREFs of ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x180180680
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180181B08 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::OnDisconnected(DataProviderProxy **this)
{
  if ( this[24] )
    DataProviderProxy::RemoveSourceEntry(this[24], (struct BamoDataSourceProxy *)this);
  return 0LL;
}
