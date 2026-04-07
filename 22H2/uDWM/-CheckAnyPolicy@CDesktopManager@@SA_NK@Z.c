/*
 * XREFs of ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18003E818
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18003E3CC (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18004B638 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180051D3C (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x180097C0C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x1800985D8 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CheckAnyPolicy(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 56LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
           a1);
}
