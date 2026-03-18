/*
 * XREFs of ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800AD180
 * Callers:
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800ACD90 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x1800AD0B0 (-OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z.c)
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD990 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1800ADA00 (-OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z.c)
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800ADA80 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x1801B94C0 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z @ 0x1801B9AC0 (-FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z.c)
 *     ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x1801BA350 (-OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z.c)
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x1801BA5A0 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801BBBE0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x1801E0C10 (-BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 *     ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x1801E0D10 (-BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 *     ?OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x1801E0FB0 (-OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x1801E10F0 (-OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 *     ?OnFirstDataRead@BamoDataSourceProxy@@UEAAJ_K@Z @ 0x1801E3180 (-OnFirstDataRead@BamoDataSourceProxy@@UEAAJ_K@Z.c)
 *     ?OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z @ 0x1801E3370 (-OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z.c)
 *     ?GetNumberOfReaders@BamoDataProviderProxy@@UEAAIXZ @ 0x1801E4510 (-GetNumberOfReaders@BamoDataProviderProxy@@UEAAIXZ.c)
 *     ?OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x1801E4550 (-OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ @ 0x1801E46E0 (-OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ.c)
 *     ?OnNotify@BamoDataProviderProxy@@UEAAJ_KW4DataProviderNotificationEventArg@@@Z @ 0x1801E4870 (-OnNotify@BamoDataProviderProxy@@UEAAJ_KW4DataProviderNotificationEventArg@@@Z.c)
 *     ?OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z @ 0x1801E4A20 (-OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z.c)
 *     ?OnReaderDisconnected@BamoDataProviderProxy@@UEAAJ_K@Z @ 0x1801E4BB0 (-OnReaderDisconnected@BamoDataProviderProxy@@UEAAJ_K@Z.c)
 *     ?OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x1801E4D40 (-OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 *     ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x1801E5230 (-SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z.c)
 *     ?AnimationEnded@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E5510 (-AnimationEnded@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4AnimationEndedReasonType@@W4DCOM.c)
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E5760 (-AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E5A30 (-DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ?PropertyChanged@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E5D80 (-PropertyChanged@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ?ProxyReady@BamoCompObjectDiagnosticsRootProxy@@UEAAJXZ @ 0x1801E5FC0 (-ProxyReady@BamoCompObjectDiagnosticsRootProxy@@UEAAJXZ.c)
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801E61D0 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800AD21C (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800AD248 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800AD27C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

Microsoft::BamoImpl::InternalLock *__fastcall Microsoft::BamoImpl::InternalLock::InternalLock(
        Microsoft::BamoImpl::InternalLock *this,
        struct Microsoft::BamoImpl::ConnectionIndirector *a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rsi

  *(_QWORD *)this = 0LL;
  v3 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)*((_QWORD *)a2 + 4);
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(v3) )
  {
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(this, a2);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v3);
  }
  return this;
}
