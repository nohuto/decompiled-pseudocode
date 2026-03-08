/*
 * XREFs of ?Thunk_AddDataSource_5@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F5590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataProviderProxy_Receive<BamoImpl::BamoDataProviderProxyImpl>::Thunk_AddDataSource_5(
        BamoImpl::BamoDataProviderProxyImpl *a1,
        unsigned int **a2,
        __int64 a3,
        const char *a4)
{
  return BamoImpl::BamoDataProviderProxyImpl::AddDataSource(a1, **a2, a3, a4);
}
