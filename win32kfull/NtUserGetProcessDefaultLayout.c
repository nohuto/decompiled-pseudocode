__int64 __fastcall NtUserGetProcessDefaultLayout(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 ProcessDefaultLayout; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  ProcessDefaultLayout = (int)GetProcessDefaultLayout(a1, v2, v3);
  UserSessionSwitchLeaveCrit(v5);
  return ProcessDefaultLayout;
}
