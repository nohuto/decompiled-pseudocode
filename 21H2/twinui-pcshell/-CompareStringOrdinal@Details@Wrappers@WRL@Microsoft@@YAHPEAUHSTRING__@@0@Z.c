/*
 * XREFs of ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180026FFC
 * Callers:
 *     ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800BC4C0 (-OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 *     _lambda_de01ca16b280740cb5775a2ceb806b0d_::operator() @ 0x1800D4F7C (_lambda_de01ca16b280740cb5775a2ceb806b0d_--operator().c)
 *     ??9Wrappers@WRL@Microsoft@@YA_NAEBVHString@012@AEBQEAUHSTRING__@@@Z @ 0x18023A2B4 (--9Wrappers@WRL@Microsoft@@YA_NAEBVHString@012@AEBQEAUHSTRING__@@@Z.c)
 *     ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18023B570 (-OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRI.c)
 *     ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18023E6D0 (-OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180243240 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1802486B0 (-OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180248E30 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnViewUncloaking@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18024E2E0 (-OnViewUncloaking@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x180324DE8 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ??$?RPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@1234@@_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_@@QEBAJ$$QEAPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUITabDataModelTabPropertyChangedEventArgs@2345@@Z @ 0x1803A8628 (--$-RPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropert.c)
 *     ?OnTabPropertyChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1803AE260 (-OnTabPropertyChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1803E8900 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803E8D10 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1801BEF18 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
        Microsoft::WRL::Wrappers::Details *this,
        HSTRING a2,
        HSTRING a3)
{
  HRESULT v3; // eax
  int v4; // edx
  unsigned int v5; // r8d
  INT32 result; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v3 = WindowsCompareStringOrdinal((HSTRING)this, a2, &result);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3, v4, v5);
    JUMPOUT(0x18002702BLL);
  }
  return (unsigned int)result;
}
