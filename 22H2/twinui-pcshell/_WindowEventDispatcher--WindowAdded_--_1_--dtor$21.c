/*
 * XREFs of _WindowEventDispatcher::WindowAdded_::_1_::dtor$21 @ 0x180173FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::WindowAdded_::_1_::dtor_21(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 280));
}
