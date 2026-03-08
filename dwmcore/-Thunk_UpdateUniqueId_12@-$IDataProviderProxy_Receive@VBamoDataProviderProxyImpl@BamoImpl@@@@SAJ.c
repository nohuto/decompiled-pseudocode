/*
 * XREFs of ?Thunk_UpdateUniqueId_12@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180104260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataProviderProxy_Receive<BamoImpl::BamoDataProviderProxyImpl>::Thunk_UpdateUniqueId_12(
        BamoImpl::BamoDataProviderProxyImpl *a1,
        const struct _LUID **a2,
        __int64 a3,
        const char *a4)
{
  return BamoImpl::BamoDataProviderProxyImpl::UpdateUniqueId(a1, 1, *a2, a4);
}
