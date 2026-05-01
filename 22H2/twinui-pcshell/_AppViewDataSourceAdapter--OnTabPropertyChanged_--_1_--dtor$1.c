/*
 * XREFs of _AppViewDataSourceAdapter::OnTabPropertyChanged_::_1_::dtor$1 @ 0x1803AE1D5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapter::OnTabPropertyChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
