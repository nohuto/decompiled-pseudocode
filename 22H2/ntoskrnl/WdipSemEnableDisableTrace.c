/*
 * XREFs of WdipSemEnableDisableTrace @ 0x1408337F0
 * Callers:
 *     WdipSemCaptureState @ 0x140392DE8 (WdipSemCaptureState.c)
 *     WdipSemEnableSemProvider @ 0x140831D74 (WdipSemEnableSemProvider.c)
 *     WdipSemEnableContextProvider @ 0x140831EFC (WdipSemEnableContextProvider.c)
 *     WdipSemDisableContextProvider @ 0x140831FF4 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableAllProviders @ 0x1408336FC (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x1409DE834 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x140833850 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
