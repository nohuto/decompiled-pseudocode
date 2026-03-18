/*
 * XREFs of ScaleDPIRect @ 0x1C00B099C
 * Callers:
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0020F78 (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     DwmChildRectChange @ 0x1C006BCDC (DwmChildRectChange.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0078980 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     CalculateLogicalMonitorRect @ 0x1C00B0650 (CalculateLogicalMonitorRect.c)
 *     GetMonitorWorkRectForDpi @ 0x1C00B088C (GetMonitorWorkRectForDpi.c)
 *     GetMonitorRectForDpi @ 0x1C00B0924 (GetMonitorRectForDpi.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E1818 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C02371B0 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C025A4C0 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
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
