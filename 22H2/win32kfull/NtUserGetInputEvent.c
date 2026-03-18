/*
 * XREFs of NtUserGetInputEvent @ 0x1C01D1CA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetInputEvent @ 0x1C011DA20 (xxxGetInputEvent.c)
 */

__int64 __fastcall NtUserGetInputEvent(unsigned int a1)
{
  __int64 InputEvent; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  InputEvent = xxxGetInputEvent(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return InputEvent;
}
