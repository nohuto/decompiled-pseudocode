/*
 * XREFs of ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x18000F960
 * Callers:
 *     ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x18000FC60 (-GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z.c)
 * Callees:
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000C6F8 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x18000FA80 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?GetDefaultWindowMarginsForWindowStyle@@YA?AU_MARGINS@@KKKN@Z @ 0x18000FAA0 (-GetDefaultWindowMarginsForWindowStyle@@YA-AU_MARGINS@@KKKN@Z.c)
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x18001514C (--8@YA_NAEBU_MARGINS@@0@Z.c)
 */

char __fastcall IsWindowSetToDefaultMargins(const struct CWindowData *a1)
{
  float v2; // xmm6_4
  __int64 WindowDpiAwarenessContext; // rax
  int AwarenessFromDpiAwarenessContext; // eax
  char v5; // di
  __int64 v6; // rcx
  unsigned int DpiForWindow; // eax
  HMONITOR v9; // rax
  struct _MARGINS v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  enum DEVICE_SCALE_FACTOR v12; // [rsp+70h] [rbp+8h] BYREF

  v2 = FLOAT_1_0;
  WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(*((_QWORD *)a1 + 5));
  AwarenessFromDpiAwarenessContext = GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext);
  v5 = 1;
  if ( AwarenessFromDpiAwarenessContext )
  {
    if ( AwarenessFromDpiAwarenessContext != 1 )
      v2 = *((float *)a1 + 76);
  }
  else
  {
    v9 = MonitorFromWindow(*((HWND *)a1 + 5), 1u);
    if ( (int)GetScaleFactorForMonitorImp(v9, &v12) >= 0 )
      v2 = *((float *)a1 + 76) / (float)((float)v12 / 100.0);
  }
  v6 = *((_QWORD *)a1 + 5);
  v11 = *(_OWORD *)((char *)a1 + 244);
  DpiForWindow = GetDpiForWindow(v6);
  v10 = *GetDefaultWindowMarginsForWindowStyle(&v10, *((_DWORD *)a1 + 25), *((_DWORD *)a1 + 26), DpiForWindow, v2);
  if ( !AreAllMarginsZero((const struct _MARGINS *)a1 + 5) || !(unsigned __int8)operator==(&v11, &v10) )
    return 0;
  return v5;
}
