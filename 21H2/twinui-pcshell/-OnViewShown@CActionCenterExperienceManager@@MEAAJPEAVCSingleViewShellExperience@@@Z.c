/*
 * XREFs of ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000C990
 * Callers:
 *     <none>
 * Callees:
 *     ??1EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18000CA50 (--1EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18000CA7C (-StartActivity@EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18000CD68 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000FDE4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@details@wil@@QEA.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800143D0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18001D958 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001DA98 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18004FC6C (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnViewShown(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  int v5[80]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v5,
    "EM_ViewShownActivity");
  *(_QWORD *)v5 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity *)v5);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (char *)this + 424,
    0LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlShowHideAnimations>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetImpl'::`2'::impl,
    0LL);
  v3 = CExperienceManagerAnimationHelper::End((CActionCenterExperienceManager *)((char *)this + 248));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4B8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3,
      v5[0]);
  CActionCenterExperienceManager::OnVisibilityChanged((CActionCenterExperienceManager *)((char *)this - 104));
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v5, 0LL);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity::~EM_ViewShownActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity *)v5);
  return 0LL;
}
