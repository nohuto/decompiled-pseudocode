/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x1C004C1E8
 * Callers:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C004B720 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00AE86C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     EditionKeyboardInputDelegationChanged @ 0x1C01399E0 (EditionKeyboardInputDelegationChanged.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B5C70 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A998 (-zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

__int64 __fastcall zzzInputFocusReceivedWindowEvent(unsigned int a1)
{
  return zzzInputFocusReceivedWindowEventImpl(*(_QWORD *)(gpqForeground + 120LL), a1);
}
