/*
 * XREFs of _AppViewDataSourceAdapterBase::OnTabSelectionChanged_::_1_::dtor$6 @ 0x1803AE961
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapterBase::OnTabSelectionChanged_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
