/*
 * XREFs of ScaleDPIRect @ 0x1C00A3890
 * Callers:
 *     InitializeMonitorInfo @ 0x1C002D4E8 (InitializeMonitorInfo.c)
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0043D6C (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00994C4 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00A1EF8 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C00A2698 (GetMonitorRectForDpi.c)
 *     InternalGetRealClientRect @ 0x1C00A2710 (InternalGetRealClientRect.c)
 *     CalculateLogicalMonitorRect @ 0x1C00A3510 (CalculateLogicalMonitorRect.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C00A366C (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     DwmChildRectChange @ 0x1C00AD03C (DwmChildRectChange.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     GetMonitorWorkRectForDpi @ 0x1C00E1F04 (GetMonitorWorkRectForDpi.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BD154 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C0220F00 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C024E86C (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
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
