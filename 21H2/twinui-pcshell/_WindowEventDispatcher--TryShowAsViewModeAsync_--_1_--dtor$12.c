/*
 * XREFs of _WindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor$12 @ 0x1803299CD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
