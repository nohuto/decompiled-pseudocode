/*
 * XREFs of ?OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z @ 0x1803BDC98
 * Callers:
 *     wistd::__function::__func__lambda_b3f750a11065c5dcf19e2d2a348f0727__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1800CFF40 (wistd--__function--__func__lambda_b3f750a11065c5dcf19e2d2a348f0727__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$LockScreenStateChanged@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z @ 0x1800CDE28 (--$LockScreenStateChanged@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z.c)
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x18028EE20 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5804 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803D28F8 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnLockScreenActiveChanged(
        TouchKeyboardExperienceManager *this,
        char a2)
{
  char v3; // dl
  unsigned int v4; // r8d
  KeyboardHosting::TabTipAdapter *v5; // rsi
  const WCHAR *v6; // rax
  HSTRING Reserved1; // rbx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-68h] BYREF
  const WCHAR *v11; // [rsp+28h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-58h] BYREF
  HSTRING v13; // [rsp+48h] [rbp-40h]
  HSTRING_HEADER v14; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  LOBYTE(v10) = a2;
  std::atomic<bool>::operator=((_BYTE *)this + 832, a2);
  v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  if ( v5 )
  {
    v6 = L"1";
    if ( !v3 )
      v6 = L"0";
    v11 = v6;
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, &v11, v4)[1].Reserved.Reserved1;
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"LockScreenState", 0x10u, 0xFu);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v13, Reserved1);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA8F,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability(this);
  }
  TouchKeyboardExperienceTelemetryLogger::LockScreenStateChanged<bool &>((char *)&v10);
  return 0LL;
}
