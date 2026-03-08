/*
 * XREFs of NtUserSetCaretPos @ 0x1C0005E60
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetCaretPos @ 0x1C0005ED8 (zzzSetCaretPos.c)
 */

__int64 __fastcall NtUserSetCaretPos(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx

  EnterCrit(0LL, 0LL);
  v4 = (int)zzzSetCaretPos(a1, a2);
  UserSessionSwitchLeaveCrit();
  return v4;
}
