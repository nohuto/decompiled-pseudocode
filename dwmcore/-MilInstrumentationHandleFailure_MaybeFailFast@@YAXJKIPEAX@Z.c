/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800C189C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x1800C1870 (-IsOOM@@YA_NJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(unsigned int a1, __int64 a2, unsigned int a3, void *a4)
{
  if ( a1 == -2003303421
    || a1 == -2003302654
    || a1 == -2147024890
    || IsOOM(a1)
    || g_dwFailFastForThreadId
    && g_dwFailFastForThreadId == GetCurrentThreadId()
    && (g_hrFailFastExpectedError >= 0 || a1 == g_hrFailFastExpectedError) )
  {
    ModuleFailFastForHRESULT(a1, a4);
  }
  DoStackCapture(a1, a3, a4);
}
