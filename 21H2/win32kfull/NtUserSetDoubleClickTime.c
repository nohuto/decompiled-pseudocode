/*
 * XREFs of NtUserSetDoubleClickTime @ 0x1C01FD1C0
 * Callers:
 *     <none>
 * Callees:
 *     _SetDoubleClickTime @ 0x1C010D2A8 (_SetDoubleClickTime.c)
 */

__int64 __fastcall NtUserSetDoubleClickTime(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)SetDoubleClickTime(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
