/*
 * XREFs of ?PromoteVisualProxyWindow@EmulatedFullScreenManager@@UEAAJPEAUHWND__@@@Z @ 0x1804C1920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DXGI_FullscreenProxyWindowPromotion@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804C1A08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DXGI_FullscreenProxyWindowPromotion@@@det.c)
 */

__int64 __fastcall EmulatedFullScreenManager::PromoteVisualProxyWindow(EmulatedFullScreenManager *this, HWND a2)
{
  HWND v2; // rbx

  v2 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DXGI_FullscreenProxyWindowPromotion>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DXGI_FullscreenProxyWindowPromotion>::GetImpl'::`2'::impl,
    a2);
  if ( GetPropW(v2, L"__D3DVisualProxyProp__") )
    return (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD, __int64))(**((_QWORD **)this + 6) + 32LL))(
             *((_QWORD *)this + 6),
             v2,
             0LL,
             8LL);
  else
    return 2147942487LL;
}
