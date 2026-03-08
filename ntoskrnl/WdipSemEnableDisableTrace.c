/*
 * XREFs of WdipSemEnableDisableTrace @ 0x140833B40
 * Callers:
 *     WdipSemCaptureState @ 0x140391168 (WdipSemCaptureState.c)
 *     WdipSemEnableSemProvider @ 0x1408320C4 (WdipSemEnableSemProvider.c)
 *     WdipSemEnableContextProvider @ 0x14083224C (WdipSemEnableContextProvider.c)
 *     WdipSemDisableContextProvider @ 0x140832344 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableAllProviders @ 0x140833A4C (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x1409DB994 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x140833BA0 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
