/*
 * XREFs of ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804195CC
 * Callers:
 *     ??8?$HighContrastAwareOpacity@M@@QEBA_NAEBU0@@Z @ 0x18041958C (--8-$HighContrastAwareOpacity@M@@QEBA_NAEBU0@@Z.c)
 *     _lambda_75d12933469d574ec35b52b770ab7fc4_::operator() @ 0x1804195F8 (_lambda_75d12933469d574ec35b52b770ab7fc4_--operator().c)
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x180419AC8 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18041A984 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x18041E2C4 (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 *     _lambda_3620ca84e17db7610b457f2d5c27bd2d_::operator() @ 0x180421DD0 (_lambda_3620ca84e17db7610b457f2d5c27bd2d_--operator().c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x180425704 (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x180433780 (-AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@I.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x18000C270 (-IsHighContrast@@YAHXZ.c)
 */

float __fastcall HighContrastAwareOpacity<float>::operator float(float *a1)
{
  if ( (unsigned int)IsHighContrast() )
    return a1[1];
  else
    return *a1;
}
