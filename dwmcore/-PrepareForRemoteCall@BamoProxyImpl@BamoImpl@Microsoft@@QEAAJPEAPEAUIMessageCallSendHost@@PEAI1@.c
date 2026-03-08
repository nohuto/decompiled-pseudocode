/*
 * XREFs of ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801E0248
 * Callers:
 *     ?OnFirstDataRead@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1801DFED0 (-OnFirstDataRead@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801E00BC (-OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801E129C (-OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801E1420 (-OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ.c)
 *     ?OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z @ 0x1801E15D0 (-OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z.c)
 *     ?OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1801E1770 (-OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?OnReaderDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1801E1900 (-OnReaderDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801E1A8C (-OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?AnimationEnded@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E22B4 (-AnimationEnded@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4AnimationEndedReaso.c)
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E24F4 (-AnimationStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPR.c)
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E27B8 (-DebuggingStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRE.c)
 *     ?PropertyChanged@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801E2B14 (-PropertyChanged@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRE.c)
 *     ?ProxyReady@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801E2D00 (-ProxyReady@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJXZ.c)
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800ACFF4 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1801DFDB0 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  _DWORD *v6; // r9
  __int64 v7; // r10
  Microsoft::BamoImpl::BaseBamoPeerImpl **v8; // rdi
  int v9; // eax
  int v10; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) || *(_BYTE *)(v7 + 31) )
  {
    v8 = (Microsoft::BamoImpl::BaseBamoPeerImpl **)(v7 + 16);
    *v6 = *(_DWORD *)(v7 + 24);
  }
  else
  {
    v8 = (Microsoft::BamoImpl::BaseBamoPeerImpl **)(v7 + 16);
    v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 24LL) + 32LL),
           0x87B20805,
           0);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
        (const char *)(unsigned int)v9);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x171,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  *a2 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*v8);
  result = 0LL;
  *a3 = *((_DWORD *)*v8 + 9);
  return result;
}
