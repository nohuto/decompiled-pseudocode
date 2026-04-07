/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800043B4
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x180004454 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180004610 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     memset_0 @ 0x180057E72 (memset_0.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800BF498 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(int a1, unsigned int a2, unsigned int a3, void *a4)
{
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (a2 & 0x10) != 0 && IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  if ( a1 == -2003303421 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -2003303421;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  if ( (a2 & 4) != 0 )
    DoStackCapture(a1, a3, a4);
  if ( (a2 & 1) != 0 )
    MilInstrumentationBreak(a2, a2);
}
