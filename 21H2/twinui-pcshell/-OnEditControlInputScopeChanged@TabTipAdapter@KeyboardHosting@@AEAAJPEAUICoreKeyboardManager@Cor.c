/*
 * XREFs of ?OnEditControlInputScopeChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlInputScopeChangedEventArgs@45678@@Z @ 0x1800899F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlInputScopeChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs *, unsigned int *))(v3 + 48))(
         a3,
         &v10);
  if ( v5 < 0 )
  {
    v8 = 378LL;
  }
  else
  {
    v6 = *((_QWORD *)this + 6);
    if ( !v6 )
      return 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, v10);
    if ( v5 >= 0 )
      return 0LL;
    v8 = 382LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
