void __stdcall __noreturn EngBugCheckEx(ULONG BugCheckCode, ULONG_PTR P1, ULONG_PTR P2, ULONG_PTR P3, ULONG_PTR P4)
{
  KeBugCheckEx(BugCheckCode, P1, P2, P3, P4);
}
