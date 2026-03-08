/*
 * XREFs of NtUserZapActiveAndFocus @ 0x1C01E13E0
 * Callers:
 *     <none>
 * Callees:
 *     zzzInputFocusLostWindowEvent @ 0x1C009BA70 (zzzInputFocusLostWindowEvent.c)
 */

__int64 NtUserZapActiveAndFocus()
{
  tagQ *v0; // rbx
  struct tagWND *v1; // rax
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v0 = *(tagQ **)(gptiCurrent + 432LL);
  tagQ::SetActiveWindow(v0, 0LL);
  v1 = tagQ::UnlockFocusWnd(v0);
  if ( v1 )
  {
    v2 = gpqForeground;
    if ( v0 == (tagQ *)gpqForeground )
      zzzInputFocusLostWindowEvent(v1, 0xBu);
  }
  UserSessionSwitchLeaveCrit(v2);
  return 1LL;
}
