/*
 * XREFs of ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x180238DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802305A4 (--0-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180230DD4 (--1EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1802310C0 (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 *     ?StartActivity@EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1802367E4 (-StartActivity@EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180236910 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::UnregisterHolographicExecutor(CToastCenterExperienceManager *this)
{
  WINBOOL v2; // edx
  int v3; // eax
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v6,
    (__int64)"EM_UnregisterHolographicExecutor");
  *(_QWORD *)v6 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor *)v6);
  if ( !*((_QWORD *)this + 80) )
    goto LABEL_5;
  RtlUnsubscribeWnfNotificationWaitForCompletion(*((_QWORD *)this + 44));
  *((_QWORD *)this + 44) = 0LL;
  v3 = CToastCenterExperienceManager::ChangeDisplayContext((__int64)this - 56, 0);
  v4 = v3;
  if ( v3 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 80);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 82);
LABEL_5:
    wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v6,
      v2);
    v4 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x619,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_6:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor::~EM_UnregisterHolographicExecutor((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor *)v6);
  return v4;
}
