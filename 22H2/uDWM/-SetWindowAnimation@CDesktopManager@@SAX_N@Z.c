/*
 * XREFs of ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18004B638
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180036538 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x1800409D0 (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18004A3B8 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18003E818 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetWindowAnimation(char a1)
{
  char v2; // al
  char v3; // cl

  v2 = CDesktopManager::CheckAnyPolicy(1u);
  v3 = a1;
  if ( v2 )
    v3 = 0;
  *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) = v3;
}
