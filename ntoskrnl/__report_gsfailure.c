/*
 * XREFs of __report_gsfailure @ 0x1404FBCA0
 * Callers:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  KeBugCheckEx(0xF7u, StackCookie, _security_cookie, _security_cookie_complement, 0LL);
}
