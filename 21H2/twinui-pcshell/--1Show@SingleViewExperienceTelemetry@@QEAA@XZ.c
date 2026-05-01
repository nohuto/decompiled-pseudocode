/*
 * XREFs of ??1Show@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180016740
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001503C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     _CSingleViewShellExperience::Show_::_1_::dtor$0 @ 0x18017295E (_CSingleViewShellExperience--Show_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800331FC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall SingleViewExperienceTelemetry::Show::~Show(SingleViewExperienceTelemetry::Show *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Show::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
