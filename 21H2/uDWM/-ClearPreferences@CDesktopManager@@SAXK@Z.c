/*
 * XREFs of ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x1800529B0
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800527C0 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180086FB0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::ClearPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 80LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
    16LL);
}
