/*
 * XREFs of ??1?$ComPtr@VTitleBarController@@@WRL@Microsoft@@QEAA@XZ @ 0x1802F5824
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_TitleBarController_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy____::_1_::dtor$0 @ 0x1802F4A1A (_wil--MakeAndInitializeOrThrow_TitleBarController_wil--com_ptr_t_IWeakReference_wil--err_returnc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TitleBarController>::~ComPtr<TitleBarController>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(a1);
}
