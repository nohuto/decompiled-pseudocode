/*
 * XREFs of ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1803D26EC
 * Callers:
 *     ?OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BC720 (-OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnAccessibilityKeyboardRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1803CDBF8 (-OnAccessibilityKeyboardRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs@45678@@Z @ 0x1803CDCF0 (-OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUI.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x1803CE830 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1803CEFB0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x1803CF9A0 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1803D0330 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x1803D05B0 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1803D09E8 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1803D0B5C (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1803D1A34 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x1803D839C (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  int v5; // eax
  unsigned int v6; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (_BYTE)a2
    || *((_BYTE *)this + 450)
    || *((_BYTE *)this + 451)
    || KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(*((KeyboardHosting::TabTipAdapterPolicy **)this + 13))
    || *((_BYTE *)this + 448);
  if ( v4 != *((_BYTE *)this + 452) )
  {
    LOBYTE(a3) = v4;
    LOBYTE(a2) = 1;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 544LL))(
           *((_QWORD *)this + 3),
           a2,
           a3);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54C,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    *((_BYTE *)this + 452) = v4;
  }
  return 0LL;
}
