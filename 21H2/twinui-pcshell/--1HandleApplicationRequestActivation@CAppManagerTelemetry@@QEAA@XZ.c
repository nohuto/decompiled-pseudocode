/*
 * XREFs of ??1HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAA@XZ @ 0x1801B775C
 * Callers:
 *     _CApplicationManager::_HandleApplicationRequestActivation_::_1_::dtor$1 @ 0x1801C602D (_CApplicationManager--_HandleApplicationRequestActivation_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002F1A4 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppManagerTelemetry::HandleApplicationRequestActivation::~HandleApplicationRequestActivation(
        CAppManagerTelemetry::HandleApplicationRequestActivation *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::HandleApplicationRequestActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
