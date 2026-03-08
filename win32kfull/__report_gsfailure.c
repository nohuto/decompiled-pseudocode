/*
 * XREFs of __report_gsfailure @ 0x1C012BEB0
 * Callers:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 * Callees:
 *     <none>
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  __fastfail(2u);
}
