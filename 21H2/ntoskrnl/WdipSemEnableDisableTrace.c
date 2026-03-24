/*
 * XREFs of WdipSemEnableDisableTrace @ 0x140789BC8
 * Callers:
 *     WdipSemCaptureState @ 0x14039F0DC (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x140789970 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140789AC8 (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x140799338 (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x14079A6E0 (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x1409309C8 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x140789C20 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
