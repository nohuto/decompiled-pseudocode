/*
 * XREFs of ?NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180010F24
 * Callers:
 *     ?Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180010EB8 (-Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@W4ShellExperienceViewFocusOptions@4567@@Z @ 0x1800C0780 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?PrepareForAppTransition@SearchAppDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1802775A0 (-PrepareForAppTransition@SearchAppDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800111E8 (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Fou.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180018E2C (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x180068834 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x180073BDC (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@QEAA_NXZ @ 0x1800AB6E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@.c)
 *     ?AppendSessonIdToArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800BF3C8 (-AppendSessonIdToArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x1801A7650 (-SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetAddressOf@HString@Wrappers@WRL@Microsoft@@QEAAPEAPEAUHSTRING__@@XZ @ 0x1801A7AE8 (-GetAddressOf@HString@Wrappers@WRL@Microsoft@@QEAAPEAPEAUHSTRING__@@XZ.c)
 *     ??9Wrappers@WRL@Microsoft@@YA_NAEBVHString@012@AEBQEAUHSTRING__@@@Z @ 0x18023A104 (--9Wrappers@WRL@Microsoft@@YA_NAEBVHString@012@AEBQEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SearchAppDesktopExperienceView::NotifyAppWithTransitionType(
        SearchAppDesktopExperienceView *a1,
        __int64 a2,
        __int64 a3,
        HSTRING a4)
{
  HSTRING *AddressOf; // rax
  int appended; // eax
  unsigned int v8; // ebx
  int v9; // eax
  HSTRING v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  struct Windows::Foundation::Collections::IPropertySet *v17; // rbx
  __int64 v18; // rax
  struct Windows::Foundation::Collections::IPropertySet *v20; // [rsp+20h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v21; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v22; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h] BYREF
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v24 = a2;
  v22 = 0LL;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl)
    || (AddressOf = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)&v22),
        appended = SearchAppDesktopExperienceView::AppendSessonIdToArgs(a1, a4, AddressOf),
        v8 = appended,
        appended >= 0) )
  {
    v21 = 0LL;
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v26,
           &v21);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x999,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v9,
        (int)v20);
LABEL_23:
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v21);
      goto LABEL_24;
    }
    v20 = v21;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl) )
    {
      v23 = 0LL;
      if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator!=(&v22, &v23) )
      {
        v10 = v22;
        v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_180509A58);
        v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
                *(HSTRING *)(v11 + 24),
                v10);
        v8 = v12;
        if ( v12 < 0 )
        {
          v13 = 2466LL;
          goto LABEL_20;
        }
      }
      else if ( a4 )
      {
        v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_180509A58);
        v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
                *(HSTRING *)(v14 + 24),
                a4);
        v8 = v12;
        if ( v12 < 0 )
        {
          v13 = 2472LL;
          goto LABEL_20;
        }
      }
    }
    else if ( a4 )
    {
      v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_180509A58);
      v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
              *(HSTRING *)(v15 + 24),
              a4);
      v8 = v12;
      if ( v12 < 0 )
      {
        v13 = 2481LL;
        goto LABEL_20;
      }
    }
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_180509A60);
    v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
            *(HSTRING *)(v16 + 24));
    v8 = v12;
    if ( v12 >= 0 )
    {
      v17 = v21;
      v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v24);
      v12 = SearchAppDesktopExperienceView::NotifyView(a1, *(HSTRING *)(v18 + 24), v17);
      v8 = v12;
      if ( v12 >= 0 )
      {
        v8 = 0;
        goto LABEL_22;
      }
      v13 = 2489LL;
    }
    else
    {
      v13 = 2487LL;
    }
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v12,
      (int)v20);
LABEL_22:
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v20);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x993,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)appended,
    (int)v20);
LABEL_24:
  ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)&v22);
  return v8;
}
