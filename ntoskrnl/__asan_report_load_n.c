void __fastcall __noreturn _asan_report_load_n(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KeBugCheckEx(0x1F2u, BugCheckParameter1, BugCheckParameter2, retaddr, 0x80uLL);
}
