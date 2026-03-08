/*
 * XREFs of GetNonChildAncestor @ 0x1C0027014
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0026E94 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     NtUserSelectPalette @ 0x1C00D0140 (NtUserSelectPalette.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F268C (xxxDrawMenuBarUnderlines.c)
 *     _SelectPalette @ 0x1C0125A20 (_SelectPalette.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C01ACF90 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxNextWindow @ 0x1C01CB604 (xxxNextWindow.c)
 *     xxxHandleNCMouseGuys @ 0x1C02035C0 (xxxHandleNCMouseGuys.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C02251D8 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNonChildAncestor(__int64 a1)
{
  __int64 v1; // r8

  v1 = a1;
  if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
  {
    do
      v1 = *(_QWORD *)(v1 + 104);
    while ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 31LL) & 0xC0) == 0x40 );
  }
  return v1;
}
