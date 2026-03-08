/*
 * XREFs of ?SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z @ 0x1801B7B6C
 * Callers:
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x180211EE8 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z @ 0x1801B8C00 (-TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z.c)
 *     ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x1802140C8 (-GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ.c)
 */

__int64 __fastcall DiagnosticCallbacksManager::SendDebugStart(
        DiagnosticCallbacksManager *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        const struct CExpressionValue *a6)
{
  struct ICompObjectDiagnosticsRootProxy *ProxyForPeer; // rbx
  __int64 v9; // r11
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ProxyForPeer = DiagnosticCallbacksManager::TryGetProxyForPeer(this, a2);
  if ( ProxyForPeer )
  {
    CExpressionValue::GetValueSizeInBytes(a6);
    v12 = *(_DWORD *)(v9 + 72);
    v10 = (*(__int64 (__fastcall **)(struct ICompObjectDiagnosticsRootProxy *, _QWORD, __int64, _QWORD))(*(_QWORD *)ProxyForPeer + 32LL))(
            ProxyForPeer,
            a3,
            a4,
            a5);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        180LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
        (const char *)(unsigned int)v10,
        v12);
  }
  return 0LL;
}
