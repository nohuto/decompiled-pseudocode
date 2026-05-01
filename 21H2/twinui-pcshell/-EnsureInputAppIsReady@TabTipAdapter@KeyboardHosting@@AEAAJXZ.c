/*
 * XREFs of ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1803CC2B8
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x180068F80 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     _lambda_43e2ea7707e3cc3476f49dcfffc6812f_::operator() @ 0x1800CEE98 (_lambda_43e2ea7707e3cc3476f49dcfffc6812f_--operator().c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1803D0600 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x1803D0880 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1803D1D04 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801AA084 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801BDB48 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1803B8984 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803CCF68 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1803CE678 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1803D27B8 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(KeyboardHosting::TabTipAdapter *this)
{
  int DefaultInputAppId; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  const unsigned __int16 *v5; // rdx
  int IsActivated; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v9[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  unsigned __int64 v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)this + 10);
  if ( !*((_QWORD *)this + 42) )
  {
    v10 = 0LL;
    v11 = 7LL;
    LOWORD(v9[0]) = 0;
    DefaultInputAppId = KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(v9);
    v3 = DefaultInputAppId;
    if ( DefaultInputAppId < 0 )
    {
      v4 = 1752LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)DefaultInputAppId);
      std::wstring::_Tidy_deallocate(v9);
      goto LABEL_18;
    }
    if ( v10 )
    {
      v5 = (const unsigned __int16 *)v9;
      if ( *((_QWORD *)this + 6) )
      {
        if ( v11 >= 8 )
          v5 = v9[0];
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::SetInputAppAUMID(this, v5);
        v3 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v4 = 1758LL;
          goto LABEL_14;
        }
      }
      else
      {
        if ( v11 >= 8 )
          v5 = v9[0];
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(this, v5);
        v3 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v4 = 1762LL;
          goto LABEL_14;
        }
      }
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        1767LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x80004005LL);
    }
    std::wstring::_Tidy_deallocate(v9);
    goto LABEL_17;
  }
  IsActivated = TouchKeyboardExperienceManager::EnsureInputAppIsActivated(*((RTL_SRWLOCK **)this + 8));
  v3 = IsActivated;
  if ( IsActivated >= 0 )
  {
LABEL_17:
    v3 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6ED,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)IsActivated);
LABEL_18:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
