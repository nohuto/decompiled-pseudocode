/*
 * XREFs of ??1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7188
 * Callers:
 *     _lambda_5fc35d1030d0241eeb48d222f7d22fe1_::__lambda_5fc35d1030d0241eeb48d222f7d22fe1_ @ 0x1800CEA0C (_lambda_5fc35d1030d0241eeb48d222f7d22fe1_--__lambda_5fc35d1030d0241eeb48d222f7d22fe1_.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803BDB60 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     _TouchKeyboardExperienceManager::OnPositionChanged_::_1_::dtor$0 @ 0x1803BDCE6 (_TouchKeyboardExperienceManager--OnPositionChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803B8394 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::~OnApplicationFramePositionChanged(
        TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
