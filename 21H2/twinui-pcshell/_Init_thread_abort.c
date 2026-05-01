/*
 * XREFs of _Init_thread_abort @ 0x1800910B0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::dtor$3 @ 0x180122A0C (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageU_ea_180122A0C.c)
 *     _CortanaStoreAppExperienceManager::CreateCortanaAltTabProxyWindow_::_1_::dtor$0 @ 0x180262040 (_CortanaStoreAppExperienceManager--CreateCortanaAltTabProxyWindow_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x180263F01 (_CortanaStoreAppExperienceManager--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$0 @ 0x1803BAD05 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&stru_18064F5F8);
  *a1 = 0;
  LeaveCriticalSection(&stru_18064F5F8);
  return Init_thread_notify();
}
