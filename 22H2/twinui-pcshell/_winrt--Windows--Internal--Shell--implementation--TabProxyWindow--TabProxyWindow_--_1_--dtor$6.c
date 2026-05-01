/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor$6 @ 0x1800F437F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 96) + 104LL));
}
