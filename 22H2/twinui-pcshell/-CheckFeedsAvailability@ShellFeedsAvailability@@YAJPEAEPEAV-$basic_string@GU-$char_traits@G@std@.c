/*
 * XREFs of ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180107128
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1801081B8 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NXZ @ 0x1800C5DF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NXZ.c)
 *     ?IsAuditMode@@YA_NXZ @ 0x180107D18 (-IsAuditMode@@YA_NXZ.c)
 *     ?IsBrowserReplacementFeaturePresent@@YA_NXZ @ 0x180107D88 (-IsBrowserReplacementFeaturePresent@@YA_NXZ.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x180108010 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Feeds_DmaCompliance@@@details@wil@@QEAA_NXZ @ 0x180108554 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Feeds_DmaCompliance@@@details@wil.c)
 *     ?IsEnterprisePolicyEnabled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x18010A34C (-IsEnterprisePolicyEnabled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x18010A3D4 (-IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsFeedsAppInstalled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x180115348 (-IsFeedsAppInstalled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x180115EA8 (-IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18021EE2C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x18026987C (-IsUserOOBE@@YA_NXZ.c)
 */

__int64 __fastcall ShellFeedsAvailability::CheckFeedsAvailability(char *a1, char *a2)
{
  unsigned __int8 *v4; // rdx
  unsigned __int8 *v5; // rdx
  int IsFeedsAppInstalled; // esi
  __int64 v7; // rdx
  char v9; // al
  unsigned __int8 *v10; // rdx
  char v11; // al
  char v12; // al
  bool v13; // al
  char v14; // cl
  char v15; // al
  char v16; // cl
  bool v17; // al
  char v18; // cl
  bool v19; // al
  ShellFeedsAvailabilityHelpers *v20; // rcx
  unsigned __int8 IsTempProfile; // al
  bool v22; // si
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  int v25; // eax
  unsigned int v26; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v28; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0;
  std::wstring::assign(a2, &szAgent, 0LL);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::GetImpl'::`2'::impl) )
  {
    v28 = 0;
    IsFeedsAppInstalled = ShellFeedsAvailabilityHelpers::IsFeedsAppInstalled((ShellFeedsAvailabilityHelpers *)&v28, v4);
    if ( IsFeedsAppInstalled < 0 )
    {
      v7 = 42LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
        (const char *)(unsigned int)IsFeedsAppInstalled);
      return (unsigned int)IsFeedsAppInstalled;
    }
    v9 = v28;
    *a1 = v28;
    if ( !v9 )
      std::wstring::assign(a2, L"AppNotInstalled", 0xFuLL);
    if ( *a1 )
    {
      v28 = 0;
      IsFeedsAppInstalled = ShellFeedsAvailabilityHelpers::IsFeedsAllowedOnSKU(
                              (ShellFeedsAvailabilityHelpers *)&v28,
                              v5);
      if ( IsFeedsAppInstalled < 0 )
      {
        v7 = 52LL;
        goto LABEL_4;
      }
      v11 = v28;
      *a1 = v28;
      if ( !v11 )
        std::wstring::assign(a2, L"NotAllowedOnSKU", 0xFuLL);
      if ( *a1 )
      {
        v28 = 0;
        IsFeedsAppInstalled = ShellFeedsAvailabilityHelpers::IsEnterprisePolicyEnabled(
                                (ShellFeedsAvailabilityHelpers *)&v28,
                                v10);
        if ( IsFeedsAppInstalled < 0 )
        {
          v7 = 63LL;
          goto LABEL_4;
        }
        v12 = v28;
        *a1 = v28;
        if ( !v12 )
          std::wstring::assign(a2, L"DisabledByPolicy", 0x10uLL);
      }
    }
    if ( *a1 )
    {
      v13 = IsShellLauncherEnabledForCurrentUser();
      v14 = !v13;
      *a1 = !v13;
      if ( v13 )
      {
        std::wstring::assign(a2, L"ShellLauncherDisabledForCurrentUser", 0x23uLL);
        v14 = *a1;
      }
      if ( v14 )
      {
        if ( GetSystemMetrics(67) )
        {
          v15 = 1;
          v16 = 0;
        }
        else
        {
          v15 = 0;
          v16 = 1;
        }
        *a1 = v16;
        if ( v15 )
        {
          std::wstring::assign(a2, L"DisabledInSafeMode", 0x12uLL);
          v16 = *a1;
        }
        if ( v16 )
        {
          v17 = IsAuditMode();
          v18 = !v17;
          *a1 = !v17;
          if ( v17 )
          {
            std::wstring::assign(a2, L"DisabledInAuditMode", 0x13uLL);
            v18 = *a1;
          }
          if ( v18 )
          {
            v19 = IsUserOOBE();
            LOBYTE(v20) = !v19;
            *a1 = !v19;
            if ( v19 )
            {
              std::wstring::assign(a2, L"DisabledForOOBE", 0xFuLL);
              LOBYTE(v20) = *a1;
            }
            if ( (_BYTE)v20 )
            {
              IsTempProfile = ShellFeedsAvailabilityHelpers::IsTempProfile(v20);
              *a1 = IsTempProfile == 0;
              if ( IsTempProfile )
                std::wstring::assign(a2, L"DisabledForTempUserProfile", 0x1AuLL);
            }
          }
        }
      }
    }
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Feeds_DmaCompliance>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Feeds_DmaCompliance>::GetImpl'::`2'::impl) )
    {
      v22 = IsBrowserReplacementFeaturePresent();
      v25 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(
              (ShellFeedsExperienceHelpers *)L"IsAnaheimEdgeInstalled",
              (const unsigned __int16 *)v22,
              v23,
              v24);
      v26 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x80,
          (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
          (const char *)(unsigned int)v25);
        return v26;
      }
      if ( *a1 )
      {
        *a1 = v22;
        if ( !v22 )
          std::wstring::assign(a2, L"AnaheimEdgeNotInstalled", 0x17uLL);
      }
    }
  }
  return 0LL;
}
