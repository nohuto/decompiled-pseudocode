/*
 * XREFs of ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4C00
 * Callers:
 *     wistd::__function::__func__lambda_0160c1676dac5054a5ed0e512f7ab1af__void___cdecl(void)_::operator() @ 0x1803B77F0 (wistd--__function--__func__lambda_0160c1676dac5054a5ed0e512f7ab1af__void___cdecl(void)_--operato.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE670 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x1803BA518 (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EICinTIConDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BF470 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EICinTIConDesktop@@@details@wil@@QEAAX_NW.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803D2628 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall TouchKeyboardExperienceManager::UpdateHandwritingAvailability(KeyboardHosting::TabTipAdapter **this)
{
  int MDMPolicyValue; // eax
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  __int64 v6; // r8
  KeyboardHosting::TabTipAdapter *v7; // rdi
  HSTRING v8; // rbx
  int v9; // eax
  KeyboardHosting::TabTipAdapter *v10; // rdi
  HSTRING v11; // rbx
  int v12; // eax
  KeyboardHosting::TabTipAdapter *v13; // rdi
  HSTRING v14; // rbx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v18; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER v19; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v20; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v16 = 0;
  MDMPolicyValue = TouchKeyboardExperienceManager::GetMDMPolicyValue(
                     (TouchKeyboardExperienceManager *)this,
                     L"TouchKeyboardHandwritingModeAvailability",
                     (enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *)&v16);
  if ( MDMPolicyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4B2,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)MDMPolicyValue);
  v3 = this[86];
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
  v4 = v18;
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v19,
    L"KeyboardModeEnabled_handwritinglinenarrow",
    0x2Au,
    0x29u);
  v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v20, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4B5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  if ( v16 == 2 )
  {
    v7 = this[86];
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v19, L"0", 2u, 1u);
    v8 = v20;
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_handwritingline",
      0x24u,
      0x23u);
    v9 = KeyboardHosting::TabTipAdapter::SetShellPreference(v7, v18, v8);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4BA,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EICinTIConDesktop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_EICinTIConDesktop>::GetImpl'::`2'::impl,
      0,
      v6);
    v10 = this[86];
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v19, L"1", 2u, 1u);
    v11 = v20;
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_handwritingline",
      0x24u,
      0x23u);
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(v10, v18, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C5,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    v13 = this[86];
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v19, L"handwritingline", 0x10u, 0xFu);
    v14 = v20;
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DefaultPenKeyboardMode", 0x17u, 0x16u);
    v15 = KeyboardHosting::TabTipAdapter::SetShellPreference(v13, v18, v14);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C6,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
  }
}
