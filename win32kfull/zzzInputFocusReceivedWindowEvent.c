/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x1C009B35C
 * Callers:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C009A850 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x1C00CD3A8 (zzzReattachThreads.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00E6D24 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     EditionKeyboardInputDelegationChanged @ 0x1C012D0A0 (EditionKeyboardInputDelegationChanged.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B6E20 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     Feature_KIDV2__private_IsEnabledDeviceUsage @ 0x1C012C6EC (Feature_KIDV2__private_IsEnabledDeviceUsage.c)
 *     ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C012DFD8 (-zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

void __fastcall zzzInputFocusReceivedWindowEvent(unsigned int a1)
{
  struct tagWND *v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // ecx

  if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
  {
    zzzInputFocusReceivedWindowEventImpl(*(_QWORD *)(gpqForeground + 120LL), a1);
  }
  else
  {
    v2 = *(struct tagWND **)(gpqForeground + 120LL);
    v3 = *(_QWORD *)(*((_QWORD *)v2 + 2) + 440LL);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 40);
    else
      LODWORD(v4) = 0;
    v5 = 35;
    if ( !gdwDeferWinEvent )
      v5 = 33;
    xxxWindowEvent(0x80000002, v2, v4, a1, v5);
  }
}
