/*
 * XREFs of zzzInputFocusLostWindowEvent @ 0x1C009BA70
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C009A850 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C009BD38 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B633C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     NtUserZapActiveAndFocus @ 0x1C01E13E0 (NtUserZapActiveAndFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     Feature_KIDV2__private_IsEnabledDeviceUsage @ 0x1C012C6EC (Feature_KIDV2__private_IsEnabledDeviceUsage.c)
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C012DF70 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

void __fastcall zzzInputFocusLostWindowEvent(struct tagWND *a1, unsigned int a2)
{
  struct tagWND *v4; // rdx
  int v5; // ecx

  if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
  {
    zzzInputFocusLostWindowEventImpl(a1, gpqForeground, a2);
  }
  else
  {
    if ( gpqForeground
      && (v4 = *(struct tagWND **)(gpqForeground + 120LL)) != 0LL
      && v4 != a1
      && *((_QWORD *)a1 + 2) == *((_QWORD *)v4 + 2) )
    {
      v5 = 35;
      if ( !gdwDeferWinEvent )
        v5 = 33;
    }
    else
    {
      v5 = 51;
      if ( !gdwDeferWinEvent )
        v5 = 49;
      v4 = a1;
    }
    xxxWindowEvent(0x80000003, v4, 0, a2, v5);
  }
}
