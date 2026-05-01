/*
 * XREFs of __anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::dtor$9 @ 0x180143FD8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
