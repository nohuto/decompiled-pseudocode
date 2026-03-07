// attributes: thunk
void __stdcall EngBugCheckEx_0(ULONG BugCheckCode, ULONG_PTR P1, ULONG_PTR P2, ULONG_PTR P3, ULONG_PTR P4)
{
  EngBugCheckEx(BugCheckCode, P1, P2, P3, P4);
}
