__int64 __fastcall EditionGetThreadDesktopEntryPoint(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 ThreadDesktop; // rbx
  __int64 v5; // rcx

  v3 = a1;
  EnterSharedCrit(a1, a2, a3);
  ThreadDesktop = GetThreadDesktop(v3);
  UserSessionSwitchLeaveCrit(v5);
  return ThreadDesktop;
}
