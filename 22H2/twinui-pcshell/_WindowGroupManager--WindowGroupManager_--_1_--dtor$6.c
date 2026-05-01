/*
 * XREFs of _WindowGroupManager::WindowGroupManager_::_1_::dtor$6 @ 0x180303BF1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowGroupManager::WindowGroupManager_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<WindowGroupManager,wil::err_exception_policy>::~com_ptr_t<WindowGroupManager,wil::err_exception_policy>(a2 + 96);
}
