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
