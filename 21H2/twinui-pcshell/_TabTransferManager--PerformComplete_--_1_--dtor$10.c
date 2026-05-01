/*
 * XREFs of _TabTransferManager::PerformComplete_::_1_::dtor$10 @ 0x1802FF9EF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabTransferManager::PerformComplete_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
