/*
 * XREFs of ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4BAC
 * Callers:
 *     wistd::__function::__func__lambda_2d0401a0802d62c4237ed0fa9c7fea3c__void___cdecl(void)_::operator() @ 0x1803B7AE0 (wistd--__function--__func__lambda_2d0401a0802d62c4237ed0fa9c7fea3c__void___cdecl(void)_--operato.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE940 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x1803BA7E8 (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1803BB880 (-IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1803BBAA8 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803D28F8 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1804E8004 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall TouchKeyboardExperienceManager::UpdateFullLayoutAvailability(KeyboardHosting::TabTipAdapter **this)
{
  int MDMPolicyValue; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  KeyboardHosting::TabTipAdapter *v4; // rdi
  HSTRING v5; // rbx
  int v6; // eax
  KeyboardHosting::TabTipAdapter *v7; // rdi
  HSTRING v8; // rbx
  int v9; // eax
  KeyboardHosting::TabTipAdapter *v10; // rdi
  HSTRING v11; // rbx
  int v12; // eax
  KeyboardHosting::TabTipAdapter *v13; // rdi
  HSTRING v14; // rbx
  int v15; // eax
  int v16; // [rsp+28h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-21h] BYREF
  HSTRING v18; // [rsp+48h] [rbp-9h]
  HSTRING_HEADER v19; // [rsp+50h] [rbp-1h] BYREF
  HSTRING v20; // [rsp+68h] [rbp+17h]
  HSTRING_HEADER v21; // [rsp+70h] [rbp+1Fh] BYREF
  HSTRING v22; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v16 = 0;
  MDMPolicyValue = TouchKeyboardExperienceManager::GetMDMPolicyValue(
                     (TouchKeyboardExperienceManager *)this,
                     L"TouchKeyboardFullModeAvailability",
                     (enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *)&v16);
  if ( MDMPolicyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x476,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)MDMPolicyValue);
  if ( v16 == 2
    || !v16
    && ((unsigned int)IsUserAssignedAccessSingleApp(-4LL)
     || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v3))
    && !TouchKeyboardExperienceManager::IsCompatibilityKeyboardEnabled(v3)
    || IsPPIEdition() )
  {
    v10 = this[86];
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v11 = v18;
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v19, L"KeyboardModeEnabled_full", 0x19u, 0x18u);
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(v10, v20, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x47F,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    v20 = 0LL;
    v18 = 0LL;
    v13 = this[86];
    v22 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v21, L"0", 2u, 1u);
    v14 = v22;
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v19, L"KeyboardModeEnabled_full106", 0x1Cu, 0x1Bu);
    v15 = KeyboardHosting::TabTipAdapter::SetShellPreference(v13, v20, v14);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x480,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
  }
  else
  {
    v4 = this[86];
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v5 = v18;
    v22 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v21, L"KeyboardModeEnabled_full", 0x19u, 0x18u);
    v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v22, v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x484,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    v22 = 0LL;
    v18 = 0LL;
    v7 = this[86];
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v19, L"1", 2u, 1u);
    v8 = v20;
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_full106",
      0x1Cu,
      0x1Bu);
    v9 = KeyboardHosting::TabTipAdapter::SetShellPreference(v7, v18, v8);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x485,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    v18 = 0LL;
    v20 = 0LL;
  }
}
