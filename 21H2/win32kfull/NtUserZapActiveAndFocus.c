/*
 * XREFs of NtUserZapActiveAndFocus @ 0x1C0200B10
 * Callers:
 *     <none>
 * Callees:
 *     zzzInputFocusLostWindowEvent @ 0x1C00A8748 (zzzInputFocusLostWindowEvent.c)
 */

__int64 NtUserZapActiveAndFocus()
{
  tagQ *v0; // rbx
  struct tagWND *v1; // rax
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v0 = *(tagQ **)(gptiCurrent + 432LL);
  HMAssignmentUnlock((char *)v0 + 120);
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
