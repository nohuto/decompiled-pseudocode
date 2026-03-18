/*
 * XREFs of __report_gsfailure @ 0x1C00D5A00
 * Callers:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 * Callees:
 *     <none>
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  __fastfail(2u);
}
