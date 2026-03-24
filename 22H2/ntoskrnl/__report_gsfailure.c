/*
 * XREFs of __report_gsfailure @ 0x1404B6390
 * Callers:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  KeBugCheckEx(0xF7u, StackCookie, _security_cookie, _security_cookie_complement, 0LL);
}
