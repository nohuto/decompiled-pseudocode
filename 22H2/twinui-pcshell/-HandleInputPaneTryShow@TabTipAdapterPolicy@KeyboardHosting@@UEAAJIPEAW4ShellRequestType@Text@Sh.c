/*
 * XREFs of ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1803D7F20
 * Callers:
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x1803CF600 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 * Callees:
 *     ??$HandleInputPaneTryShow@AEAIAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEA_NAEA_NAEA_NAEA_NAEA_NAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEA_N2222AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800D22A4 (--$HandleInputPaneTryShow@AEAIAEAU-$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@.c)
 *     ??B?$_Atomic_base@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@$03@std@@QEBA?AW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@XZ @ 0x1800D2554 (--B-$_Atomic_base@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@$03@std@@QEBA-AW4CoreKey.c)
 *     ?IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x1803D851C (-IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryShow(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  unsigned int *v6; // rcx
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  *(_DWORD *)a3 = 0;
  if ( !KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewShown(this)
    && ((unsigned int)std::_Atomic_base<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality,4>::operator enum Windows::UI::Internal::Text::Core::CoreKeyboardModality((unsigned int *)this + 129) == 2
     || (unsigned int)std::_Atomic_base<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality,4>::operator enum Windows::UI::Internal::Text::Core::CoreKeyboardModality(v6) == 16)
    && (*((_BYTE *)this + 510) || *((_BYTE *)this + 511) || *((_BYTE *)this + 507))
    && !*((_BYTE *)this + 506)
    && !*((_BYTE *)this + 508)
    || (unsigned int)(a2 - 1) <= 3 )
  {
    *(_DWORD *)a3 = 1;
  }
  TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow<unsigned int &,std::atomic<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality> &,bool &,bool &,bool &,bool &,bool &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    &v8,
    (int *)this + 129,
    (_BYTE *)this + 510,
    (char *)this + 511,
    (char *)this + 507,
    (char *)this + 506,
    (char *)this + 508,
    (char *)a3);
  return 0LL;
}
