/*
 * XREFs of ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180407FFC
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x180408D60 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x18040B1D8 (-_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAP.c)
 *     ?IsEmpty@CScrollViewerHost@@UEAA_NXZ @ 0x180418AD0 (-IsEmpty@CScrollViewerHost@@UEAA_NXZ.c)
 *     ?SetFocused@CScrollViewerHost@@UEAAX_N@Z @ 0x180418F80 (-SetFocused@CScrollViewerHost@@UEAAX_N@Z.c)
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804191AC (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804193E4 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x180424B70 (-get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 *     ?SetFocused@CScrollViewer@@UEAAX_N@Z @ 0x18042B450 (-SetFocused@CScrollViewer@@UEAAX_N@Z.c)
 *     ?v_LayoutChildren@CScrollViewer@@MEAAXXZ @ 0x18042BD90 (-v_LayoutChildren@CScrollViewer@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
           a2);
}
