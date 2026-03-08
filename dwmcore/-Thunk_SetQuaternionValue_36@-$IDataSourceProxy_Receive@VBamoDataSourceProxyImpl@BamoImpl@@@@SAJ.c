/*
 * XREFs of ?Thunk_SetQuaternionValue_36@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801F59D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetQuaternionValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1801F5268 (-SetQuaternionValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetQuaternionValue_36(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDataSourceProxyImpl::SetQuaternionValue(
           a1,
           **(_DWORD **)a2,
           **(float **)(a2 + 8),
           **(float **)(a2 + 16));
}
