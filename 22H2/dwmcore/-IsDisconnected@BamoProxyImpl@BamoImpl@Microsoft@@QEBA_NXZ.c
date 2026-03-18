/*
 * XREFs of ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1801E30B0
 * Callers:
 *     ?OnFirstDataRead@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1801E31D0 (-OnFirstDataRead@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801E33BC (-OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801E3548 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801E459C (-OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801E4720 (-OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ.c)
 *     ?OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z @ 0x1801E48D0 (-OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z.c)
 *     ?OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1801E4A70 (-OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?OnReaderDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1801E4C00 (-OnReaderDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801E4D8C (-OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x1801E5284 (-UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ.c)
 *     ?AnimationEnded@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E55B4 (-AnimationEnded@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4AnimationEndedReaso.c)
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E57F4 (-AnimationStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPR.c)
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E5AB8 (-DebuggingStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRE.c)
 *     ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801E5CC0 (-OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?PropertyChanged@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E5E14 (-PropertyChanged@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRE.c)
 *     ?ProxyReady@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801E6000 (-ProxyReady@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 29) || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 64LL) )
    return 1;
  return v1;
}
