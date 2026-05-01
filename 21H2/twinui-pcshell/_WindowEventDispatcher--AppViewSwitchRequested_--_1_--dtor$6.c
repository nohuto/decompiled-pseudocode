/*
 * XREFs of _WindowEventDispatcher::AppViewSwitchRequested_::_1_::dtor$6 @ 0x180323863
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewSwitchRequested_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
