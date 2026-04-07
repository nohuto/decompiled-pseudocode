/*
 * XREFs of ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18000FE20
 * Callers:
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180004EAC (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x18000CCC0 (-IsEnabled@CStoryboard@@UEAA_NXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18000FD18 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025CCC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18004B37C (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180052AA0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180086FB0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     ?ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z @ 0x18009CC74 (-ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CheckAnyPreference(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 64LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
           a1);
}
