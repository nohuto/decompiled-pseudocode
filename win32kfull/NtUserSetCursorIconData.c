__int64 __fastcall NtUserSetCursorIconData(__int64 a1, ULONG64 a2, ULONG64 a3, ULONG64 a4)
{
  return NtUserSetCursorIconDataEx(a1, a2, a3, a4, 0);
}
