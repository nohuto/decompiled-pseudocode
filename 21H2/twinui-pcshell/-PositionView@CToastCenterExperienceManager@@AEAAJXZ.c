/*
 * XREFs of ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180234504
 * Callers:
 *     ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802319B0 (-DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MO.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180231D00 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180232FC0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x180233704 (-OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001A3E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18001A420 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18001BD20 (--1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18001C934 (-StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18001D958 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001DA98 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18001DF20 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$EM_ToastCenterWindowSize@AEBHAEAHJJ@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBHAEAH$$QEAJ2@Z @ 0x18009A794 (--$EM_ToastCenterWindowSize@AEBHAEAHJJ@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x18009AFEC (-IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ.c)
 *     ?ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ @ 0x18009B130 (-ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z @ 0x1801A7884 (-ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::PositionView(IUnknown **this)
{
  int v2; // eax
  unsigned int LastError; // edi
  __int64 v4; // rdx
  IUnknown *v5; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  int v7; // eax
  HMONITOR v9; // rsi
  const char *v10; // r9
  __int64 v11; // rdx
  HMONITOR v12; // rdx
  __int64 v13; // r8
  HWND WindowW; // rax
  HRESULT Service; // eax
  int PerMonitorDpi; // eax
  int v17; // esi
  double v18; // xmm0_8
  int v19; // eax
  LONG bottom; // ecx
  LONG top; // eax
  int v22; // edi
  LANGID ThreadUILanguage; // ax
  int v24; // eax
  POINT pt_8[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  struct tagRECT rcMonitor; // [rsp+58h] [rbp-B0h] BYREF
  RECT rc_8; // [rsp+68h] [rbp-A0h] BYREF
  struct tagMONITORINFO mi_4; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v33[40]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v33,
    (__int64)"EM_PositionViewActivity");
  v33[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v33);
  if ( this[16] )
  {
    if ( !this[87] || *((_DWORD *)this + 176) != 1 )
    {
      pt_8[0] = 0LL;
      v9 = MonitorFromPoint(0LL, 1u);
      if ( v9 == (HMONITOR)-1LL )
      {
        v11 = 1218LL;
      }
      else
      {
        mi_4.cbSize = 40;
        memset(&mi_4.rcMonitor, 0, 36);
        if ( GetMonitorInfoW(v9, &mi_4) )
        {
          rcMonitor = mi_4.rcMonitor;
          if ( CToastCenterExperienceManager::ShouldShowWithinWorkArea((CToastCenterExperienceManager *)this) )
          {
            rcMonitor = mi_4.rcWork;
            WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
            if ( WindowW )
            {
              if ( GetPropW(WindowW, L"IsAutoHideEnabled") )
              {
                pt_8[0] = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pt_8);
                Service = IUnknown_QueryService(
                            this[81],
                            (const GUID *const)&SID_EdgeUi,
                            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
                            (void **)pt_8);
                if ( Service >= 0 )
                {
                  v24 = (*(__int64 (__fastcall **)(POINT *, struct tagRECT *))(**(_QWORD **)pt_8 + 152LL))(
                          *(POINT **)pt_8,
                          &rcMonitor);
                  LastError = v24;
                  if ( v24 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x4D8,
                      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                      (const char *)(unsigned int)v24);
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pt_8);
                    goto LABEL_9;
                  }
                }
                else
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x4D6,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                    (const char *)(unsigned int)Service);
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pt_8);
              }
            }
          }
          PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v9, v12, v13);
          v17 = PerMonitorDpi;
          v18 = *((double *)this + 54);
          if ( v18 > 0.0 )
            rcMonitor.bottom -= ExperienceManagerUtils::ScaleByDPI(
                                  (ExperienceManagerUtils *)(unsigned int)(int)v18,
                                  PerMonitorDpi);
          rc_8 = 0LL;
          v19 = ((__int64 (__fastcall *)(IUnknown *, RECT *, int *))this[58]->lpVtbl[1].Release)(this[58], &rc_8, &v26);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4E8,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
              (const char *)(unsigned int)v19);
          if ( !IsRectEmpty(&rc_8) )
          {
            bottom = rcMonitor.bottom;
            if ( rcMonitor.bottom > rc_8.top )
            {
              if ( ((v26 - 1) & 0xFFFFFFFD) == 0 )
                bottom = rc_8.top;
              rcMonitor.bottom = bottom;
            }
          }
          rcMonitor.top = rcMonitor.bottom
                        - ExperienceManagerUtils::ScaleByDPI(
                            (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 38),
                            v17);
          if ( ToastSettingsHelper::IsStackedPriorityToastsEnabled()
            && CToastCenterExperienceManager::ShouldShowWithinWorkArea((CToastCenterExperienceManager *)this) )
          {
            top = rcMonitor.top;
            if ( rcMonitor.top < mi_4.rcWork.top )
              top = mi_4.rcWork.top;
            rcMonitor.top = top;
          }
          v22 = ExperienceManagerUtils::ScaleByDPI(
                  (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 37),
                  v17);
          pt_8[0].x = v22;
          ThreadUILanguage = GetThreadUILanguage();
          if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
            rcMonitor.right = v22 + rcMonitor.left;
          else
            rcMonitor.left = rcMonitor.right - v22;
          v29 = ExperienceManagerUtils::ScaleByDPI(
                  (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 38),
                  v17);
          v27 = rcMonitor.bottom - rcMonitor.top;
          v28 = rcMonitor.right - rcMonitor.left;
          NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ToastCenterWindowSize<int const &,int &,long,long>(
            pt_8,
            &v29,
            &v28,
            &v27);
          v2 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(this + 13), &rcMonitor);
          LastError = v2;
          if ( v2 < 0 )
          {
            v4 = 1288LL;
            goto LABEL_42;
          }
          goto LABEL_8;
        }
        v11 = 1221LL;
      }
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v11,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                    v10);
      goto LABEL_9;
    }
    rcMonitor.left = 0;
    rcMonitor.top = 0;
    rcMonitor.right = MulDiv((int)*((float *)this + 37), 150, 100);
    rcMonitor.bottom = MulDiv((int)*((float *)this + 38), 150, 100);
    v2 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(this + 13), &rcMonitor);
    LastError = v2;
    if ( v2 < 0 )
    {
      v4 = 1206LL;
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      goto LABEL_9;
    }
    pt_8[0] = 0LL;
    *(float *)&pt_8[1].x = (float)(rcMonitor.right - rcMonitor.left);
    *(float *)&pt_8[1].y = (float)(rcMonitor.bottom - rcMonitor.top);
    v5 = this[87];
    lpVtbl = v5->lpVtbl;
    rc_8 = *(RECT *)&pt_8[0].x;
    v7 = ((__int64 (__fastcall *)(IUnknown *, IUnknown *, IUnknown *, RECT *))lpVtbl[2].Release)(
           v5,
           this[15],
           this[16],
           &rc_8);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4BA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
LABEL_8:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v33, 0);
  LastError = 0;
LABEL_9:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v33);
  return LastError;
}
