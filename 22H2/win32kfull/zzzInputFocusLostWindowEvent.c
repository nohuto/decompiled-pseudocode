/*
 * XREFs of zzzInputFocusLostWindowEvent @ 0x1C0034F7C
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00319A0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00346D4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D1EC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DFB20 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ZapActiveAndFocus @ 0x1C0248C80 (ZapActiveAndFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 */

__int64 __fastcall zzzInputFocusLostWindowEvent(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ecx
  int v3; // r8d

  if ( gpqForeground
    && (v1 = *(_QWORD *)(gpqForeground + 112LL)) != 0
    && v1 != a1
    && *(_QWORD *)(a1 + 16) == *(_QWORD *)(v1 + 16) )
  {
    v2 = 35;
    v3 = 33;
  }
  else
  {
    v2 = 51;
    v3 = 49;
  }
  if ( !gdwDeferWinEvent )
    v2 = v3;
  return xxxWindowEvent(0x80000003, v2);
}
