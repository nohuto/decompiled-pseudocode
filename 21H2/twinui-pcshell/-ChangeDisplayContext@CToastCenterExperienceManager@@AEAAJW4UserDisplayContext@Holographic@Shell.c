/*
 * XREFs of ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180231270
 * Callers:
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x180232F50 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x180238F90 (-UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18001D958 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001DA98 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXAEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180230218 (--$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_Disp.c)
 *     ??1EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180230E24 (--1EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?DisplayContextChangedToHeadMountedDisplay@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18023179C (-DisplayContextChangedToHeadMountedDisplay@EM_DisplayContextChanged@NotificationCenterTelemetry@.c)
 *     ?DisplayContextChangedToMonitor@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1802318A0 (-DisplayContextChangedToMonitor@EM_DisplayContextChanged@NotificationCenterTelemetry@Notificatio.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180231D00 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802323A0 (-MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18023242C (-MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180235CBC (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180236084 (-StartActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::ChangeDisplayContext(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8[4]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v9[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v8[0] = a2;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v9,
    (__int64)"EM_DisplayContextChanged");
  v9[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v9);
  if ( !*(_QWORD *)(a1 + 128) || !*(_QWORD *)(a1 + 712) || !*(_QWORD *)(a1 + 696) || *(_DWORD *)(a1 + 704) == a2 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::NoChangeToDisplayContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext &>(
      (__int64)v9,
      v8);
    goto LABEL_17;
  }
  *(_DWORD *)(a1 + 704) = a2;
  if ( a2 != 1 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::DisplayContextChangedToMonitor((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v9);
    v4 = CToastCenterExperienceManager::MoveToastCenterViewToDesktop((CToastCenterExperienceManager *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1519LL;
      goto LABEL_15;
    }
    v4 = CToastCenterExperienceManager::HideInHolographic((CToastCenterExperienceManager *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1521LL;
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::DisplayContextChangedToHeadMountedDisplay((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v9);
  v4 = CToastCenterExperienceManager::MoveToastCenterViewToHolographic((CToastCenterExperienceManager *)a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 144) == 2 )
    {
      v4 = CToastCenterExperienceManager::ShowInHolographic((CToastCenterExperienceManager *)a1);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1512LL;
        goto LABEL_15;
      }
    }
LABEL_17:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v9, 0);
    v5 = 0;
    goto LABEL_18;
  }
  v6 = 1507LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_18:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::~EM_DisplayContextChanged((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v9);
  return v5;
}
