/*
 * XREFs of ?IsTsDisplay@CDWMDisplay@@QEBA_NXZ @ 0x180039984
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x180037AFC (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDWMDisplay::IsTsDisplay(CDWMDisplay *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 164) || *((int *)CDesktopManager::s_pDesktopManagerInstance + 7) >= 3 )
    return 1;
  return v1;
}
