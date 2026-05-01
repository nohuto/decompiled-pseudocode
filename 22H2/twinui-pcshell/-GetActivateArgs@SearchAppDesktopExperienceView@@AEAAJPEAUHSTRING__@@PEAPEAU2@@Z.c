/*
 * XREFs of ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180073944
 * Callers:
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x180073520 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@W4ShellExperienceViewFocusOptions@4567@@Z @ 0x1800C0780 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180276B50 (-MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180018B3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x180073BDC (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800741EC (-BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING_.c)
 *     ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x180075720 (-GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x1800820A4 (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxOnTaskbarCampaign@@@details@wil@@QEAA_NXZ @ 0x1800C0D08 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxOnTaskbarCampa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppDesktopExperienceView::GetActivateArgs(
        SearchAppDesktopExperienceView *this,
        HSTRING a2,
        HSTRING *a3)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  HMONITOR v8; // rax
  HMONITOR v9; // rsi
  unsigned int v10; // ebx
  unsigned int SearchBoxHeight; // r14d
  int v12; // eax
  HRESULT v13; // eax
  __int64 v14; // rdx
  const wchar_t *StringRawBuffer; // rax
  HMONITOR v16; // r8
  const wchar_t *v17; // rbx
  wchar_t *v18; // rax
  HMONITOR v19; // r8
  __m128i v20; // xmm0
  HSTRING newString; // [rsp+20h] [rbp-30h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-28h] BYREF
  UINT32 length; // [rsp+30h] [rbp-20h] BYREF
  RECT rc; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  *a3 = 0LL;
  v6 = *((float *)this + 47);
  rc.left = (int)v6;
  v7 = *((float *)this + 48);
  rc.top = (int)v7;
  rc.right = (int)(float)(v6 + *((float *)this + 49));
  rc.bottom = (int)(float)(v7 + *((float *)this + 50));
  v8 = MonitorFromRect(&rc, 0);
  v9 = v8;
  if ( v8 )
  {
    SearchBoxHeight = SearchAppDesktopExperienceView::GetSearchBoxHeight(this, v8);
    WindowsDeleteString(0LL);
    string2 = 0LL;
    v12 = SearchAppDesktopExperienceView::BuildAdditionalArgsString(
            this,
            v9,
            (ExperienceManagerUtils *)SearchBoxHeight,
            &string2);
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F0,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v12);
LABEL_19:
      ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)&string2);
      return v10;
    }
    WindowsDeleteString(0LL);
    newString = 0LL;
    v13 = WindowsConcatString(a2, string2, &newString);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v13 = WindowsDuplicateString(newString, a3);
      v10 = v13;
      if ( v13 >= 0 )
      {
        length = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(newString, &length);
        v17 = StringRawBuffer;
        if ( StringRawBuffer )
        {
          *((_BYTE *)this + 209) = wcsstr(StringRawBuffer, L"&QuerySource=StartButton") != 0LL;
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxOnTaskbarCampaign>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SearchBoxOnTaskbarCampaign>::GetImpl'::`2'::impl) )
          {
            v18 = wcsstr(v17, L"&QuerySource=TaskBarSearchBoxOnStartup");
            SearchAppDesktopExperienceView::SetExplicitDismissEnabled(this, v18 != 0LL);
          }
        }
        *((float *)this + 45) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                         (ExperienceManagerUtils *)0x140,
                                         (__int64)v9,
                                         v16);
        if ( wcsstr(v17, L"StartMode=QFSearchBox") || wcsstr(v17, L"StartMode=NotificationAnimation") )
          v20 = _mm_cvtsi32_si128(SearchBoxHeight);
        else
          v20 = _mm_cvtsi32_si128(ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x290, (__int64)v9, v19));
        *((_DWORD *)this + 46) = _mm_cvtepi32_ps(v20).m128_u32[0];
        v10 = 0;
        goto LABEL_18;
      }
      v14 = 1524LL;
    }
    else
    {
      v14 = 1523LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v13);
LABEL_18:
    ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)&newString);
    goto LABEL_19;
  }
  v10 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5EC,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL);
  return v10;
}
