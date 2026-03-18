/*
 * XREFs of NtUserGetKeyNameText @ 0x1C00AF290
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetKeyNameText(__int64 a1, volatile void *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  unsigned int KeyNameText; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v3 = a3;
  v5 = a1;
  EnterSharedCrit(a1, a2, a3);
  ProbeForWrite(a2, 2LL * v3, 2u);
  KeyNameText = _GetKeyNameText(v5, a2, v3);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return KeyNameText;
}
