/*
 * XREFs of ScaleDPIRect @ 0x1C00D1E80
 * Callers:
 *     GetMonitorWorkRectForDpi @ 0x1C00AAE34 (GetMonitorWorkRectForDpi.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00CFAA0 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C00CFCCC (GetMonitorRectForDpi.c)
 *     _MonitorFromRect @ 0x1C00D0160 (_MonitorFromRect.c)
 *     CalculateLogicalMonitorRect @ 0x1C00D0B34 (CalculateLogicalMonitorRect.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00D1ABC (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C00D1C5C (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     InitializeMonitorInfo @ 0x1C00D516C (InitializeMonitorInfo.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     DwmChildRectChange @ 0x1C00EDE40 (DwmChildRectChange.c)
 *     InternalGetRealClientRect @ 0x1C00EF568 (InternalGetRealClientRect.c)
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C011B17C (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BBFB0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C021E2F8 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C024BBAC (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScaleDPIRect(
        _DWORD *a1,
        __m128i *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int64 a5,
        __int64 a6)
{
  INT v7; // ebp
  __m128i v8; // xmm6
  INT v9; // esi
  int v10; // ebx
  int v11; // edi
  __int64 result; // rax

  v7 = a3;
  v8 = *a2;
  v9 = a4;
  v10 = _mm_cvtsi128_si32(*a2);
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 4));
  *a1 = a5 + EngMulDiv(v10 - a6, a3, a4);
  a1[1] = HIDWORD(a5) + EngMulDiv(v11 - HIDWORD(a6), v7, v9);
  a1[2] = *a1 + EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - v10, v7, v9);
  result = (unsigned int)(a1[1] + EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v11, v7, v9));
  a1[3] = result;
  return result;
}
