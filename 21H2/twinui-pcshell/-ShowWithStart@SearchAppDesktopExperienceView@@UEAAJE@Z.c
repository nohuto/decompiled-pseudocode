/*
 * XREFs of ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x180073520
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800120FC (-ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180017624 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180019DB0 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800736CC (--1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800736F8 (-StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180073944 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x180073BDC (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180075778 (-PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_51607638@@@details@wil@@QEAA_NXZ @ 0x1800C0CEC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_51607638@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchAppDesktopExperienceView::ShowWithStart(SearchAppDesktopExperienceView *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int ActivateArgs; // eax
  __int64 v7; // rdx
  WINBOOL v8; // edx
  HSTRING v10; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING v12; // [rsp+40h] [rbp-C0h]
  _QWORD v13[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"CortanaExperienceManager_ShowWithStart");
  v13[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)v13);
  *((_BYTE *)this + 184) = 0;
  *((_BYTE *)this + 187) = 0;
  v4 = SearchAppDesktopExperienceView::PositionAlongsideStart((SearchAppDesktopExperienceView *)((char *)this - 24));
  v5 = v4;
  if ( v4 >= 0 )
  {
    WindowsDeleteString(0LL);
    v10 = 0LL;
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"StartMode=QFSearchBox&QuerySource=StartButton&Positioner=desktop",
      0x41u,
      0x40u);
    ActivateArgs = SearchAppDesktopExperienceView::GetActivateArgs(
                     (SearchAppDesktopExperienceView *)((char *)this - 24),
                     v12,
                     &v10);
    v5 = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      *((_BYTE *)this + 181) = 1;
      ActivateArgs = SearchAppDesktopExperienceView::ShowInternal((__int64)this - 24, v10, a2 != 0, 0);
      v5 = ActivateArgs;
      if ( ActivateArgs >= 0 )
      {
        *((_BYTE *)this + 185) = 1;
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_51607638>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_51607638>::GetImpl'::`2'::impl) )
          *((_BYTE *)this + 328) = 1;
        wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v13,
          v8);
        v5 = 0;
        goto LABEL_11;
      }
      v7 = 733LL;
    }
    else
    {
      v7 = 726LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
LABEL_11:
    ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)&v10);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D3,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
LABEL_12:
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::~CortanaExperienceManager_ShowWithStart((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)v13);
  return v5;
}
