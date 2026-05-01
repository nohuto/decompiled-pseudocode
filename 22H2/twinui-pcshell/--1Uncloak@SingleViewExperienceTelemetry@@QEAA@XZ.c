/*
 * XREFs of ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180084A68
 * Callers:
 *     ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x1800848CC (-Uncloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _CSingleViewShellExperience::Uncloak_::_1_::dtor$0 @ 0x180176EDC (_CSingleViewShellExperience--Uncloak_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800331FC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall SingleViewExperienceTelemetry::Uncloak::~Uncloak(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&SingleViewExperienceTelemetry::Uncloak::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
