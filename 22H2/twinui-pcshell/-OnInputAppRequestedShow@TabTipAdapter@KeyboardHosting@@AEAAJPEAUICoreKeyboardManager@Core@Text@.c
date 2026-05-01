/*
 * XREFs of ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1803CEFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E78 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1AE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803B6448 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1803B9F80 (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1803BB260 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z @ 0x1803BD824 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     ??1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803CA108 (--1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803CA618 (--4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1803CD400 (-GetViewOptions@@YA-AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@.c)
 *     ?IsInputAppViewShowHideCallbackSafeToReportToTelemetry@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z @ 0x1803CD660 (-IsInputAppViewShowHideCallbackSafeToReportToTelemetry@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1803D26EC (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x1803D2CEC (-StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z.c)
 *     ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIIAEAURect@Foundation@Windows@@_N@Z @ 0x1803D36B0 (-Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIIAEAURect@Fo.c)
 *     ?_Push_back_internal@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXAEBUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@Z @ 0x1803D5884 (-_Push_back_internal@-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocato.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1803D9C00 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow(
        RTL_SRWLOCK **this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *a3)
{
  int v5; // eax
  int v6; // eax
  bool IsInputAppViewShowHideCallbackSafeToReportToTelemetry; // r14
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  char v11; // si
  unsigned int v12; // r11d
  __int64 v13; // r8
  __int64 v14; // rdx
  _BYTE v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v18; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+70h] [rbp-90h]
  __int128 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+98h] [rbp-68h]
  unsigned int v26; // [rsp+9Ch] [rbp-64h]
  int v27; // [rsp+A0h] [rbp-60h]
  __int128 v28; // [rsp+A4h] [rbp-5Ch]
  __int16 v29; // [rsp+B4h] [rbp-4Ch]
  __int128 v30; // [rsp+C0h] [rbp-40h] BYREF
  int v31[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v32; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v33; // [rsp+F0h] [rbp-10h]
  __int128 v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+10h]
  int v36; // [rsp+118h] [rbp+18h]
  _QWORD v37[40]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v38[40]; // [rsp+260h] [rbp+160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3C8h] [rbp+2C8h]

  v17 = 0;
  v18 = 11;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  v5 = TouchKeyboardExperienceManager::InitializeViewInfosIfNeeded(this[8]);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      855LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, unsigned int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v17);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      856LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
    this[8],
    v17,
    (enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *)&v18);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  IsInputAppViewShowHideCallbackSafeToReportToTelemetry = KeyboardHosting::TabTipAdapter::IsInputAppViewShowHideCallbackSafeToReportToTelemetry(
                                                            (KeyboardHosting::TabTipAdapter *)this,
                                                            v17);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v38,
    (__int64)"OnInputAppRequestedShowActivity");
  v38[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
  if ( IsInputAppViewShowHideCallbackSafeToReportToTelemetry )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v37,
      (__int64)"OnInputAppRequestedShowActivity");
    v37[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::StartActivity(
      (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v37,
      v17,
      v18);
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::operator=((__int64)v38, (__int64)v37);
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::~OnInputAppRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v37);
  }
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v32);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 884LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_23;
  }
  *(_OWORD *)v31 = 0LL;
  v16[0] = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  v21 = v32;
  v22 = v33;
  v23 = v34;
  v24 = v35;
  v25 = v36;
  v8 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(this[13], &v21, v17, v20, v31, v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 892LL;
    goto LABEL_19;
  }
  v8 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition((KeyboardHosting::TabTipAdapter *)this, 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 900LL;
    goto LABEL_19;
  }
  v11 = v16[0];
  if ( v16[0] )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
      (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
      1u,
      3u);
    if ( v17 == *((_DWORD *)this + 122) )
    {
      v21 = v32;
      v22 = v33;
      v23 = v34;
      v24 = v35;
      v25 = v36;
      v26 = v17;
      v27 = 0;
      v28 = *(_OWORD *)v31;
      v29 = 1;
      std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Push_back_internal(this + 62, &v21);
      LOBYTE(v13) = *((_DWORD *)this + 78) != 1;
      LOBYTE(v14) = 1;
      v8 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))this[5]->Ptr + 17))(this[5], v14, v13);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 920LL;
        goto LABEL_19;
      }
    }
    else
    {
      LODWORD(v19) = (int)*(float *)v31;
      DWORD1(v19) = (int)*(float *)&v31[1];
      DWORD2(v19) = (int)(float)(*(float *)&v31[2] + *(float *)v31);
      HIDWORD(v19) = (int)(float)(*(float *)&v31[1] + *(float *)&v31[3]);
      v30 = *(_OWORD *)GetViewOptions((__int64)&v30, (__int64)&v32);
      v8 = TouchKeyboardExperienceManager::OnInputAppRequestedShow((__int64)this[8], v12, &v19, &v30);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 910LL;
        goto LABEL_19;
      }
    }
  }
  if ( IsInputAppViewShowHideCallbackSafeToReportToTelemetry )
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
      (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v38,
      v17,
      v18,
      (struct Windows::Foundation::Rect *)v31,
      v11 != 0);
  v9 = 0;
LABEL_23:
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::~OnInputAppRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v38);
  return v9;
}
