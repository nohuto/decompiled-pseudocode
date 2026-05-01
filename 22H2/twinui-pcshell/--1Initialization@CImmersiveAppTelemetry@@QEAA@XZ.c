/*
 * XREFs of ??1Initialization@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1801E99F4
 * Callers:
 *     _CFrameApplicationPresentation::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180174320 (_CFrameApplicationPresentation--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002F1A4 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CImmersiveAppTelemetry::Initialization::~Initialization(CImmersiveAppTelemetry::Initialization *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
