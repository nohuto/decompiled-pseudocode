__int64 __fastcall NtUserSetCaretPos(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx

  EnterCrit(0LL, 0LL);
  v4 = (int)zzzSetCaretPos(a1, a2);
  UserSessionSwitchLeaveCrit();
  return v4;
}
