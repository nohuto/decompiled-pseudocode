/*
 * XREFs of ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B47D0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B2660 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B3CA0 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B3ED0 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x1800AAF28 (-GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z.c)
 *     ?HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z @ 0x1800AB1D0 (-HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800B1DE0 (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 */

char __fastcall CGroupingStoryboard::_WindowEnumCallback(struct CStoryboard *a1, __int64 a2, char a3, _DWORD *a4)
{
  HWND v7; // rdx
  struct tagRECT v9; // [rsp+20h] [rbp-38h] BYREF

  if ( (a3 & 4) != 0
    && ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a1 + 120LL))(
          a1,
          *(_DWORD *)(a2 + 616) & 0xFFF) & 8) != 0 )
  {
    CGroupingStoryboard::_RecordUnionRect(
      (__int64)a1,
      *(unsigned int *)(a2 + 616),
      (RECT *)(a2 + ((*(_DWORD *)(a2 + 616) & 0x1000000) != 0 ? 636LL : 48LL)));
    if ( CTransitionVisualController::HasUsableBitmapResource(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
           *(HWND *)(a2 + 40),
           a1) )
    {
      v7 = *(HWND *)(a2 + 40);
      v9 = 0LL;
      if ( (int)CTransitionVisualController::GetBitmapRects(
                  *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                  v7,
                  &v9,
                  0LL) >= 0 )
        CGroupingStoryboard::_RecordUnionRect((__int64)a1, *(unsigned int *)(a2 + 616), &v9);
    }
  }
  *a4 = 0;
  return 1;
}
