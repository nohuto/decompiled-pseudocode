/*
 * XREFs of ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00D0A80
 * Callers:
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00D08FC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121240 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C0151C40 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E46EC (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x1C00F76E8 (GrePtInSprite.c)
 */

bool __fastcall DCELayerHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v4; // rdx
  int v5; // eax

  v4 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v4 + 24) & 0x20) != 0 )
    return 0;
  if ( a2.x < *(_DWORD *)(v4 + 88)
    || a2.x >= *(_DWORD *)(v4 + 96)
    || a2.y < *(_DWORD *)(v4 + 92)
    || a2.y >= *(_DWORD *)(v4 + 100)
    || (*(_BYTE *)(v4 + 27) & 0x20) != 0 && (*(_BYTE *)(v4 + 26) & 0x20) != 0 )
  {
    return 1;
  }
  v5 = IsWindowDesktopComposed(a1);
  return (unsigned int)GrePtInSprite(*(HDEV *)(gpDispInfo + 40LL), *((_WORD *)a1 + 128) >= 0x602u, v5) != 0;
}
