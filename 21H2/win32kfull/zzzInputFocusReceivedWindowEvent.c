/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x1C003508C
 * Callers:
 *     zzzReattachThreads @ 0x1C001194C (zzzReattachThreads.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0034774 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120404 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E131C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 */

__int64 zzzInputFocusReceivedWindowEvent()
{
  unsigned int v0; // ecx

  v0 = 35;
  if ( !gdwDeferWinEvent )
    v0 = 33;
  return xxxWindowEvent(0x80000002, v0);
}
