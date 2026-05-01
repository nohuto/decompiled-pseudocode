/*
 * XREFs of _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$1 @ 0x1804CB637
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32AppStateManager::Win32AppStateManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::map<std::wstring,std::shared_ptr<Win32AppInfo>>::~map<std::wstring,std::shared_ptr<Win32AppInfo>>(*(_QWORD *)(a2 + 48) + 64LL);
}
