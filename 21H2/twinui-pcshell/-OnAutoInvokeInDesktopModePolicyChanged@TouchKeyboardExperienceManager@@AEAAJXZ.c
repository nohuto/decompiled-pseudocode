/*
 * XREFs of ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803BCBF8
 * Callers:
 *     wistd::__function::__func__lambda_edfa87154d4419f32789f6af8f0c9ad1__void___cdecl(void)_::operator() @ 0x1800CFF60 (wistd--__function--__func__lambda_edfa87154d4419f32789f6af8f0c9ad1__void___cdecl(void)_--operato.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800D16F4 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     wil::details::ScopeExitFn__lambda_d55ace93356a9bfecbc3c437d59c2e3e___::_ScopeExitFn__lambda_d55ace93356a9bfecbc3c437d59c2e3e___ @ 0x1800CEABC (wil--details--ScopeExitFn__lambda_d55ace93356a9bfecbc3c437d59c2e3e___--_ScopeExitFn__lambda_d55a.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnAutoInvokeInDesktopModePolicyChanged(
        TouchKeyboardExperienceManager *this)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v4; // [rsp+30h] [rbp-18h] BYREF
  char v5; // [rsp+38h] [rbp-10h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 86) )
  {
    v3[0] = 1;
    v3[1] = 2;
    v6 = 0LL;
    v4 = &v6;
    v5 = 1;
    if ( (int)PolicyManager_GetPolicy(L"TextInput", L"EnableTouchKeyboardAutoInvokeInDesktopMode", v3, &v6) >= 0 )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 86) + 104LL) + 511LL) = *(_DWORD *)(v6 + 16) != 0;
    wil::details::ScopeExitFn__lambda_d55ace93356a9bfecbc3c437d59c2e3e___::_ScopeExitFn__lambda_d55ace93356a9bfecbc3c437d59c2e3e___((__int64)&v4);
  }
  return 0LL;
}
