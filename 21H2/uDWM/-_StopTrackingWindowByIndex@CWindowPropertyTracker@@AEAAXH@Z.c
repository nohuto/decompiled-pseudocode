/*
 * XREFs of ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000BCC8
 * Callers:
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x18000B07C (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x18000BC04 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x180031CF0 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x18000BD78 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BDB4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180015C8C (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

void __fastcall CWindowPropertyTracker::_StopTrackingWindowByIndex(CWindowPropertyTracker *this, unsigned int a2)
{
  __int64 v3; // rbx
  struct CWindowData *WindowDataByHwnd; // rax
  unsigned int v5; // edx
  __int64 v6; // r8
  unsigned int v7; // ecx
  CWindowPropertyTracker::CPropertyChangeRecord *v8; // rsi
  __int64 v9; // rcx

  v3 = a2;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                       **(HWND **)(*(_QWORD *)this + 8LL * a2));
  if ( WindowDataByHwnd )
    CTransitionVisualController::RestoreWindow(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
      WindowDataByHwnd,
      1);
  v6 = *(_QWORD *)this;
  v7 = *((_DWORD *)this + 6);
  v8 = *(CWindowPropertyTracker::CPropertyChangeRecord **)(*(_QWORD *)this + 8 * v3);
  if ( (unsigned int)v3 >= v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  else
  {
    for ( ; (unsigned int)v3 < v7 - 1; v7 = *((_DWORD *)this + 6) )
    {
      v9 = (unsigned int)v3;
      LODWORD(v3) = v3 + 1;
      v5 = v3;
      *(_QWORD *)(v6 + 8 * v9) = *(_QWORD *)(v6 + 8LL * (unsigned int)v3);
    }
    *((_DWORD *)this + 6) = v7 - 1;
  }
  if ( v8 )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v8, v5);
}
