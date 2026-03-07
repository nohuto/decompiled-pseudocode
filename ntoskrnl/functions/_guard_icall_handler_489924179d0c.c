void __fastcall __noreturn guard_icall_handler(__int64 a1, __int64 a2, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, BugCheckParameter4);
}
