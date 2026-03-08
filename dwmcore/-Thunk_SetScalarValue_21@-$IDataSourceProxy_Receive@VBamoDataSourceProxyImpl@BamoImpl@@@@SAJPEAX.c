/*
 * XREFs of ?Thunk_SetScalarValue_21@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F5A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetScalarValue_21(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return BamoImpl::BamoDataSourceProxyImpl::SetScalarValue(a1, **(_DWORD **)a2, **(float **)(a2 + 8), a4);
}
