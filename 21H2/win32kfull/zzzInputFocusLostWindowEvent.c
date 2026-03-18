/*
 * XREFs of zzzInputFocusLostWindowEvent @ 0x1C00A8748
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A22D8 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00A7DFC (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DB90C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     NtUserZapActiveAndFocus @ 0x1C0200B10 (NtUserZapActiveAndFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusLostWindowEvent(struct tagWND *a1, unsigned int a2)
{
  struct tagWND *v3; // rdx
  int v4; // ecx
  int v5; // r8d

  if ( gpqForeground
    && (v3 = *(struct tagWND **)(gpqForeground + 112LL)) != 0LL
    && v3 != a1
    && *((_QWORD *)a1 + 2) == *((_QWORD *)v3 + 2) )
  {
    v4 = 35;
    v5 = 33;
  }
  else
  {
    v3 = a1;
    v4 = 51;
    v5 = 49;
  }
  if ( !gdwDeferWinEvent )
    v4 = v5;
  xxxWindowEvent(0x80000003, v3, 0, a2, v4);
}
