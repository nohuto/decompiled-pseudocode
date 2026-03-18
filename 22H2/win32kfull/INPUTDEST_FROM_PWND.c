/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C00AE500
 * Callers:
 *     EditionNonDwmSpeedHitTest @ 0x1C00AE480 (EditionNonDwmSpeedHitTest.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C014FD24 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     EditionIsPointerInputRedirected @ 0x1C01535D0 (EditionIsPointerInputRedirected.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01C4208 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01C5070 (xxxRetrievePointerInputMessage.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C5E58 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C5FAC (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01C7178 (xxxDoDeferredPointerActivate.c)
 *     EditionNonDwmTouchHitTest @ 0x1C01E6560 (EditionNonDwmTouchHitTest.c)
 *     EditionPointerWindowHitTest @ 0x1C01E6750 (EditionPointerWindowHitTest.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01E7A64 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F49BC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     GetPTPShellTarget @ 0x1C01F69F0 (GetPTPShellTarget.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0200574 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0141600 (memset_0.c)
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
