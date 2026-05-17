/*
 * XREFs of KiUserCallbackDispatcherHandler @ 0x1800A12C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     ZwCallbackReturn @ 0x18009D580 (ZwCallbackReturn.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF3C0 (LdrpLogFatalUserCallbackException.c)
 *     RtlRaiseStatus @ 0x180102540 (RtlRaiseStatus.c)
 */

__int64 __fastcall KiUserCallbackDispatcherHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID TargetFrame,
        PCONTEXT ContextRecord)
{
  unsigned int ExceptionCode; // [rsp+30h] [rbp-8h]

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000) == 0 )
  {
    LdrpLogFatalUserCallbackException(ExceptionRecord, ContextRecord);
    return 0LL;
  }
  if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
  {
    ExceptionCode = ExceptionRecord->ExceptionCode;
    RtlUnwindEx(
      TargetFrame,
      &KiUserCallbackDispatcherContinue,
      ExceptionRecord,
      (PVOID)(unsigned int)ExceptionRecord->ExceptionCode,
      ContextRecord,
      0LL);
    goto LABEL_5;
  }
  if ( (ExceptionRecord->ExceptionFlags & 0x20) == 0 )
  {
    ExceptionCode = ZwCallbackReturn();
LABEL_5:
    RtlRaiseStatus(ExceptionCode);
  }
  return 1LL;
}
