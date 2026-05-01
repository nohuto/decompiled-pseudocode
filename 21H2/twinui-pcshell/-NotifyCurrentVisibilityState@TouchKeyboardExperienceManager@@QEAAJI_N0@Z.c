/*
 * XREFs of ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x1803BC18C
 * Callers:
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::operator() @ 0x1800CEFA8 (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--operator().c)
 *     _lambda_f61fa834658c673f1bf417ab36d33a49_::operator() @ 0x1800CFB3C (_lambda_f61fa834658c673f1bf417ab36d33a49_--operator().c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803B87B4 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnAccessibilityKeyboardRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1803CDEC8 (-OnAccessibilityKeyboardRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryHideRequestedEventArgs@45678@@Z @ 0x1803CF830 (-OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x1803CF8D0 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x1803CFC70 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x1803CFE30 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x1803D0880 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1B08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1804E95E4 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
        TouchKeyboardExperienceManager *this,
        int a2,
        char a3,
        bool a4)
{
  IhmNotification *v8; // rcx
  bool v9; // r8

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( a2 == *((_DWORD *)this + 179) )
  {
    LOBYTE(v8) = a3;
    IhmNotification::SendKeyboardSetVisible(v8, a4, v9);
  }
  return 0LL;
}
