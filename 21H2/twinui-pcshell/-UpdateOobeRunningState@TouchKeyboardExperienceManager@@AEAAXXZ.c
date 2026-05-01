/*
 * XREFs of ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5724
 * Callers:
 *     ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x1803BE8B0 (-OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE940 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?IsAnyOOBE@@YA_NXZ @ 0x1803BB7B4 (-IsAnyOOBE@@YA_NXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803D28F8 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchKeyboardExperienceManager::UpdateOobeRunningState(TouchKeyboardExperienceManager *this)
{
  char v2; // al
  unsigned int v3; // r8d
  const WCHAR *v4; // rdx
  KeyboardHosting::TabTipAdapter *v5; // rdi
  HSTRING Reserved1; // rbx
  int v7; // eax
  int v8[2]; // [rsp+20h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-50h] BYREF
  HSTRING v10; // [rsp+40h] [rbp-38h]
  HSTRING_HEADER v11; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = IsAnyOOBE();
  v4 = L"0";
  if ( !v2 )
    v4 = L"1";
  *(_QWORD *)v8 = v4;
  v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v11, (const WCHAR **)v8, v3)[1].Reserved.Reserved1;
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsOobeCompleted", 0x10u, 0xFu);
  v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v10, Reserved1);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5A8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
}
