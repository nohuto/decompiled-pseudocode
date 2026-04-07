/*
 * XREFs of ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18000F5E0
 * Callers:
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180004EAC (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x18000C480 (-IsEnabled@CStoryboard@@UEAA_NXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18000F4D8 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18002548C (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18004B2CC (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x1800529F0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180086D40 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     ?ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z @ 0x18009CA04 (-ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CheckAnyPreference(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 64LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
           a1);
}
