__int64 __fastcall DiagnosticCallbacksManager::SendAnimationStarted(
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
    v10 = (*(__int64 (__fastcall **)(struct ICompObjectDiagnosticsRootProxy *, _QWORD, __int64, _QWORD))(*(_QWORD *)ProxyForPeer + 40LL))(
            ProxyForPeer,
            a3,
            a4,
            a5);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        242LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
        (const char *)(unsigned int)v10,
        0);
  }
  return 0LL;
}
