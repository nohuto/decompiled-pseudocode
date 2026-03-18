/*
 * XREFs of ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00036E4
 * Callers:
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C007783C (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0101328 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C010B0A0 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     _ChildWindowFromPointEx @ 0x1C016D33A (_ChildWindowFromPointEx.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0205078 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x1C0021164 (GrePtInSprite.c)
 */

bool __fastcall LayerHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  LONG x; // ebx
  _BYTE *v4; // rdx
  bool result; // al
  int v6; // eax
  LONG y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  v4 = (_BYTE *)*((_QWORD *)a1 + 5);
  result = 0;
  if ( (v4[24] & 0x20) == 0 )
  {
    if ( (v4[27] & 0x20) != 0 && (v4[26] & 0x20) != 0 )
      return 1;
    v6 = IsWindowDesktopComposed(a1);
    if ( (unsigned int)GrePtInSprite(
                         *(HDEV *)(gpDispInfo + 40LL),
                         *(HWND *)a1,
                         x,
                         y,
                         *((_WORD *)a1 + 128) >= 0x602u,
                         v6) )
      return 1;
  }
  return result;
}
