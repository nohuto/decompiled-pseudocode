/*
 * XREFs of ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0078D94
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006C570 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0077660 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01DF4B0 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0205078 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x1C0021164 (GrePtInSprite.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 */

bool __fastcall DCELayerHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v2; // r8
  LONG x; // ebx
  __int64 v5; // r8
  unsigned __int8 v6; // r9
  int v7; // eax
  bool result; // al
  LONG y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  v2 = *((_QWORD *)a1 + 5);
  x = a2.x;
  result = 0;
  if ( (*(_BYTE *)(v2 + 24) & 0x20) == 0 )
  {
    if ( !PtInRect((_DWORD *)(v2 + 88), *(_QWORD *)&a2)
      || (v6 & *(_BYTE *)(v5 + 27)) != 0 && (v6 & *(_BYTE *)(v5 + 26)) != 0 )
    {
      return 1;
    }
    v7 = IsWindowDesktopComposed(a1);
    if ( (unsigned int)GrePtInSprite(
                         *(HDEV *)(gpDispInfo + 40LL),
                         *(HWND *)a1,
                         x,
                         y,
                         *((_WORD *)a1 + 128) >= 0x602u,
                         v7) )
      return 1;
  }
  return result;
}
