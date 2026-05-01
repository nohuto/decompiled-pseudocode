/*
 * XREFs of ??1OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18032C4C0
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18032FFF8 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 *     _ViewManagerBridge::OnRequestApplicationViewSwitcherOperation_::_1_::dtor$3 @ 0x1803306F2 (_ViewManagerBridge--OnRequestApplicationViewSwitcherOperation_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007CCFC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::~OnRequestApplicationViewSwitcherOperation(
        ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
