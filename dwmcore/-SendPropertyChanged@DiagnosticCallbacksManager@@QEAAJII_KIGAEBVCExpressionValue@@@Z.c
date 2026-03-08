/*
 * XREFs of ?SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x1801B7D3C
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x180212430 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z @ 0x1801B8C00 (-TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z.c)
 *     ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x1802140C8 (-GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ.c)
 */

__int64 __fastcall DiagnosticCallbacksManager::SendPropertyChanged(
        DiagnosticCallbacksManager *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int16 a6,
        const struct CExpressionValue *a7)
{
  struct ICompObjectDiagnosticsRootProxy *ProxyForPeer; // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  ProxyForPeer = DiagnosticCallbacksManager::TryGetProxyForPeer(this, a2);
  if ( ProxyForPeer )
  {
    CExpressionValue::GetValueSizeInBytes(a7);
    v10 = (*(__int64 (__fastcall **)(struct ICompObjectDiagnosticsRootProxy *, _QWORD, __int64, _QWORD))(*(_QWORD *)ProxyForPeer + 48LL))(
            ProxyForPeer,
            a3,
            a4,
            a5);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        211LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
        (const char *)(unsigned int)v10,
        a6);
  }
  return 0LL;
}
