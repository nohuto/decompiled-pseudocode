/*
 * XREFs of _TabViewManager::ConnectTabToView_::_1_::dtor$5 @ 0x1802DCB54
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabViewManager::ConnectTabToView_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
