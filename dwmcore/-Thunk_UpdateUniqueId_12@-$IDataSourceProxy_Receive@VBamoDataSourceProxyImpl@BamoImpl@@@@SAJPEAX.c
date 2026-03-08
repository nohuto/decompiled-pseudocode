/*
 * XREFs of ?Thunk_UpdateUniqueId_12@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F5B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_UpdateUniqueId_12(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        const struct _LUID **a2)
{
  return BamoImpl::BamoDataSourceProxyImpl::UpdateUniqueId(a1, 1, *a2);
}
