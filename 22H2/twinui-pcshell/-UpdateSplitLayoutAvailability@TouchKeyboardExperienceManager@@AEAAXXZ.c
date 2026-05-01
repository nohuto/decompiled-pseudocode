/*
 * XREFs of ?UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5704
 * Callers:
 *     wistd::__function::__func__lambda_2f4db4a43058692750393e9d8cc73c90__void___cdecl(void)_::operator() @ 0x1803B7820 (wistd--__function--__func__lambda_2f4db4a43058692750393e9d8cc73c90__void___cdecl(void)_--operato.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE670 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x1803BA518 (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803D2628 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateSplitLayoutAvailability(KeyboardHosting::TabTipAdapter **this)
{
  int MDMPolicyValue; // eax
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING v7; // rbx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v11; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER v12; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v13; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v9 = 0;
  MDMPolicyValue = TouchKeyboardExperienceManager::GetMDMPolicyValue(
                     (TouchKeyboardExperienceManager *)this,
                     L"TouchKeyboardSplitModeAvailability",
                     (enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *)&v9);
  if ( MDMPolicyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4CE,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)MDMPolicyValue);
  if ( v9 == 2 || IsPPIEdition() )
  {
    v6 = this[86];
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v12, L"0", 2u, 1u);
    v7 = v13;
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_split",
      0x1Au,
      0x19u);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v11, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4D3,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
  else
  {
    v3 = this[86];
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v4 = v11;
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v12, L"KeyboardModeEnabled_split", 0x1Au, 0x19u);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v13, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4D7,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
}
