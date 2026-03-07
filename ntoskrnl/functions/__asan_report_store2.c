void __fastcall __noreturn _asan_report_store2(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KeBugCheckEx(0x1F2u, BugCheckParameter1, 2uLL, retaddr, 0x180uLL);
}
