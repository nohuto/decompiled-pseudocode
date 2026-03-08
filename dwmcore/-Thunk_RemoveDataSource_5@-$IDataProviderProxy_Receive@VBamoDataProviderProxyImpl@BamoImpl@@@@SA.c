/*
 * XREFs of ?Thunk_RemoveDataSource_5@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F57B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataProviderProxy_Receive<BamoImpl::BamoDataProviderProxyImpl>::Thunk_RemoveDataSource_5(
        BamoImpl::BamoDataProviderProxyImpl *a1,
        unsigned int **a2,
        __int64 a3,
        const char *a4)
{
  return BamoImpl::BamoDataProviderProxyImpl::RemoveDataSource(a1, **a2, a3, a4);
}
