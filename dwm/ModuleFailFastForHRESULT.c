/*
 * XREFs of ModuleFailFastForHRESULT @ 0x14000BD40
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x14000E1AC (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x140003144 (-IsOOM@@YA_NJ@Z.c)
 *     memset_0 @ 0x1400063A8 (memset_0.c)
 */

void __fastcall ModuleFailFastForHRESULT(DWORD a1, void *a2)
{
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = a1;
  pExceptionRecord.ExceptionAddress = a2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
  JUMPOUT(0x14000BDA2LL);
}
