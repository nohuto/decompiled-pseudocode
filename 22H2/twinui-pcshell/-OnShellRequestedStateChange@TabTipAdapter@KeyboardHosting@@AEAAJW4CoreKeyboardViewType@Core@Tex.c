/*
 * XREFs of ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x1803D05B0
 * Callers:
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x1803CC56C (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2.c)
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x1803CF600 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1803CFF14 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1AE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x1803BA46C (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x1803BBEBC (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803C07F0 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ??$PreviousPendingRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY08$$CBD@Z @ 0x1803C74D0 (--$PreviousPendingRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ??$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEA_NAEA_N_N@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@$$QEAI$$QEAPEBGAEA_N3$$QEA_N@Z @ 0x1803C76E4 (--$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEA_NAEA_N_N@OnShellReque.c)
 *     ??1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803CA18C (--1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x1803CBBB4 (-CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@.c)
 *     ?CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x1803CBD50 (-CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@I.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1803CBFE8 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ @ 0x1803CD6FC (-IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1803D09E8 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1803D26EC (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReason@1@@Z @ 0x1803D2794 (-ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReaso.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x1803D8050 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1804E9254 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  int IsReady; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // esi
  bool v12; // r8
  unsigned int v14; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int InputAppState; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[320]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v14 = a2;
  if ( KeyboardHosting::TabTipAdapter::IsXAMLExperienceDisabled((KeyboardHosting::TabTipAdapter *)a1) )
    return 0LL;
  v16 = KeyboardHosting::ShellRequestedStateChangeReasonToString(a4);
  InputAppState = TouchKeyboardExperienceManager::GetInputAppState(*(_QWORD *)(a1 + 64));
  TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::Start<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,unsigned int,unsigned short const *,bool &,bool &,bool>(
    (struct wil::details::IFailureCallback *)v17,
    &v14,
    &InputAppState,
    &v16,
    (char *)(a1 + 352),
    (char *)(a1 + 356),
    (char *)(a1 + 368));
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((KeyboardHosting::TabTipAdapter *)a1);
  v8 = IsReady;
  if ( IsReady >= 0 )
  {
    if ( (unsigned int)TouchKeyboardExperienceManager::GetInputAppState(*(_QWORD *)(a1 + 64)) == 1
      && *(_BYTE *)(a1 + 352) )
    {
      if ( *(_BYTE *)(a1 + 452) || !*(_BYTE *)(a1 + 449) )
      {
        IsReady = KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(
                    *(_QWORD *)(a1 + 104) + 16LL,
                    a3,
                    &InputAppState);
        v8 = IsReady;
        if ( IsReady < 0 )
        {
          v9 = 2181LL;
          goto LABEL_25;
        }
        if ( InputAppState == 1 )
        {
          v11 = v14;
          IsReady = KeyboardHosting::TabTipAdapter::ProcessShowRequest(a1, v14);
          v8 = IsReady;
          if ( IsReady < 0 )
          {
            v9 = 2185LL;
            goto LABEL_25;
          }
          if ( !v11 )
          {
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
              (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
              1u,
              3u);
            IsReady = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
                        *(TouchKeyboardExperienceManager **)(a1 + 64),
                        *(_DWORD *)(a1 + 488),
                        1,
                        0);
            v8 = IsReady;
            if ( IsReady < 0 )
            {
              v9 = 2192LL;
              goto LABEL_25;
            }
          }
        }
        else
        {
          InputAppState = *(_DWORD *)(a1 + 360);
          v14 = *(_DWORD *)(a1 + 364);
          TouchKeyboardExperienceTelemetryLogger::PreviousPendingRequestCanceled<unsigned int,unsigned int,char const (&)[9]>(
            &v14,
            &InputAppState,
            v10);
          IhmNotification::SendKeyboardSetVisible(0LL, 0, v12);
        }
      }
      else
      {
        IsReady = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition((KeyboardHosting::TabTipAdapter *)a1, 1);
        v8 = IsReady;
        if ( IsReady < 0 )
        {
          v9 = 2211LL;
          goto LABEL_25;
        }
        IsReady = KeyboardHosting::TabTipAdapter::CreateDeferredShowRequest(a1, v14, a3, 1);
        v8 = IsReady;
        if ( IsReady < 0 )
        {
          v9 = 2215LL;
          goto LABEL_25;
        }
      }
    }
    else
    {
      IsReady = KeyboardHosting::TabTipAdapter::CreatePendingShowRequest(a1, v14, a3, 1);
      v8 = IsReady;
      if ( IsReady < 0 )
      {
        v9 = 2221LL;
        goto LABEL_25;
      }
    }
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v17,
      0);
    TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v17);
    return 0LL;
  }
  v9 = 2171LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)IsReady);
  TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v17);
  return v8;
}
