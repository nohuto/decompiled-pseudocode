/*
 * XREFs of ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18004ABF8
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18004A3B8 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x18004ACD8 (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x18004ACF0 (--$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18007DCC8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800878F8 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

__int64 __fastcall CWindowList::RegisterTransparencySystemPolicyChangeEvent(CWindowList *this, __int64 a2, __int64 a3)
{
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  wil::details *v4; // rbx
  wil::details **v5; // rsi
  wil::details *v6; // rdi
  struct wil::details::wnf_subscription_state_base *v7; // rdx
  wil::details *v9[2]; // [rsp+28h] [rbp-49h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v11[15]; // [rsp+40h] [rbp-31h] BYREF

  v11[1] = this;
  v11[0] = &off_1800C5BB0;
  v11[13] = v11;
  v4 = 0LL;
  v5 = (wil::details **)((char *)this + 592);
  if ( (int)wil::details::make_wnf_subscription_state<int>(this, v10, a3, v9) >= 0 )
    v4 = v9[0];
  if ( v5 != v9 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      LOBYTE(v9[0]) = 0;
      HIDWORD(v9[0]) = GetLastError();
      wil::details::delete_wnf_subscription_state(v6, v7);
      wil::last_error_context::~last_error_context((wil::last_error_context *)v9);
    }
    *v5 = v4;
    v4 = 0LL;
  }
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, v3);
  wistd::function<void (int const &)>::~function<void (int const &)>(v10);
  return 0LL;
}
