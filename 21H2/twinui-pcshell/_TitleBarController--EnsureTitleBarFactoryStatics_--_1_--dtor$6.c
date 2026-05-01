/*
 * XREFs of _TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor$6 @ 0x1802F6CCA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
