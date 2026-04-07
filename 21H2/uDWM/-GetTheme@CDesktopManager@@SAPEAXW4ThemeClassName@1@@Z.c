/*
 * XREFs of ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180026740
 * Callers:
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000C9DC (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025CCC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180029478 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x1800301F8 (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x180031234 (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180048500 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180048668 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800489F8 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180049ABC (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180049EF4 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x180094340 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18009C6B8 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800A1C10 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x1800A2620 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x1800A4510 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800A54A0 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800A5C90 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800A63C4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A6AE8 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800A6E70 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800ADAD0 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::GetTheme(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 76);
  v1 = a1 - 1;
  if ( !v1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 78);
  v2 = v1 - 1;
  if ( !v2 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 79);
  v3 = v2 - 1;
  if ( !v3 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 80);
  if ( v3 == 1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 81);
  return 0LL;
}
