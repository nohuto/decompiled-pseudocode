/*
 * XREFs of ??1OnRequestNavigateToView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18032C570
 * Callers:
 *     _ViewManagerBridge::OnRequestNavigateToView_::_1_::dtor$0 @ 0x180330BDF (_ViewManagerBridge--OnRequestNavigateToView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007CCFC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRequestNavigateToView::~OnRequestNavigateToView(
        ViewManagerInteropTraceLogging::OnRequestNavigateToView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestNavigateToView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
