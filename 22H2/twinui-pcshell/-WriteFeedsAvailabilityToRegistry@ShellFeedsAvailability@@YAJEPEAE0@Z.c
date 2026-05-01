/*
 * XREFs of ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1801081B8
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x180102E30 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_180102E30.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1801043A0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1801043A0.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_ResumeCoro$2 @ 0x1801051A0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Tr_ea_1801051A0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800B55E8 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     ??$ShellFeedsLauncher_FeedsEnablementStatus@AEAEPEBGAEAE@ShellFeedsTelemetry@@SAXAEAE$$QEAPEBG0@Z @ 0x180106D20 (--$ShellFeedsLauncher_FeedsEnablementStatus@AEAEPEBGAEAE@ShellFeedsTelemetry@@SAXAEAE$$QEAPEBG0@.c)
 *     ??$call@AEAV_lambda_809d23d5339c6d099369bd39e6bd0e4f_@@@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics@2345@@impl@winrt@@QEAA_NAEAV_lambda_809d23d5339c6d099369bd39e6bd0e4f_@@@Z @ 0x180106DCC (--$call@AEAV_lambda_809d23d5339c6d099369bd39e6bd0e4f_@@@-$factory_cache_entry@UIntegratedService.c)
 *     ?CheckEdgeAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801070B0 (-CheckEdgeAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180107128 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801073BC (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 *     ?CreateEdgeInstallationWatcherIfNecessary@ShellFeedsAvailability@@YAXXZ @ 0x1801074C4 (-CreateEdgeInstallationWatcherIfNecessary@ShellFeedsAvailability@@YAXXZ.c)
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKPEAG@Z @ 0x180107CA0 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKPEAG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180107EFC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAAX.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x180108010 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?SetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBG0K@Z @ 0x180108058 (-SetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBG0K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180108514 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Feeds_DmaCompliance@@@details@wil@@QEAA_NXZ @ 0x180108554 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Feeds_DmaCompliance@@@details@wil.c)
 *     ?ClearRegCampaignSettings@ShellFeedsAvailabilityHelpers@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180108F54 (-ClearRegCampaignSettings@ShellFeedsAvailabilityHelpers@@YAXV-$basic_string@GU-$char_traits@G@st.c)
 *     ?IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ @ 0x18010A1A4 (-IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801C84DC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsAvailability::WriteFeedsAvailabilityToRegistry(
        ShellFeedsAvailability *this,
        bool *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  char v6; // si
  bool IsCTAEnabled; // al
  unsigned int *v8; // r8
  unsigned __int8 v9; // di
  unsigned __int16 *v10; // r8
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  ShellFeedsAvailability *v14; // rcx
  char IsEnabled; // al
  const unsigned __int16 *v16; // rdx
  ShellFeedsExperienceHelpers *v17; // rcx
  unsigned __int16 *v18; // r9
  HWND WindowW; // rbx
  UINT v20; // esi
  const char *v21; // r9
  __int64 v22; // rax
  BYTE *v23; // rdx
  __int64 v24; // rax
  BYTE **v25; // rax
  char v27[8]; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int16 v28[4]; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v29[32]; // [rsp+38h] [rbp-41h] BYREF
  BYTE *lpData[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v31; // [rsp+68h] [rbp-11h]
  unsigned __int64 v32; // [rsp+70h] [rbp-9h]
  unsigned int v33[4]; // [rsp+78h] [rbp-1h] BYREF
  __int128 v34; // [rsp+88h] [rbp+Fh]
  __int64 v35; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v6 = (char)this;
  *a3 = 0;
  v27[0] = 0;
  v31 = 0LL;
  v32 = 7LL;
  LOWORD(lpData[0]) = 0;
  IsCTAEnabled = ShellFeedsAvailabilityHelpers::IsCTAEnabled(this);
  v9 = IsCTAEnabled;
  if ( v6 )
    goto LABEL_8;
  if ( IsCTAEnabled )
  {
    *(_DWORD *)v28 = 0;
    if ( (int)ShellFeedsExperienceHelpers::GetShellFeedsRegKey(
                (ShellFeedsExperienceHelpers *)L"CTACheck",
                (unsigned int *)v28,
                v8) < 0
      || *(_DWORD *)v28 != 1 )
    {
      v27[0] = v9;
      *a3 = v9;
      goto LABEL_21;
    }
  }
  v11 = ShellFeedsAvailability::CheckFeedsAvailability(v27, (char *)lpData);
  v12 = v11;
  if ( v11 >= 0 )
  {
LABEL_8:
    v11 = ShellFeedsAvailability::CheckFeedsServerAvailability(v6, v27, a2, (char *)lpData);
    v12 = v11;
    if ( v11 >= 0 )
    {
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Feeds_DmaCompliance>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Feeds_DmaCompliance>::GetImpl'::`2'::impl)
        || v6 )
      {
        v9 = v27[0];
      }
      else
      {
        v9 = v27[0];
        if ( !v27[0] )
          goto LABEL_22;
        if ( winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::call<_lambda_809d23d5339c6d099369bd39e6bd0e4f_ &>() )
          ShellFeedsAvailability::CreateEdgeInstallationWatcherIfNecessary(v14);
        v11 = ShellFeedsAvailability::CheckEdgeAvailability((unsigned __int8 *)v27, (char *)lpData);
        v12 = v11;
        if ( v11 < 0 )
        {
          v13 = 292LL;
          goto LABEL_33;
        }
        v9 = v27[0];
        byte_180650128 = v27[0];
      }
      if ( !v9 )
        goto LABEL_22;
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl,
        IsEnabled != 0,
        1u);
LABEL_21:
      if ( v9 )
      {
LABEL_23:
        v11 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(
                (ShellFeedsExperienceHelpers *)L"IsFeedsAvailable",
                (const unsigned __int16 *)v9);
        v12 = v11;
        if ( v11 < 0 )
        {
          v13 = 314LL;
          goto LABEL_33;
        }
        if ( !*a3 )
        {
          *(_DWORD *)v28 = 0;
          if ( (int)ShellFeedsExperienceHelpers::GetShellFeedsRegKey(
                      (ShellFeedsExperienceHelpers *)L"CampaignState",
                      (unsigned int *)v28,
                      (unsigned int *)v10) < 0
            || *(_DWORD *)v28 != 2 )
          {
            *(_OWORD *)v33 = 0LL;
            v34 = 0LL;
            v35 = 0LL;
            if ( !v9 )
            {
LABEL_40:
              if ( !v31 )
                goto LABEL_45;
              v23 = (BYTE *)lpData;
              if ( v32 >= 8 )
                v23 = lpData[0];
              ShellFeedsRegistryHelper::SetShellFeedsRegKey(L"DisabledReason", v23, v10);
              v24 = std::wstring::wstring((__int64)v29, L"Feeds unavailable");
              ShellFeedsAvailabilityHelpers::ClearRegCampaignSettings(v24);
LABEL_44:
              if ( v31 )
              {
                v25 = lpData;
                if ( v32 >= 8 )
                  v25 = (BYTE **)lpData[0];
                goto LABEL_48;
              }
LABEL_45:
              v25 = (BYTE **)L"DisabledReasonUnspecified";
LABEL_48:
              *(_QWORD *)v28 = v25;
              ShellFeedsTelemetry::ShellFeedsLauncher_FeedsEnablementStatus<unsigned char &,unsigned short const *,unsigned char &>(
                v27,
                (__int64 *)v28,
                a2);
              v12 = 0;
              goto LABEL_49;
            }
            if ( ShellFeedsExperienceHelpers::GetShellFeedsRegKey(v17, v16, v33, v18) >= 0 && LOWORD(v33[0]) )
            {
              v11 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(
                      (ShellFeedsExperienceHelpers *)L"CampaignState",
                      (const unsigned __int16 *)2);
              v12 = v11;
              if ( v11 < 0 )
              {
                v13 = 325LL;
                goto LABEL_33;
              }
              WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
              v20 = RegisterWindowMessageW(L"TaskbarHeadlines");
              if ( !v20 )
                wil::details::in1diag3::_Log_GetLastError(
                  retaddr,
                  (void *)0x14A,
                  (unsigned int)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
                  v21);
              if ( WindowW )
                PostMessageW(WindowW, v20, 0xCuLL, 0LL);
            }
            else
            {
              v22 = std::wstring::wstring((__int64)v29, L"Registry campaign id unavailable");
              ShellFeedsAvailabilityHelpers::ClearRegCampaignSettings(v22);
            }
          }
        }
LABEL_39:
        if ( v9 )
          goto LABEL_44;
        goto LABEL_40;
      }
LABEL_22:
      if ( *a2 )
        goto LABEL_39;
      goto LABEL_23;
    }
    v13 = 278LL;
  }
  else
  {
    v13 = 276LL;
  }
LABEL_33:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
    (const char *)(unsigned int)v11);
LABEL_49:
  std::wstring::_Tidy_deallocate(lpData);
  return v12;
}
