/*
 * XREFs of _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$1 @ 0x1803AA6CF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 248LL));
}
