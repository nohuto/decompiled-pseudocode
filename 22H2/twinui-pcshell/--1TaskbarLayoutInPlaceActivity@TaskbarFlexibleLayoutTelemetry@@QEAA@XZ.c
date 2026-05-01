/*
 * XREFs of ??1TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180152DA8
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180153310 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     _CPinnedList::ApplyInPlaceTaskbarLayout_::_1_::dtor$0 @ 0x1801536B6 (_CPinnedList--ApplyInPlaceTaskbarLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180154C00 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::~TaskbarLayoutInPlaceActivity(
        TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity *this)
{
  *(_QWORD *)this = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::`vftable';
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
