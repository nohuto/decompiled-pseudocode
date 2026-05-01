/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$54 @ 0x180173BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_54(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 296));
}
