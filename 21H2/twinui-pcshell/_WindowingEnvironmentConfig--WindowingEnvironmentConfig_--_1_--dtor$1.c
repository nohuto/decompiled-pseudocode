/*
 * XREFs of _WindowingEnvironmentConfig::WindowingEnvironmentConfig_::_1_::dtor$1 @ 0x1803560C5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentConfig::WindowingEnvironmentConfig_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 64LL));
}
