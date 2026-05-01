/*
 * XREFs of ?OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800C3F40
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180018E2C (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x1800689F8 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180068B18 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUUISettings@ViewManagement@UI@Windows@2@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@Z @ 0x1800C1A08 (--$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@-$factory_cache_entry@UUISettings@ViewMa.c)
 *     ?GetAppsUseLightTheme@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x1800C2AB0 (-GetAppsUseLightTheme@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1800C2C84 (-GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorValue@?$consume_Windows_UI_ViewManagement_IUISettings3@UUISettings@ViewManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AUColor@UI@Windows@3@AEBW4UIColorType@ViewManagement@563@@Z @ 0x1800C2D54 (-GetColorValue@-$consume_Windows_UI_ViewManagement_IUISettings3@UUISettings@ViewManagement@UI@Wi.c)
 *     ?NotifyShellModeChanged@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C3C68 (-NotifyShellModeChanged@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C3EA4 (-NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z @ 0x180276AD8 (-IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::OnMessage(
        ShellFeedsDesktopExperienceView *this,
        int a2,
        char *a3,
        __int64 a4)
{
  ShellFeedsDesktopExperienceView *v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  CortanaDesktopExperienceView *v10; // rcx
  char v11; // bl
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  __int64 v14; // r8
  int v15; // eax
  ShellFeedsDesktopExperienceView *v16; // rcx
  __int64 v17; // rdx
  char v18; // bl
  unsigned int v19; // r8d
  HSTRING_HEADER *v20; // rax
  __int64 v21; // r8
  unsigned int v22; // r8d
  unsigned int v23; // ebx
  HSTRING_HEADER *v24; // rax
  __int64 v25; // r8
  struct Windows::Foundation::Collections::IPropertySet *v26; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v27[8]; // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v28; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown v29; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( a2 != 1025 )
  {
    if ( a2 != 26 || !CImmersiveColor::IsColorSchemeChangeMessage(0x1Au, a4) )
      return 0LL;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_f92aa4e0a61c3892856266e5a8e834f7_ &>(
      v8,
      &v29);
    LODWORD(v26) = 5;
    winrt::impl::consume_Windows_UI_ViewManagement_IUISettings3<winrt::Windows::UI::ViewManagement::UISettings>::GetColorValue(
      &v29,
      (__int64)v27,
      (unsigned int *)&v26);
    v28 = 0LL;
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v31,
           &v28);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v26 = v28;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
      v11 = CortanaDesktopExperienceView::GetColorPrevalenceEnabled(v10) != 0;
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const WCHAR **)off_180509A78,
              v12);
      v15 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
              (HSTRING)v13[1].Reserved.Reserved1,
              v14,
              v11);
      v6 = v15;
      if ( v15 >= 0 )
      {
        v18 = ShellFeedsDesktopExperienceView::GetAppsUseLightTheme(v16) != 0;
        v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &hstringHeader,
                (const WCHAR **)off_180509A70,
                v19);
        v15 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                (HSTRING)v20[1].Reserved.Reserved1,
                v21,
                v18);
        v6 = v15;
        if ( v15 >= 0 )
        {
          v23 = v27[1] | ((v27[2] | ((v27[3] | (v27[0] << 8)) << 8)) << 8);
          v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  &hstringHeader,
                  (const WCHAR **)off_180509A90,
                  v22);
          v15 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                  (HSTRING)v24[1].Reserved.Reserved1,
                  v25,
                  v23);
          v6 = v15;
          if ( v15 >= 0 )
          {
            v15 = ShellFeedsDesktopExperienceView::NotifyView(
                    (ShellFeedsDesktopExperienceView *)((char *)this - 32),
                    L"NotifyThemeChange",
                    v28);
            v6 = v15;
            if ( v15 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
              winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v29);
              return 0LL;
            }
            v17 = 523LL;
          }
          else
          {
            v17 = 522LL;
          }
        }
        else
        {
          v17 = 521LL;
        }
      }
      else
      {
        v17 = 520LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x205,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v29);
    return v6;
  }
  v5 = (ShellFeedsDesktopExperienceView *)((char *)this - 32);
  if ( a3 == (char *)v5 )
  {
    if ( (_WORD)a4 )
    {
      v6 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      return v6;
    }
    *((_BYTE *)v5 + 156) = WORD1(a4) != 0;
    ShellFeedsDesktopExperienceView::NotifyShellModeChanged(v5);
  }
  return 0LL;
}
