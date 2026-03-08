/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x180278C04
 * Callers:
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801B1904 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x1800C1870 (-IsOOM@@YA_NJ@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
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
