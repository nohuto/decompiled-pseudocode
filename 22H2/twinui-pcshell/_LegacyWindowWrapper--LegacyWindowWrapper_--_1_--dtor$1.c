/*
 * XREFs of _LegacyWindowWrapper::LegacyWindowWrapper_::_1_::dtor$1 @ 0x180349A76
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LegacyWindowWrapper::LegacyWindowWrapper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 112) + 632LL));
}
