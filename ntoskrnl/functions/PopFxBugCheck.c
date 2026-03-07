void __fastcall __noreturn PopFxBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
