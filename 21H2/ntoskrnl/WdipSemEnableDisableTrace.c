/*
 * XREFs of WdipSemEnableDisableTrace @ 0x140816288
 * Callers:
 *     WdipSemCaptureState @ 0x1403AE2A4 (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x140816040 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140816190 (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x14083F84C (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x140840BE4 (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x1409DB3FC (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x1408162E0 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
