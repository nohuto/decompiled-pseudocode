/*
 * XREFs of ?SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpressionValue@@@Z @ 0x1801B7958
 * Callers:
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1802120BC (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z @ 0x1801B8C00 (-TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z.c)
 *     ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x1802140C8 (-GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ.c)
 */

__int64 __fastcall DiagnosticCallbacksManager::SendAnimationEnded(
        DiagnosticCallbacksManager *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        CExpressionValue *a8)
{
  struct ICompObjectDiagnosticsRootProxy *ProxyForPeer; // rbx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  ProxyForPeer = DiagnosticCallbacksManager::TryGetProxyForPeer(a1, a2);
  if ( ProxyForPeer )
  {
    CExpressionValue::GetValueSizeInBytes(a8);
    v11 = (*(__int64 (__fastcall **)(struct ICompObjectDiagnosticsRootProxy *, _QWORD, __int64, _QWORD))(*(_QWORD *)ProxyForPeer + 56LL))(
            ProxyForPeer,
            a3,
            a4,
            a5);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        275LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
        (const char *)(unsigned int)v11,
        0);
  }
  return 0LL;
}
