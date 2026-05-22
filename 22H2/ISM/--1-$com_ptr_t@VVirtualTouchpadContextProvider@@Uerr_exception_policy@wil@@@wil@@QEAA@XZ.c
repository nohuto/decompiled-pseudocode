/*
 * XREFs of ??1?$com_ptr_t@VVirtualTouchpadContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18003B1FC
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800444B0 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     _VirtualTouchpadContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180052570 (_VirtualTouchpadContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     _DisplayOcclusionContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180052580 (_DisplayOcclusionContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance_.c)
 *     _VirtualTouchpadControllerProxy::OnIsActiveChanged_::_1_::dtor$0 @ 0x1800F0A07 (_VirtualTouchpadControllerProxy--OnIsActiveChanged_--_1_--dtor$0.c)
 *     _VirtualTouchpadControllerProxy::OnTouchpadRectChanged_::_1_::dtor$0 @ 0x1800F0B74 (_VirtualTouchpadControllerProxy--OnTouchpadRectChanged_--_1_--dtor$0.c)
 *     _KeyboardDockServer::OnKeyboardDockInput_::_1_::dtor$1 @ 0x1801271AE (_KeyboardDockServer--OnKeyboardDockInput_--_1_--dtor$1.c)
 *     _KeyboardDockServer::OnKeyboardDockInput_::_1_::dtor$2 @ 0x1801271BA (_KeyboardDockServer--OnKeyboardDockInput_--_1_--dtor$2.c)
 *     _KeyboardDockServer::OnKeyboardDockInput_::_1_::dtor$3 @ 0x1801271C6 (_KeyboardDockServer--OnKeyboardDockInput_--_1_--dtor$3.c)
 *     _VirtualTouchpadContextProvider::Create_::_1_::dtor$0 @ 0x180145C74 (_VirtualTouchpadContextProvider--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037280 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<VirtualTouchpadContextProvider,wil::err_exception_policy>::~com_ptr_t<VirtualTouchpadContextProvider,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return RefCountedObject::Release((RefCountedObject *)(v1 + 8));
  return result;
}
