/*
 * XREFs of _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$5 @ 0x1803229FE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 168));
}
