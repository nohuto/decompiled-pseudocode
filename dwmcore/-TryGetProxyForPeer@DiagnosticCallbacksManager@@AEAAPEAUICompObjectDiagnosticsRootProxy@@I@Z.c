/*
 * XREFs of ?TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z @ 0x1801B8C00
 * Callers:
 *     ?SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpressionValue@@@Z @ 0x1801B7958 (-SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpr.c)
 *     ?SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x1801B7A1C (-SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 *     ?SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z @ 0x1801B7B6C (-SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z.c)
 *     ?SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x1801B7D3C (-SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1801B5630 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL.c)
 */

struct ICompObjectDiagnosticsRootProxy *__fastcall DiagnosticCallbacksManager::TryGetProxyForPeer(
        DiagnosticCallbacksManager *this,
        unsigned int a2)
{
  unsigned int v2; // r10d
  _QWORD *v3; // r11
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 32,
    (__int64)v5,
    &v7);
  if ( *(_BYTE *)(v6 + 25) || v2 < *(_DWORD *)(v6 + 32) || v6 == *v3 )
    return 0LL;
  else
    return *(struct ICompObjectDiagnosticsRootProxy **)(v6 + 40);
}
