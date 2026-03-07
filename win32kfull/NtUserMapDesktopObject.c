__int64 __fastcall NtUserMapDesktopObject(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = MapDesktopObject(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
