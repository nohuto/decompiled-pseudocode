/*
 * XREFs of ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1803CE3A8
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1803CBFE8 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z @ 0x1803CE5A0 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z.c)
 *     ?OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppChangedEventArgs@45678@@Z @ 0x1803CE600 (-OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Intern.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801A9ED4 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1803BD100 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
        KeyboardHosting::TabTipAdapter *this,
        unsigned __int16 *a2)
{
  const WCHAR *v4; // r8
  LPCWCH *v5; // rbx
  const WCHAR *v6; // rcx
  _WORD *v7; // rax
  LPCWCH *v8; // rdx
  const char *v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+30h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-40h] BYREF
  LPCWCH lpString2[2]; // [rsp+40h] [rbp-38h] BYREF
  int cchCount2[2]; // [rsp+50h] [rbp-28h]
  unsigned __int64 v17; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)this + 10);
  std::wstring::wstring((__int64)lpString2, a2);
  v4 = (const WCHAR *)lpString2;
  if ( v17 >= 8 )
    v4 = lpString2[0];
  v5 = (LPCWCH *)((char *)this + 320);
  v6 = (const WCHAR *)((char *)this + 320);
  if ( *((_QWORD *)this + 43) >= 8uLL )
    v6 = *v5;
  if ( CompareStringOrdinal(v6, *((_DWORD *)this + 84), v4, cchCount2[0], 1) == 2 )
    goto LABEL_20;
  v7 = (_WORD *)((char *)this + 320);
  if ( *((_QWORD *)this + 43) >= 8uLL )
    v7 = *v5;
  *((_QWORD *)this + 42) = 0LL;
  *v7 = 0;
  if ( v5 != lpString2 )
  {
    v8 = lpString2;
    if ( v17 >= 8 )
      v8 = (LPCWCH *)lpString2[0];
    try
    {
      std::wstring::assign((char *)this + 320, v8, *(unsigned __int64 *)cchCount2);
    }
    catch ( ... )
    {
      v13 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0x5DC,
              (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
              v9);
      std::wstring::_Tidy_deallocate(lpString2);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return v13;
    }
  }
  if ( *((_QWORD *)this + 43) >= 8uLL )
    v5 = (LPCWCH *)*v5;
  v10 = TouchKeyboardExperienceManager::OnInputAppChangeApproved(
          *((RTL_SRWLOCK **)this + 8),
          (const unsigned __int16 *)v5);
  v11 = v10;
  if ( v10 >= 0 )
  {
LABEL_20:
    std::wstring::_Tidy_deallocate(lpString2);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5DD,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v10);
    std::wstring::_Tidy_deallocate(lpString2);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return v11;
  }
}
