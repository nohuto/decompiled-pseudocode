/*
 * XREFs of _WindowEventDispatcher::AppViewShowRequested_::_1_::dtor$8 @ 0x180323260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewShowRequested_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 120));
}
