/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C00E6A40
 * Callers:
 *     EditionNonDwmSpeedHitTest @ 0x1C00E69C0 (EditionNonDwmSpeedHitTest.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C0142F44 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     EditionIsPointerInputRedirected @ 0x1C01468A0 (EditionIsPointerInputRedirected.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01C5368 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01C61D4 (xxxRetrievePointerInputMessage.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C6FB8 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C710C (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01C82D8 (xxxDoDeferredPointerActivate.c)
 *     EditionNonDwmTouchHitTest @ 0x1C01E7610 (EditionNonDwmTouchHitTest.c)
 *     EditionPointerWindowHitTest @ 0x1C01E7800 (EditionPointerWindowHitTest.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01E8B54 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     GetPTPShellTarget @ 0x1C01F7BC0 (GetPTPShellTarget.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C020311C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_PWND(_DWORD *a1, __int64 a2)
{
  memset_0(a1, 0, 0x70uLL);
  if ( a2 )
  {
    *a1 = 4;
    *((_QWORD *)a1 + 10) = a2;
    a1[23] = 2;
  }
  return a1;
}
