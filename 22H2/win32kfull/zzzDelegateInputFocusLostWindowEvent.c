/*
 * XREFs of zzzDelegateInputFocusLostWindowEvent @ 0x1C013A9F0
 * Callers:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C004B720 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C004BD48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     EditionKeyboardInputDelegationChanged @ 0x1C01399E0 (EditionKeyboardInputDelegationChanged.c)
 * Callees:
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A930 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

void __fastcall zzzDelegateInputFocusLostWindowEvent(struct tagWND *a1, unsigned int a2)
{
  __int64 KeyboardDelegationTargetQ; // rax

  KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
  zzzInputFocusLostWindowEventImpl(a1, KeyboardDelegationTargetQ, a2);
}
