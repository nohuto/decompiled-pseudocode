/*
 * XREFs of ??1EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18008685C
 * Callers:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800867B8 (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::Hide_::_1_::dtor$0 @ 0x180176F96 (_CToastCenterExperienceManager--Hide_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001D510 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::~EM_HideActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
