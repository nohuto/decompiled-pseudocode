/*
 * XREFs of _ForegroundManager::RegisterActivationController_::_1_::dtor$28 @ 0x18004FFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ForegroundManager::RegisterActivationController_::_1_::dtor_28(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 224));
}
