/*
 * XREFs of RtlGuardRestoreContext @ 0x1403402B8
 * Callers:
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 * Callees:
 *     RtlGuardCheckExceptionHandler @ 0x140340314 (RtlGuardCheckExceptionHandler.c)
 *     RtlRestoreContext @ 0x140407380 (RtlRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058F388 (RtlGuardCheckLongJumpTarget.c)
 */

void __fastcall RtlGuardRestoreContext(PCONTEXT ContextRecord, _EXCEPTION_RECORD *ExceptionRecord, BOOL *a3)
{
  if ( ExceptionRecord )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483610 )
    {
      RtlGuardCheckLongJumpTarget(*(PVOID *)(ExceptionRecord->ExceptionInformation[0] + 80), (BOOL)ExceptionRecord, a3);
    }
    else if ( ExceptionRecord->ExceptionCode == -1073741785 )
    {
      RtlGuardCheckExceptionHandler((PVOID)ContextRecord->Rip);
    }
  }
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
