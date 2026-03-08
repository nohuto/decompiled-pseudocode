/*
 * XREFs of IsVisible @ 0x1C00A66A0
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0006508 (-UT_InvertCaret@@YAXXZ.c)
 *     SpbCheckRect @ 0x1C000B2CC (SpbCheckRect.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C000B42C (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     xxxDrawCaptionBar @ 0x1C0021730 (xxxDrawCaptionBar.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxSetScrollBar @ 0x1C00A60D8 (xxxSetScrollBar.c)
 *     xxxDrawWindowFrame @ 0x1C00A64E4 (xxxDrawWindowFrame.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D4D10 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     RestoreSpb @ 0x1C01FA57C (RestoreSpb.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C022C2A0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxScrollWindowEx @ 0x1C0231B34 (xxxScrollWindowEx.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1C0251AB0 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
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
