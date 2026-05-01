/*
 * XREFs of ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180233618
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180233A38 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18001D958 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001DA98 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180230D24 (--1EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180231E6C (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?RequestingLaunch@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180234F00 (-RequestingLaunch@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITel.c)
 *     ?StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180236348 (-StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITeleme.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnNewNotification(CToastCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v5,
    (__int64)"EM_NewNotificationActivity");
  *(_QWORD *)v5 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *)v5);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::RequestingLaunch((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *)v5);
  v2 = CToastCenterExperienceManager::Launch(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5, 0);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::~EM_NewNotificationActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *)v5);
  return v3;
}
