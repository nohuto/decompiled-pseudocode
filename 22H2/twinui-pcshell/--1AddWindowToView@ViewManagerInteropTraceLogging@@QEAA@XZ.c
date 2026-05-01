/*
 * XREFs of ??1AddWindowToView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18032C2DC
 * Callers:
 *     ?AddWindowToView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x18032C6E0 (-AddWindowToView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z.c)
 *     _ViewManagerBridge::AddWindowToView_::_1_::dtor$1 @ 0x18032C8B8 (_ViewManagerBridge--AddWindowToView_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007CCFC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::AddWindowToView::~AddWindowToView(
        ViewManagerInteropTraceLogging::AddWindowToView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::AddWindowToView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
