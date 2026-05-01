/*
 * XREFs of ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x1803CEB00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E98 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1B08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803B6718 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x1803B8EA8 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1803BA250 (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1803BB530 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x1803BD83C (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803C0AC0 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ??1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803CA380 (--1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803CA868 (--4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?IsInputAppViewShowHideCallbackSafeToReportToTelemetry@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z @ 0x1803CD930 (-IsInputAppViewShowHideCallbackSafeToReportToTelemetry@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1803D29BC (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x1803D2E04 (-StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z.c)
 *     ?_Push_back_internal@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXAEBUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@Z @ 0x1803D5B54 (-_Push_back_internal@-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocato.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x1803D866C (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 *     ?IsHidingAnimationRunning@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NI@Z @ 0x1803D8770 (-IsHidingAnimationRunning@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NI@Z.c)
 *     ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x1803D9B90 (-VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *a3)
{
  int v5; // eax
  int v6; // eax
  bool IsInputAppViewShowHideCallbackSafeToReportToTelemetry; // r14
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // esi
  int v12; // ebx
  __int64 v13; // r8
  unsigned __int8 v15[4]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-DCh] BYREF
  unsigned int v17; // [rsp+28h] [rbp-D8h] BYREF
  int v18; // [rsp+2Ch] [rbp-D4h] BYREF
  _OWORD v19[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h]
  int v21; // [rsp+68h] [rbp-98h]
  unsigned int v22; // [rsp+6Ch] [rbp-94h]
  int v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+74h] [rbp-8Ch]
  char v25; // [rsp+84h] [rbp-7Ch]
  bool v26; // [rsp+85h] [rbp-7Bh]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  _QWORD v28[40]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v29[40]; // [rsp+210h] [rbp+110h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+378h] [rbp+278h]

  v16 = 0;
  v17 = 11;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  v5 = TouchKeyboardExperienceManager::InitializeViewInfosIfNeeded(*((RTL_SRWLOCK **)this + 8));
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      958LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v16);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      959LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
    *((RTL_SRWLOCK **)this + 8),
    v16,
    (enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *)&v17);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  IsInputAppViewShowHideCallbackSafeToReportToTelemetry = KeyboardHosting::TabTipAdapter::IsInputAppViewShowHideCallbackSafeToReportToTelemetry(
                                                            this,
                                                            v16);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"OnInputAppRequestedHideActivity");
  v29[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
  if ( IsInputAppViewShowHideCallbackSafeToReportToTelemetry )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v28,
      (__int64)"OnInputAppRequestedHideActivity");
    v28[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::StartActivity(
      (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v28,
      v16,
      v17);
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::operator=((__int64)v29, (__int64)v28);
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::~OnInputAppRequestedHideActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v28);
  }
  v15[0] = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  v8 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedHide(
         *((KeyboardHosting::TabTipAdapterPolicy **)this + 13),
         v16,
         &v17,
         v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 989LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_26;
  }
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 997LL;
    goto LABEL_22;
  }
  if ( v15[0] )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
      (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
      1u,
      3u);
    v11 = v16;
    if ( v16 == *((_DWORD *)this + 122) )
    {
      v27 = 0LL;
      v12 = *((_DWORD *)this + 78);
      memset(v19, 0, sizeof(v19));
      v20 = 0LL;
      v21 = 0;
      v22 = v16;
      v23 = 0;
      v24 = 0LL;
      v25 = 0;
      v26 = v18 == 1;
      std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Push_back_internal((char *)this + 496, v19);
      LOBYTE(v13) = v12 != 1;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 5) + 136LL))(
             *((_QWORD *)this + 5),
             0LL,
             v13);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 1037LL;
        goto LABEL_22;
      }
    }
    else
    {
      if ( !KeyboardHosting::TabTipAdapterPolicy::IsHidingAnimationRunning(
              *((KeyboardHosting::TabTipAdapterPolicy **)this + 13),
              v16) )
      {
        TouchKeyboardExperienceManager::FireInputPaneHidingEvent(*((TouchKeyboardExperienceManager **)this + 8), v11);
        v11 = v16;
      }
      v8 = TouchKeyboardExperienceManager::OnInputAppRequestedHide(
             *((TouchKeyboardExperienceManager **)this + 8),
             v11,
             v18 == 1);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 1015LL;
        goto LABEL_22;
      }
      if ( !KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(*((KeyboardHosting::TabTipAdapterPolicy **)this + 13)) )
      {
        v8 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 0);
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 1020LL;
          goto LABEL_22;
        }
      }
    }
  }
  if ( IsInputAppViewShowHideCallbackSafeToReportToTelemetry )
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v29,
      0);
  v9 = 0;
LABEL_26:
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::~OnInputAppRequestedHideActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v29);
  return v9;
}
