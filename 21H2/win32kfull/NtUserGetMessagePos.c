/*
 * XREFs of NtUserGetMessagePos @ 0x1C0101D50
 * Callers:
 *     <none>
 * Callees:
 *     _GetMessagePos @ 0x1C0101D84 (_GetMessagePos.c)
 */

__int64 __fastcall NtUserGetMessagePos(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int MessagePos; // ebx
  __int64 v4; // rcx

  EnterSharedCrit(a1, a2, a3);
  MessagePos = GetMessagePos();
  UserSessionSwitchLeaveCrit(v4);
  return MessagePos;
}
