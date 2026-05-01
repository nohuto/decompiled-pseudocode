/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001B218
 * Callers:
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x18001AEE0 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800F5920 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$7 @ 0x1800F5C0E (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphF_ea_1800F5C0E.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2 @ 0x1800FA550 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2_::_1_::dtor$14 @ 0x1800FC5B8 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePrev_ea_1800FC5B8.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FE9F0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2_::_1_::dtor$10 @ 0x1801007F0 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumb_ea_1801007F0.c)
 *     __anonymous_namespace_::GetLogoFromShellItem_::_1_::dtor$0 @ 0x1801397BC (__anonymous_namespace_--GetLogoFromShellItem_--_1_--dtor$0.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143AB0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     __anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::dtor$7 @ 0x180143FC0 (__anonymous_namespace_--TryGetRequestorDisplayInformation_--_1_--dtor$7.c)
 *     __anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::dtor$10 @ 0x180143FE4 (__anonymous_namespace_--TryGetRequestorDisplayInformation_--_1_--dtor$10.c)
 *     _anonymous_namespace_::TryGetTargetDisplayInformation @ 0x180144054 (_anonymous_namespace_--TryGetTargetDisplayInformation.c)
 *     ?_Destroy@?$_Variant_base@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@QEAAXXZ @ 0x180144974 (-_Destroy@-$_Variant_base@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6.c)
 *     _SearchAppDesktopExperienceView::ApplyCortanaWindowRegion_::_1_::dtor$0 @ 0x1801728F3 (_SearchAppDesktopExperienceView--ApplyCortanaWindowRegion_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$1 @ 0x180263D5D (_CortanaStoreAppExperienceManager--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$1.c)
 *     _SearchAppDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x180277A0C (_SearchAppDesktopExperienceView--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::ApplyCortanaWindowRegion_::_1_::dtor$0 @ 0x180279893 (_CortanaDesktopExperienceView--ApplyCortanaWindowRegion_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects_::_1_::dtor$0 @ 0x1802799F5 (_CortanaDesktopExperienceView--ApplyCortanaWindowRegionWithCustomRects_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x18028080C (_CortanaDesktopExperienceView--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return DeleteObject(v1);
  return result;
}
