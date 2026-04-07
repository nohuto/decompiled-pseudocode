/*
 * XREFs of ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x180032EE8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800157E0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z @ 0x180032E94 (-OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180085058 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CWindowList::EndTransition(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_DWORD *)a2 + 1);
  v5 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v3, &UdwmEndTransitionRequest, v4);
  if ( v4 != -1 )
    v5 = CAnimationScheduler::OnEndTransitionRequest(
           *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
           v4);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v5;
}
