/*
 * XREFs of ?Thunk_UpdateRestrictToProcessIds_5@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F5B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_UpdateRestrictToProcessIds_5(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoDataSourceProxyImpl::UpdateRestrictToProcessIds(a1, 1, **a2);
}
