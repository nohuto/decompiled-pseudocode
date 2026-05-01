/*
 * XREFs of ??B?$HighContrastAwareOpacity@N@@QEBANXZ @ 0x180418698
 * Callers:
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x180418B98 (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18041AD14 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x18000C270 (-IsHighContrast@@YAHXZ.c)
 */

double __fastcall HighContrastAwareOpacity<double>::operator double(double *a1)
{
  if ( (unsigned int)IsHighContrast() )
    return a1[1];
  else
    return *a1;
}
