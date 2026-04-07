/*
 * XREFs of ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800923A8
 * Callers:
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x180092174 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180018414 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetWindowRootVisual(
        CProjectionBorderManager *this,
        HWND a2,
        struct CVisualProxy **a3)
{
  CDesktopManager *v5; // rax
  int SyncedWindowDataByHwnd; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct CVisualProxy *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v12; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+18h] BYREF

  v12 = this;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = CDesktopManager::s_pDesktopManagerInstance;
  *a3 = 0LL;
  v12 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)v5 + 61), a2, &v12);
  v7 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v12 )
    {
      v8 = *((_QWORD *)v12 + 48);
      if ( v8 )
      {
        v9 = *(struct CVisualProxy **)(v8 + 264);
        if ( v9 )
          v9 = (struct CVisualProxy *)*((_QWORD *)v9 + 2);
        *a3 = v9;
      }
    }
    if ( *a3 )
      v7 = 0;
    else
      v7 = -2147467261;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36E,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)SyncedWindowDataByHwnd);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v7;
}
