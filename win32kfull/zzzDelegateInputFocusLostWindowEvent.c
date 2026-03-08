/*
 * XREFs of zzzDelegateInputFocusLostWindowEvent @ 0x1C012E030
 * Callers:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C009A850 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C009AEB4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     EditionKeyboardInputDelegationChanged @ 0x1C012D0A0 (EditionKeyboardInputDelegationChanged.c)
 * Callees:
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C012DF70 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

void __fastcall zzzDelegateInputFocusLostWindowEvent(struct tagWND *a1, unsigned int a2)
{
  __int64 KeyboardDelegationTargetQ; // rax

  KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
  zzzInputFocusLostWindowEventImpl(a1, KeyboardDelegationTargetQ, a2);
}
