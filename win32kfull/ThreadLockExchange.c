/*
 * XREFs of ThreadLockExchange @ 0x1C010A0D0
 * Callers:
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C0015858 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00356C8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00B87A0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00B88F8 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00B8A98 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C00C3680 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C0109FBC (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     EditionPointerParentNotify @ 0x1C01C7B00 (EditionPointerParentNotify.c)
 *     xxxOldNextWindow @ 0x1C01CBDC8 (xxxOldNextWindow.c)
 *     xxxMNChar @ 0x1C0219CB8 (xxxMNChar.c)
 *     xxxMNSetTop @ 0x1C021CD94 (xxxMNSetTop.c)
 *     xxxMenuDraw @ 0x1C0238E5C (xxxMenuDraw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadLockExchange(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( a1 )
    HMLockObject(a1);
  if ( v2 )
    return HMUnlockObject(v2);
  return v2;
}
