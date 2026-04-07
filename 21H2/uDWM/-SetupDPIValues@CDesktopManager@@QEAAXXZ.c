/*
 * XREFs of ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18004B37C
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180036E1C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18004A468 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18000FE20 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetupDPIValues(CDesktopManager *this)
{
  *((_QWORD *)this + 60) = 0x3FF0000000000000LL;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(1u) )
    *((double *)this + 60) = (double)(int)GetDpiForSystem() / 96.0;
}
