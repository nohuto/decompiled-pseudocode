/*
 * XREFs of NtUserGetKeyNameText @ 0x1C0120850
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetKeyNameText(unsigned int a1, volatile void *a2, unsigned int a3)
{
  unsigned int KeyNameText; // ebx
  __int64 v7; // rcx

  EnterSharedCrit(0LL, 1LL);
  ProbeForWrite(a2, 2LL * a3, 2u);
  KeyNameText = _GetKeyNameText(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v7);
  return KeyNameText;
}
