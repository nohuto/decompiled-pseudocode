/*
 * XREFs of ??1OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7238
 * Callers:
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BCE50 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::OnDismiss_::_1_::dtor$0 @ 0x1803BCF0A (_TouchKeyboardExperienceManager--OnDismiss_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803B8394 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::~OnLightDismiss(
        TouchKeyboardExperienceTelemetryLogger::OnLightDismiss *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
