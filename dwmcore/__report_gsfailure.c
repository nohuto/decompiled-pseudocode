/*
 * XREFs of __report_gsfailure @ 0x18010E440
 * Callers:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x18010E404 (__raise_securityfailure.c)
 *     capture_previous_context @ 0x18010E518 (capture_previous_context.c)
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
  qword_1803E20E0 = retaddr;
  ContextRecord.Rcx = v2;
  dword_1803E20D0 = -1073740791;
  dword_1803E20D4 = 1;
  dword_1803E20E8 = 1;
  unk_1803E20F0 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
