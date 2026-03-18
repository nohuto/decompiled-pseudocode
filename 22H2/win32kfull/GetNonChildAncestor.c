/*
 * XREFs of GetNonChildAncestor @ 0x1C00255E4
 * Callers:
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0025464 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     NtUserSelectPalette @ 0x1C009A090 (NtUserSelectPalette.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00BAA10 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     _SelectPalette @ 0x1C0131050 (_SelectPalette.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C01ABDC0 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxNextWindow @ 0x1C01CA504 (xxxNextWindow.c)
 *     xxxHandleNCMouseGuys @ 0x1C0200A20 (xxxHandleNCMouseGuys.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C02224C8 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
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
