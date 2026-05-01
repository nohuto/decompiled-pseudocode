/*
 * XREFs of ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027EC10
 * Callers:
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x18027AA50 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18027E180 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?StartActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800174B0 (-StartActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180017624 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ??1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180017890 (--1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180018B3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180019DB0 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002AEEC (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??_9type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BFI@AA @ 0x1801625A0 (--_9type@-$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BFI@AA.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BMI@AA @ 0x1801658DC (--_9IPropertyValue@Foundation@Windows@@$BMI@AA.c)
 *     ?CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@XZ @ 0x18027A398 (-CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA-AUtagRECT@@XZ.c)
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x18027B1F8 (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x18027CAE0 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18027CCD8 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F528 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18028035C (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x18028164C (-UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CortanaDesktopExperienceView::OnViewPropertiesChanging(CortanaDesktopExperienceView *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // r14d
  HSTRING v7; // rbx
  int PropVal; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // r15d
  HSTRING v12; // rbx
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  HSTRING v16; // rbx
  int v17; // eax
  int v18; // eax
  CortanaFlightingHelpers *v19; // rcx
  unsigned __int8 v20; // bl
  bool v21; // di
  int v22; // eax
  HMONITOR v23; // rbx
  HMONITOR v24; // r8
  HMONITOR v25; // r8
  char IsViewVisible; // al
  int v27; // eax
  WINBOOL v28; // edx
  int v29; // eax
  int v31; // eax
  struct Windows::Foundation::IPropertyValue *v32; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  RECT rc; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+48h] [rbp-B8h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v38; // [rsp+70h] [rbp-90h]
  _QWORD v39[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v39,
    (__int64)"CortanaExperienceManager_OnViewPropertiesChanging");
  v39[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v39);
  v34 = 0LL;
  v2 = *((_QWORD *)this + 21);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 64LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  v4 = v3(v2, &v34);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v33 = v34;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
    v6 = *((_DWORD *)this + 36);
    v38 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WindowMode", 0xBu, 0xAu);
    v7 = v38;
    LODWORD(v32) = 0;
    *(_QWORD *)&rc.left = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&rc.left);
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
                v7,
                (struct Windows::Foundation::IPropertyValue **)&rc);
    if ( PropVal >= 0 )
    {
      v9 =  winrt::impl::abi<winrt::WindowsUdk::UI::StartScreen::ITileCollection,void>::type::`vcall'{88,{flat}}(*(__int64 *)&rc.left);
      PropVal = v9;
      if ( v9 >= 0 )
        PropVal = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&rc.left);
    v10 = (int)v32;
    if ( PropVal < 0 )
      v10 = 0;
    *((_DWORD *)this + 36) = v10;
    v11 = *((_DWORD *)this + 35);
    v38 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ViewMode", 9u, 8u);
    v12 = v38;
    LODWORD(v32) = 0;
    *(_QWORD *)&rc.left = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&rc.left);
    v13 = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
            v12,
            (struct Windows::Foundation::IPropertyValue **)&rc);
    if ( v13 >= 0 )
    {
      v14 =  winrt::impl::abi<winrt::WindowsUdk::UI::StartScreen::ITileCollection,void>::type::`vcall'{88,{flat}}(*(__int64 *)&rc.left);
      v13 = v14;
      if ( v14 >= 0 )
        v13 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&rc.left);
    v15 = (int)v32;
    if ( v13 < 0 )
      v15 = 0;
    *((_DWORD *)this + 35) = v15;
    v38 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ClippingRect", 0xDu, 0xCu);
    v16 = v38;
    v36 = 0LL;
    v32 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v32);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
                v16,
                &v32) >= 0 )
    {
      v17 =  Windows::Foundation::IPropertyValue::`vcall'{200,{flat}}((__int64)v32);
      if ( v17 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v17);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v32);
    v18 = (int)*(float *)&v36;
    *((_DWORD *)this + 37) = (int)*(float *)&v36;
    v19 = (CortanaFlightingHelpers *)(unsigned int)(int)*((float *)&v36 + 1);
    *((_DWORD *)this + 38) = (_DWORD)v19;
    *((_DWORD *)this + 39) = (int)(float)((float)v18 + *((float *)&v36 + 2));
    *((_DWORD *)this + 40) = (int)(float)((float)(int)v19 + *((float *)&v36 + 3));
    v20 = *((_DWORD *)this + 36) != 3;
    if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v19) && *((_DWORD *)this + 35) == 6 )
      v20 = 0;
    v21 = 0;
    v22 = *((_DWORD *)this + 36);
    if ( v6 == 9 )
    {
      if ( v22 != 9 )
      {
        v21 = 1;
        *((_BYTE *)this + 257) = 0;
      }
    }
    else if ( v22 == 9 )
    {
      *((_BYTE *)this + 257) = 1;
    }
    CortanaDesktopExperienceView::UpdateSuggestionsShowing(this, v20);
    if ( *((_BYTE *)this + 296) )
    {
      CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(this, &rc);
      v23 = MonitorFromRect(&rc, 0);
      *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x1AC,
                                       (__int64)v23,
                                       v24);
      *((float *)this + 54) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x1EC,
                                       (__int64)v23,
                                       v25);
    }
    else
    {
      v31 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 48LL))(
              *((_QWORD *)this + 21),
              (char *)this + 212);
      v5 = v31;
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x563,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v31);
LABEL_35:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
        goto LABEL_36;
      }
    }
    IsViewVisible = CortanaDesktopExperienceView::IsViewVisible(this);
    v27 = CortanaDesktopExperienceView::PositionCortanaWindow(this, IsViewVisible, v21);
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x565,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v27);
    if ( v11 == 3 )
    {
      CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
      if ( *((_DWORD *)this + 35) == 4 )
      {
        v29 = CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded(this);
        if ( v29 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x573,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v29);
      }
    }
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v39,
      v28);
    v5 = 0;
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x52C,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
LABEL_36:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::~CortanaExperienceManager_OnViewPropertiesChanging((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v39);
  return v5;
}
