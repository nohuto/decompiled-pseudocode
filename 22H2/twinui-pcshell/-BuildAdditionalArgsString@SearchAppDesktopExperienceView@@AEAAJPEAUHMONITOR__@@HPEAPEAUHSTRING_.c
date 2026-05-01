/*
 * XREFs of ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800741EC
 * Callers:
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180073944 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001A120 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18001A67C (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x180073BDC (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x1800748D4 (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ?GetHideFileExtensionsEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x180075488 (-GetHideFileExtensionsEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x180075538 (-GetColorPrevalenceEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x1800755E8 (-GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180075698 (-GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ @ 0x1800A1868 (--B-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAA_NXZ @ 0x1800C0C8C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAA_NXZ.c)
 *     ?GetAddressOf@HString@Wrappers@WRL@Microsoft@@QEAAPEAPEAUHSTRING__@@XZ @ 0x1801A7AE8 (-GetAddressOf@HString@Wrappers@WRL@Microsoft@@QEAAPEAPEAUHSTRING__@@XZ.c)
 *     ??$?0$0BE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BE@$$CBG@Z @ 0x1801D5A54 (--$-0$0BE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BE@$$CBG@Z.c)
 *     ?empty@hstring@winrt@@QEBA_NXZ @ 0x18025A740 (-empty@hstring@winrt@@QEBA_NXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x18026434C (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SearchAppDesktopExperienceView::BuildAdditionalArgsString(
        SearchAppDesktopExperienceView *this,
        ExperienceManagerUtils *a2,
        ExperienceManagerUtils *a3,
        HSTRING *newString)
{
  unsigned int v7; // ebx
  HSTRING *AddressOf; // rdi
  HSTRING v9; // rbx
  HRESULT v10; // eax
  SearchAppDesktopExperienceView *v11; // rcx
  unsigned int v12; // ebx
  bool ColorPrevalenceEnabled; // al
  wchar_t *v14; // rcx
  HSTRING *v15; // rbx
  unsigned int v16; // r8d
  HSTRING_HEADER *v17; // rax
  HRESULT v18; // eax
  HRESULT StuckPlace; // eax
  __int64 v20; // rdx
  HSTRING *v21; // rdi
  HSTRING v22; // rbx
  HSTRING *v23; // rax
  HRESULT v24; // eax
  HRESULT IsTraySearchBoxVisible; // eax
  __int64 v26; // rdx
  wchar_t *v27; // rax
  HSTRING *v28; // rbx
  unsigned int v29; // r8d
  HSTRING_HEADER *v30; // rax
  HMONITOR v31; // rax
  HRESULT v32; // eax
  __int64 v33; // rdx
  wchar_t *v34; // rax
  HSTRING *v35; // rbx
  unsigned int v36; // r8d
  HSTRING_HEADER *v37; // rax
  SearchAppDesktopExperienceView *v38; // rcx
  bool AppsUseLightTheme; // al
  wchar_t *v40; // rcx
  HSTRING *v41; // rbx
  unsigned int v42; // r8d
  HSTRING_HEADER *v43; // rax
  HRESULT v44; // eax
  __int64 v45; // rdx
  SearchAppDesktopExperienceView *v46; // rcx
  SearchAppDesktopExperienceView *v47; // rcx
  bool v48; // al
  const WCHAR *v49; // rcx
  HSTRING *v50; // rbx
  unsigned int v51; // r8d
  HSTRING_HEADER *v52; // rax
  HRESULT v53; // eax
  HSTRING *v54; // rdi
  unsigned int v55; // r8d
  HSTRING Reserved1; // rbx
  __int64 v57; // rax
  HRESULT v58; // eax
  __int64 v59; // rdx
  bool HideFileExtensionsEnabled; // al
  unsigned int v62; // r8d
  const WCHAR *v63; // rcx
  HSTRING_HEADER *v64; // rax
  bool v65; // al
  unsigned int v66; // r8d
  const WCHAR *v67; // rcx
  HSTRING_HEADER *v68; // rax
  bool v69; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING v70; // [rsp+28h] [rbp-D8h] BYREF
  const WCHAR *v71; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v72; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v73; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v74; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v75; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v76; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v77; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING string2; // [rsp+68h] [rbp-98h] BYREF
  HSTRING v79; // [rsp+70h] [rbp-90h] BYREF
  HSTRING v80; // [rsp+78h] [rbp-88h] BYREF
  HSTRING_HEADER v81; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string1; // [rsp+B8h] [rbp-48h]
  WCHAR sourceString[40]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v85[40]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  *newString = 0LL;
  v80 = 0LL;
  v7 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)a3, a2, (HMONITOR)a3);
  memset_0(sourceString, 0, 0x44uLL);
  _o__itow_s(v7, sourceString, 34LL, 10LL);
  AddressOf = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)&v80);
  v9 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v81, sourceString) + 24);
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&SpeechTextInputHeight=", 0x18u, 0x17u);
  v10 = WindowsConcatString(string1, v9, AddressOf);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v79 = 0LL;
    ColorPrevalenceEnabled = SearchAppDesktopExperienceView::GetColorPrevalenceEnabled(v11);
    v14 = L"&ColorPrevalenceEnabled=true";
    if ( !ColorPrevalenceEnabled )
      v14 = L"&ColorPrevalenceEnabled=false";
    v70 = (HSTRING)v14;
    v15 = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)&v79);
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v81, (const WCHAR **)&v70, v16);
    v18 = WindowsConcatString(v80, (HSTRING)v17[1].Reserved.Reserved1, v15);
    v12 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x570,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v18);
LABEL_52:
      ExperienceManagerUtils::CopyableHString::~CopyableHString(&v79);
      goto LABEL_53;
    }
    string2 = 0LL;
    StuckPlace = SearchAppDesktopExperienceView::GetStuckPlace(this, (HMONITOR)a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v74);
    v12 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v20 = 1397LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)StuckPlace);
LABEL_51:
      ExperienceManagerUtils::CopyableHString::~CopyableHString(&string2);
      goto LABEL_52;
    }
    memset_0(v85, 0, 0x44uLL);
    _o__itow_s(v74, v85, 34LL, 10LL);
    v21 = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)&string2);
    v22 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v81, v85) + 24);
    string1 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&TaskbarOrientation=", 0x15u, 0x14u);
    StuckPlace = WindowsConcatString(string1, v22, v21);
    v12 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v20 = 1400LL;
      goto LABEL_11;
    }
    v77 = 0LL;
    v23 = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)&v77);
    v24 = WindowsConcatString(v79, string2, v23);
    v12 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v24);
LABEL_50:
      ExperienceManagerUtils::CopyableHString::~CopyableHString(&v77);
      goto LABEL_51;
    }
    v76 = 0LL;
    IsTraySearchBoxVisible = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, (HMONITOR)a2, &v69);
    v12 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v26 = 1408LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)IsTraySearchBoxVisible);
LABEL_49:
      ExperienceManagerUtils::CopyableHString::~CopyableHString(&v76);
      goto LABEL_50;
    }
    v27 = L"&SearchBoxInTaskbar=true";
    if ( !v69 )
      v27 = L"&SearchBoxInTaskbar=false";
    v70 = (HSTRING)v27;
    v28 = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)&v76);
    v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v81, (const WCHAR **)&v70, v29);
    IsTraySearchBoxVisible = WindowsConcatString(v77, (HSTRING)v30[1].Reserved.Reserved1, v28);
    v12 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v26 = 1410LL;
      goto LABEL_20;
    }
    v75 = 0LL;
    v70 = 0LL;
    v31 = MonitorFromPoint(0LL, 1u);
    v32 = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v31, &v69);
    v12 = v32;
    if ( v32 < 0 )
    {
      v33 = 1417LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v33,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v32);
LABEL_48:
      ExperienceManagerUtils::CopyableHString::~CopyableHString(&v75);
      goto LABEL_49;
    }
    v34 = L"&SearchBoxInTaskbarPrimaryMonitor=true";
    if ( !v69 )
      v34 = L"&SearchBoxInTaskbarPrimaryMonitor=false";
    v70 = (HSTRING)v34;
    v35 = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)&v75);
    v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v81, (const WCHAR **)&v70, v36);
    v32 = WindowsConcatString(v76, (HSTRING)v37[1].Reserved.Reserved1, v35);
    v12 = v32;
    if ( v32 < 0 )
    {
      v33 = 1419LL;
      goto LABEL_27;
    }
    v72 = 0LL;
    AppsUseLightTheme = SearchAppDesktopExperienceView::GetAppsUseLightTheme(v38);
    v40 = L"&AppsUseLightTheme=true";
    if ( !AppsUseLightTheme )
      v40 = L"&AppsUseLightTheme=false";
    v70 = (HSTRING)v40;
    v41 = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)&v72);
    v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v81, (const WCHAR **)&v70, v42);
    v44 = WindowsConcatString(v75, (HSTRING)v43[1].Reserved.Reserved1, v41);
    v12 = v44;
    if ( v44 < 0 )
    {
      v45 = 1424LL;
LABEL_62:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v45,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v44);
      goto LABEL_47;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49219968>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49219968>::GetImpl'::`2'::impl) )
    {
      if ( !(unsigned __int8)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator bool((char *)this + 328)
        || winrt::hstring::empty((SearchAppDesktopExperienceView *)((char *)this + 336)) )
      {
        HideFileExtensionsEnabled = SearchAppDesktopExperienceView::GetHideFileExtensionsEnabled(v47);
        v63 = L"&HideFileExtensions=true";
        if ( !HideFileExtensionsEnabled )
          v63 = L"&HideFileExtensions=false";
        v71 = v63;
        v64 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v81, &v71, v62);
        v44 = WindowsConcatString(v72, (HSTRING)v64[1].Reserved.Reserved1, newString);
        v12 = v44;
        if ( v44 < 0 )
        {
          v45 = 1445LL;
          goto LABEL_62;
        }
      }
      else
      {
        v70 = 0LL;
        v48 = SearchAppDesktopExperienceView::GetHideFileExtensionsEnabled(v47);
        v49 = L"&HideFileExtensions=true";
        if ( !v48 )
          v49 = L"&HideFileExtensions=false";
        v71 = v49;
        v50 = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)&v70);
        v52 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v81, &v71, v51);
        v53 = WindowsConcatString(v72, (HSTRING)v52[1].Reserved.Reserved1, v50);
        v12 = v53;
        if ( v53 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59A,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
            (const char *)(unsigned int)v53);
LABEL_44:
          ExperienceManagerUtils::CopyableHString::~CopyableHString(&v70);
LABEL_47:
          ExperienceManagerUtils::CopyableHString::~CopyableHString(&v72);
          goto LABEL_48;
        }
        v73 = 0LL;
        v54 = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)&v73);
        v71 = winrt::hstring::c_str((SearchAppDesktopExperienceView *)((char *)this + 336));
        Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v81, &v71, v55)[1].Reserved.Reserved1;
        v57 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
                (const unsigned __int16 (*)[20])L"&SearchInputTestId=");
        v58 = WindowsConcatString(*(HSTRING *)(v57 + 24), Reserved1, v54);
        v12 = v58;
        if ( v58 < 0 )
        {
          v59 = 1438LL;
LABEL_43:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v59,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
            (const char *)(unsigned int)v58);
          ExperienceManagerUtils::CopyableHString::~CopyableHString(&v73);
          goto LABEL_44;
        }
        v58 = WindowsConcatString(v70, v73, newString);
        v12 = v58;
        if ( v58 < 0 )
        {
          v59 = 1439LL;
          goto LABEL_43;
        }
        ExperienceManagerUtils::CopyableHString::~CopyableHString(&v73);
        ExperienceManagerUtils::CopyableHString::~CopyableHString(&v70);
      }
    }
    else
    {
      v65 = SearchAppDesktopExperienceView::GetHideFileExtensionsEnabled(v46);
      v67 = L"&HideFileExtensions=true";
      if ( !v65 )
        v67 = L"&HideFileExtensions=false";
      v71 = v67;
      v68 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v81, &v71, v66);
      v44 = WindowsConcatString(v72, (HSTRING)v68[1].Reserved.Reserved1, newString);
      v12 = v44;
      if ( v44 < 0 )
      {
        v45 = 1452LL;
        goto LABEL_62;
      }
    }
    v12 = 0;
    goto LABEL_47;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x56B,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v10);
LABEL_53:
  ExperienceManagerUtils::CopyableHString::~CopyableHString(&v80);
  return v12;
}
