/*
 * XREFs of ?Thunk_SetVector3Value_30@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F5A70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1801F542C (-SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z.c)
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetVector3Value_30(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDataSourceProxyImpl::SetVector3Value(
           a1,
           **(_DWORD **)a2,
           **(float **)(a2 + 8),
           **(float **)(a2 + 16));
}
