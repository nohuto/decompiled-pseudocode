/*
 * XREFs of _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$7 @ 0x1804612CF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
