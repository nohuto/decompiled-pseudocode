/*
 * XREFs of IsVisible @ 0x1C006C350
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00638D4 (xxxDrawWindowFrame.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00C2950 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxSetScrollBar @ 0x1C00C64F8 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00C6AA0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     SpbCheckRect @ 0x1C00DC7C0 (SpbCheckRect.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C00DC928 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     RestoreSpb @ 0x1C0158DC0 (RestoreSpb.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0240BC8 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1C025D360 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsVisible(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  char v3; // al

  v1 = a1;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v2 = *(_QWORD *)(v1 + 40);
    v3 = *(_BYTE *)(v2 + 31);
    if ( (v3 & 0x10) == 0 || (v3 & 0x20) != 0 && v1 != a1 )
      break;
    if ( (*(_WORD *)(v2 + 42) & 0x2FFF) != 0x29D )
    {
      v1 = *(_QWORD *)(v1 + 104);
      if ( v1 )
        continue;
    }
    return 1LL;
  }
  return 0LL;
}
