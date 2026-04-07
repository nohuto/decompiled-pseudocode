/*
 * XREFs of ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x180052B40
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180052AA0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180086FB0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::SetPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 72LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
    16LL);
}
