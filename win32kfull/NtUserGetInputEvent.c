/*
 * XREFs of NtUserGetInputEvent @ 0x1C01D2CF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetInputEvent @ 0x1C0047670 (xxxGetInputEvent.c)
 */

__int64 __fastcall NtUserGetInputEvent(unsigned int a1)
{
  __int64 InputEvent; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  InputEvent = xxxGetInputEvent(a1);
  UserSessionSwitchLeaveCrit(v3);
  return InputEvent;
}
