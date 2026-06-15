/*
 * XREFs of __report_gsfailure @ 0x14001D090
 * Callers:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x14001D02C (__raise_securityfailure.c)
 *     capture_previous_context @ 0x14001D29C (capture_previous_context.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  capture_previous_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_14008F770 = retaddr;
  ContextRecord.Rcx = v2;
  dword_14008F760 = -1073740791;
  dword_14008F764 = 1;
  dword_14008F778 = 1;
  unk_14008F780 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
