/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1804C8B44
 * Callers:
 *     _UwpAppStateManager::TerminateApp_::_1_::dtor$0 @ 0x1800DB59D (_UwpAppStateManager--TerminateApp_--_1_--dtor$0.c)
 *     _UwpAppPackageInfo::GetActiveViews_::_1_::dtor$0 @ 0x1804C90E5 (_UwpAppPackageInfo--GetActiveViews_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>(
        __int64 a1)
{
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(a1);
}
