/*
 * XREFs of ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801F8960
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8f853f3308fdbebd25aa75747bd09082___ @ 0x18002C930 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8f853f3308fdbebd25aa75747bd09082___.c)
 *     _CFrameApplicationPresentation::SetSystemVisual_::_1_::dtor$0 @ 0x180173E58 (_CFrameApplicationPresentation--SetSystemVisual_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002CC44 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
