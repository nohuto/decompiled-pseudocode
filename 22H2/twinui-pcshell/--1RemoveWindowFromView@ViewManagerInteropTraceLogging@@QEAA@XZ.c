/*
 * XREFs of ??1RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18032C5F4
 * Callers:
 *     ?RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x180331250 (-RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z.c)
 *     _ViewManagerBridge::RemoveWindowFromView_::_1_::dtor$1 @ 0x1803313E3 (_ViewManagerBridge--RemoveWindowFromView_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007CCFC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RemoveWindowFromView::~RemoveWindowFromView(
        ViewManagerInteropTraceLogging::RemoveWindowFromView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RemoveWindowFromView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
