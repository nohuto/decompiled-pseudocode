/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18027C344
 * Callers:
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801B4B04 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x1800C22CC (-IsOOM@@YA_NJ@Z.c)
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 */

void __fastcall MilFailFastForHR(DWORD a1, void *a2)
{
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = a1;
  pExceptionRecord.ExceptionAddress = a2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
