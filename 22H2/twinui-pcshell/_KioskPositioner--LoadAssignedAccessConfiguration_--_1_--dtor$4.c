/*
 * XREFs of _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$4 @ 0x1800D6B6D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
