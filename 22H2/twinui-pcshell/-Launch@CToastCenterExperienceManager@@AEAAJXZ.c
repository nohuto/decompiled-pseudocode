/*
 * XREFs of ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180231E6C
 * Callers:
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180232C9C (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180233618 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800143D0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18001D958 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001DA98 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180085BAC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?IsVisible@CToastCenterExperienceManager@@AEAA_NXZ @ 0x1800869E8 (-IsVisible@CToastCenterExperienceManager@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801B103C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180230CF8 (--1EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?LaunchedApplication@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1802320A8 (-LaunchedApplication@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?NoOp_ActionCenterVisible@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18023230C (-NoOp_ActionCenterVisible@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITele.c)
 *     ?NoOp_DeviceLockdown@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180232514 (-NoOp_DeviceLockdown@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?NoOp_ShellNotReady@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180232618 (-NoOp_ShellNotReady@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?NoOp_ShutdownInProgress@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18023271C (-NoOp_ShutdownInProgress@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelem.c)
 *     ?StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180236230 (-StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA.c)
 *     ?TurnedScreenOn_SoundSentry@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180238CD0 (-TurnedScreenOn_SoundSentry@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Launch(CToastCenterExperienceManager *this)
{
  HWND WindowW; // rax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-D0h] BYREF
  int pvParam; // [rsp+40h] [rbp-C8h] BYREF
  char v10; // [rsp+44h] [rbp-C4h]
  _QWORD v11[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v11,
    (__int64)"EM_LaunchActivity");
  v11[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v11);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !*((_BYTE *)this + 441) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_ShellNotReady((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v11);
LABEL_17:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11, 0);
    v5 = 0;
    goto LABEL_18;
  }
  if ( GetPropW(WindowW, L"IsExplorerShuttingDown") )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_ShutdownInProgress((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v11);
    goto LABEL_17;
  }
  if ( *((_BYTE *)this + 442) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_ActionCenterVisible((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v11);
    goto LABEL_17;
  }
  if ( *((_BYTE *)this + 443) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_DeviceLockdown((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v11);
    goto LABEL_17;
  }
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_6ba12251d894b3a3e9c4b8229adeb7f1_::_lambda_invoker_cdecl_,
                      this,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 82,
    ThreadpoolTimer);
  pvParam = 56;
  if ( SystemParametersInfoW(0x40u, 0x38u, &pvParam, 0)
    && (v10 & 1) != 0
    && (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::TurnedScreenOn_SoundSentry((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v11),
        v4 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0),
        v4 < 0) )
  {
    v5 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x2D5,
           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
           (const char *)(unsigned int)v4);
  }
  else
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::LaunchedApplication((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v11);
    v6 = CSingleViewShellExperience::Launch((CToastCenterExperienceManager *)((char *)this + 104));
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( !CToastCenterExperienceManager::IsVisible(this) )
      {
        pftDueTime = (struct _FILETIME)-600000000LL;
        SetThreadpoolTimer(*((PTP_TIMER *)this + 82), &pftDueTime, 0, 0);
      }
      goto LABEL_17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  }
LABEL_18:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::~EM_LaunchActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v11);
  return v5;
}
