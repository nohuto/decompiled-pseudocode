/*
 * XREFs of RtlRaiseNoncontinuableException @ 0x1404077C0
 * Callers:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 * Callees:
 *     RtlpCaptureContext @ 0x1404070B0 (RtlpCaptureContext.c)
 */

void __cdecl __noreturn RtlRaiseNoncontinuableException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  char v2; // r8
  _CONTEXT *v3; // [rsp+28h] [rbp-10h]
  EXCEPTION_RECORD *v4; // [rsp+30h] [rbp-8h]
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]
  char v6; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext();
  v3->Rsp = (unsigned __int64)&v6;
  v3->Rip = retaddr;
  v4->ExceptionAddress = (void *)v3->Rip;
  if ( v2 )
    RtlDispatchException(v4, v3);
  else
    ZwRaiseException(v4, v3, 0);
}
