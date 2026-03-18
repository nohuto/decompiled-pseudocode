/*
 * XREFs of NtUserGetCursorPos @ 0x1C009E950
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C009E99C (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 */

__int64 __fastcall NtUserGetCursorPos(struct tagPOINT *a1, unsigned int a2)
{
  __int64 CursorPos; // rbx
  __int64 v5; // rcx

  EnterSharedCrit();
  CursorPos = (int)xxxGetCursorPos(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return CursorPos;
}
