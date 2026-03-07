__int64 NtUserCreateMenu()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct tagMENU *Menu; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx

  EnterCrit(0LL, 0LL);
  Menu = InternalCreateMenu(0, v0, v1);
  v4 = 0LL;
  if ( Menu )
    v4 = *(_QWORD *)Menu;
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
