/*
 * XREFs of _TabTransferManager::GetViewForTabInDrag_::_1_::dtor$1 @ 0x1802FE550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabTransferManager::GetViewForTabInDrag_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
