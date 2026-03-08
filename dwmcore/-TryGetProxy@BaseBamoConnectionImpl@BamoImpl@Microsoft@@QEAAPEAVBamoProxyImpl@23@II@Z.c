/*
 * XREFs of ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x1800AD020
 * Callers:
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800ACECC (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?Thunk_MarkProxyReady_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800AE3B0 (-Thunk_MarkProxyReady_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_Au.c)
 *     ?DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z @ 0x1801B6624 (-DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z.c)
 *     ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x1801B7FA0 (-SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?Thunk_ClearProxyReady_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B86A0 (-Thunk_ClearProxyReady_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_A.c)
 *     ?Thunk_MarkProxyReadyOnPropertiesRefreshed_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B8760 (-Thunk_MarkProxyReadyOnPropertiesRefreshed_34@-$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@.c)
 *     ?Thunk_MarkProxyReady_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B8810 (-Thunk_MarkProxyReady_34@-$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@Diagnos.c)
 *     ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1801DE1C0 (-Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801F4750 (-AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801F50C0 (-RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateRestrictToProcessIds@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801F5B68 (-UpdateRestrictToProcessIds@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1800AD05C (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 */

struct Microsoft::BamoImpl::BamoProxyImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2,
        unsigned int a3)
{
  struct Microsoft::BamoImpl::BamoProxyImpl *result; // rax

  result = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(this, a2, a3);
  if ( result )
    return (struct Microsoft::BamoImpl::BamoProxyImpl *)(*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)result + 48LL))(result);
  return result;
}
