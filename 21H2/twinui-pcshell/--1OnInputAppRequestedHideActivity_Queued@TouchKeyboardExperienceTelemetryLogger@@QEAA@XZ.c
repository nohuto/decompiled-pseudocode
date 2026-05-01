/*
 * XREFs of ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7484
 * Callers:
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::__lambda_4d10a89d0d66f2982df1f6a73309b1fb_ @ 0x1800CE9A8 (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--__lambda_4d10a89d0d66f2982df1f6a73309b1fb_.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x1803BD83C (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803B8664 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
