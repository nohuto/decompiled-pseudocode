/*
 * XREFs of ?OnEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs@45678@@Z @ 0x180087F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180087FA0 (-HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosti.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1804E95E4 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlEmbeddedHandwritingViewVisibleSettingChanged(
        KeyboardHosting::TabTipAdapterPolicy **this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  bool v6; // r8
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v10; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs *, unsigned __int8 *))(v3 + 48))(
         a3,
         &v10);
  if ( v5 < 0 )
  {
    v8 = 466LL;
  }
  else
  {
    v5 = KeyboardHosting::TabTipAdapterPolicy::HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged(
           this[13],
           v10,
           (enum Windows::Internal::Shell::Text::ShellRequestType *)&v11);
    if ( v5 < 0 )
    {
      v8 = 469LL;
    }
    else
    {
      if ( v11 != 2 )
        return 0LL;
      IhmNotification::SendKeyboardSetVisible(0LL, 0, v6);
      v5 = (*((__int64 (__fastcall **)(char *))this[1] + 5))((char *)this + 8);
      if ( v5 >= 0 )
        return 0LL;
      v8 = 475LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
