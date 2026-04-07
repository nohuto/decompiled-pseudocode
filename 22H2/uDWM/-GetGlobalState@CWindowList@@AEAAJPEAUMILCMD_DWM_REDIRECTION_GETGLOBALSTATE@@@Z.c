/*
 * XREFs of ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x180097C0C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180031850 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18000F674 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18003E818 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 */

__int64 __fastcall CWindowList::GetGlobalState(CWindowList *this, struct MILCMD_DWM_REDIRECTION_GETGLOBALSTATE *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // esi
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = -2147024809;
  if ( *((_DWORD *)a2 + 1) == 16 )
  {
    v4 = *((_DWORD *)a2 + 2);
    v3 = 0;
    v5 = 1;
    if ( (v4 & 1) != 0 )
    {
      if ( !CDesktopManager::IsFeatureEnabled(0) || *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 139) )
        v5 = 0;
      v4 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 3) = v5;
    }
    if ( (v4 & 2) != 0 )
      *((_DWORD *)a2 + 4) = (unsigned __int8)CDesktopManager::CheckAnyPolicy(2u) == 0;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v3;
}
