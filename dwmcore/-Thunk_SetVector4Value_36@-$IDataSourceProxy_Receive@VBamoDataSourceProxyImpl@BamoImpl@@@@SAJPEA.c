/*
 * XREFs of ?Thunk_SetVector4Value_36@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F5AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVector4Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1801F54CC (-SetVector4Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetVector4Value_36(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDataSourceProxyImpl::SetVector4Value(
           a1,
           **(_DWORD **)a2,
           **(float **)(a2 + 8),
           **(float **)(a2 + 16));
}
