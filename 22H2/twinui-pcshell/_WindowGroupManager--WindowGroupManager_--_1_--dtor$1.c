/*
 * XREFs of _WindowGroupManager::WindowGroupManager_::_1_::dtor$1 @ 0x180303BA1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowGroupManager::WindowGroupManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::map<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>::~map<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>(*(_QWORD *)(a2 + 80) + 80LL);
}
