__int64 __fastcall NtUserGetCursorPos(struct tagPOINT *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 CursorPos; // rbx
  __int64 v6; // rcx

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  CursorPos = (int)xxxGetCursorPos(a1, v3);
  UserSessionSwitchLeaveCrit(v6);
  return CursorPos;
}
