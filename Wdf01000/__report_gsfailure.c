void __fastcall __noreturn _report_gsfailure(ULONG_PTR StackCookie)
{
  KeBugCheckEx(0xF7u, StackCookie, _security_cookie, _security_cookie_complement, 0LL);
}
