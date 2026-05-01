/*
 * XREFs of ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C4B98
 * Callers:
 *     ?OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800C4200 (-OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@I.c)
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x18000FC9C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_18000FC9C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011F50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180018E2C (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x18001B644 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180068B18 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGPEAK@Z @ 0x1800B5630 (-GetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGPEAK@Z.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6964 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$ShellFeedsDesktopExperienceView_TaskbarOrientation@AEAW4EDGEUI_TRAYSTUCKPLACE@@@ShellFeedsTelemetry@@SAXAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800C187C (--$ShellFeedsDesktopExperienceView_TaskbarOrientation@AEAW4EDGEUI_TRAYSTUCKPLACE@@@ShellFeedsTel.c)
 *     ??$ShellFeedsDesktopExperienceView_UncloakAnimation@AEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShellFeedsTelemetry@@SAXAEAJ0000000@Z @ 0x1800C18EC (--$ShellFeedsDesktopExperienceView_UncloakAnimation@AEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShellFeedsT.c)
 *     ?GetAnimationClipRect@ShellFeedsDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1800C2914 (-GetAnimationClipRect@ShellFeedsDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800C3404 (-GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 *     ?HookKeyboard@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C35E0 (-HookKeyboard@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?HookMouse@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C3690 (-HookMouse@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z @ 0x1800C3DB8 (-NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z.c)
 *     ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C3EA4 (-NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C50CC (-PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRight@@@details@wil@@QEAA_NXZ @ 0x1800C5E38 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlid.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellFeedsDesktopExperienceView::OnViewUncloaking(UINT *this)
{
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  __int64 v4; // r9
  int v5; // eax
  ShellFeedsDesktopExperienceView *v6; // rcx
  signed int v7; // eax
  ShellFeedsDesktopExperienceView *v8; // rcx
  signed int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  __int64 v14; // r8
  int AnimationClipRect; // eax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // edi
  UINT v19; // ecx
  UINT v20; // ecx
  UINT v21; // ecx
  unsigned int *v22; // r8
  unsigned int *v23; // r8
  _DWORD *v24; // rbx
  unsigned int *v25; // r8
  int IsThreadRTL; // eax
  int v27; // edx
  LONG v28; // ecx
  __int64 *ViewWrapper; // rax
  int v30; // eax
  __int64 *v31; // rax
  int v32; // eax
  __int64 *v33; // rax
  int v34; // eax
  BYTE v36[4]; // [rsp+48h] [rbp-29h] BYREF
  BYTE v37[4]; // [rsp+4Ch] [rbp-25h] BYREF
  BYTE Data[8]; // [rsp+50h] [rbp-21h] BYREF
  int v39[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v40; // [rsp+60h] [rbp-11h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v41[2]; // [rsp+68h] [rbp-9h] BYREF
  struct tagRECT rcDst; // [rsp+78h] [rbp+7h] BYREF
  HSTRING_HEADER rc; // [rsp+88h] [rbp+17h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && tlgKeywordOn((__int64)v2, 0x200000000000LL) )
  {
    *(_QWORD *)v39 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v3,
      (int)&unk_180580401,
      0,
      v4,
      (__int64)v39);
  }
  v5 = ShellFeedsDesktopExperienceView::NotifyTrayOfFlyoutVisibility(this, 1u);
  v6 = retaddr;
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v5);
  v7 = ShellFeedsDesktopExperienceView::HookMouse(v6);
  v8 = retaddr;
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v7);
  v9 = ShellFeedsDesktopExperienceView::HookKeyboard(v8);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v9);
  v41[0] = 0LL;
  v44 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &rc,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          v44,
          v41);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *(struct Windows::Foundation::Collections::IPropertySet **)v39 = v41[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v39);
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&rc, (const WCHAR **)off_180509A88, v12);
    AnimationClipRect = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)v39,
                          (HSTRING)v13[1].Reserved.Reserved1,
                          v14,
                          1);
    v11 = AnimationClipRect;
    if ( AnimationClipRect < 0 )
    {
      v16 = 739LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)AnimationClipRect);
LABEL_62:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
      goto LABEL_63;
    }
    AnimationClipRect = ShellFeedsDesktopExperienceView::NotifyView(
                          (ShellFeedsDesktopExperienceView *)this,
                          L"NotifyCloakStateChanged",
                          v41[0]);
    v11 = AnimationClipRect;
    if ( AnimationClipRect < 0 )
    {
      v16 = 741LL;
      goto LABEL_29;
    }
    v17 = ShellFeedsDesktopExperienceView::PositionShellFeedsWindow((ShellFeedsDesktopExperienceView *)this);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2E8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v17);
    v18 = 81;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRight>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRight>::GetImpl'::`2'::impl) )
    {
      v19 = this[38];
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 1 )
              v18 = 79;
          }
          else
          {
            v18 = 77;
          }
        }
        else
        {
          v18 = 80;
        }
      }
      else
      {
        v18 = 78;
      }
    }
    AnimationClipRect = ShellFeedsDesktopExperienceView::GetAnimationClipRect(
                          (ShellFeedsDesktopExperienceView *)this,
                          &rcDst);
    v11 = AnimationClipRect;
    if ( AnimationClipRect < 0 )
    {
      v16 = 770LL;
      goto LABEL_29;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRight>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Feeds_FeedsAnimatioSlideFromRight>::GetImpl'::`2'::impl) )
    {
      *(_DWORD *)Data = 0;
      ShellFeedsRegistryHelper::GetShellFeedsRegKey(L"UncloakAnimaton", Data, v22);
      v24 = this + 38;
      if ( *(_DWORD *)Data )
      {
        *(_DWORD *)v36 = 0;
        *(_DWORD *)v37 = 0;
        *(_OWORD *)&rc.Reserved.Reserved1 = 0LL;
        ShellFeedsRegistryHelper::GetShellFeedsRegKey(L"FlyoutWidth", v36, v23);
        ShellFeedsRegistryHelper::GetShellFeedsRegKey(L"FlyoutHeight", v37, v25);
        if ( *v24 )
        {
          switch ( *v24 )
          {
            case 1:
              rcDst.bottom = rcDst.top + *(_DWORD *)v37;
              break;
            case 2:
              rcDst.top = rcDst.bottom - *(_DWORD *)v37;
              v27 = *(_DWORD *)v36;
              rcDst.left = rcDst.right - *(_DWORD *)v36;
              goto LABEL_43;
            case 3:
              rcDst.top = rcDst.bottom - *(_DWORD *)v37;
              break;
            default:
LABEL_44:
              ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_TaskbarOrientation<enum EDGEUI_TRAYSTUCKPLACE &>((int *)this + 38);
              ViewWrapper = ShellFeedsDesktopExperienceView::GetViewWrapper((__int64)this, &v40);
              v30 = CExperienceManagerAnimationHelper::Begin(
                      (__int64)(this + 44),
                      (ExperienceManagerUtils *)*ViewWrapper,
                      0x1A0002Au,
                      (__int64)&rc,
                      (int)&rc);
              if ( v30 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x341,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
                  (const char *)(unsigned int)v30);
              Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v40);
              ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_UncloakAnimation<long &,long &,long &,long &,long &,long &,long &,long &>(
                (int *)&rc.Reserved.Reserved2[4],
                (int *)&rc,
                (int *)&rc.Reserved.Reserved2[12],
                (int *)&rc.Reserved.Reserved2[8],
                &rcDst.top,
                &rcDst.left,
                &rcDst.right,
                &rcDst.bottom);
              goto LABEL_61;
          }
          IsThreadRTL = Mirror_IsThreadRTL();
          v27 = *(_DWORD *)v36;
          if ( !IsThreadRTL )
          {
            rcDst.left = rcDst.right - *(_DWORD *)v36;
LABEL_43:
            *(struct tagRECT *)&rc.Reserved.Reserved1 = rcDst;
            OffsetRect((LPRECT)&rc, v27, 0);
            goto LABEL_44;
          }
        }
        else
        {
          rcDst.top = rcDst.bottom - *(_DWORD *)v37;
          v27 = *(_DWORD *)v36;
        }
        v28 = v27 + rcDst.left;
        v27 = -v27;
        rcDst.right = v28;
        goto LABEL_43;
      }
      if ( *v24 )
      {
        switch ( *v24 )
        {
          case 1:
            v18 = 80;
            break;
          case 2:
            v18 = 77;
            break;
          case 3:
            v18 = 79;
            break;
        }
      }
      else
      {
        v18 = 78;
      }
      v31 = ShellFeedsDesktopExperienceView::GetViewWrapper((__int64)this, &v40);
      v32 = CExperienceManagerAnimationHelper::Begin(
              (__int64)(this + 52),
              (ExperienceManagerUtils *)*v31,
              v18 | 0x200000u,
              0LL,
              0);
      if ( v32 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35A,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
          (const char *)(unsigned int)v32);
    }
    else
    {
      v33 = ShellFeedsDesktopExperienceView::GetViewWrapper((__int64)this, &v40);
      v34 = CExperienceManagerAnimationHelper::Begin(
              (__int64)(this + 52),
              (ExperienceManagerUtils *)*v33,
              v18 | 0x200000u,
              0LL,
              0);
      if ( v34 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x360,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
          (const char *)(unsigned int)v34);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v40);
LABEL_61:
    v11 = 0;
    goto LABEL_62;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2DE,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v10);
LABEL_63:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v41);
  return v11;
}
