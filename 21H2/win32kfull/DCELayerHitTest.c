/*
 * XREFs of DCELayerHitTest @ 0x1C0016E7C
 * Callers:
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C004DB1C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0167BF4 (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01E4F40 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C021575C (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x1C0016F2C (GrePtInSprite.c)
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 */

_BOOL8 __fastcall DCELayerHitTest(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v5; // r8
  unsigned __int8 v6; // r9
  unsigned __int16 v7; // di
  int v8; // eax
  _BOOL8 result; // rax
  int v10; // [rsp+4Ch] [rbp+14h]

  v10 = HIDWORD(a2);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  result = 0;
  if ( (*(_BYTE *)(v2 + 24) & 0x20) == 0 )
  {
    if ( !(unsigned int)PtInRect(v2 + 88) || (v6 & *(_BYTE *)(v5 + 27)) != 0 && (v6 & *(_BYTE *)(v5 + 26)) != 0 )
      return 1;
    v7 = *(_WORD *)(a1 + 256);
    v8 = IsWindowDesktopComposed(a1);
    if ( (unsigned int)GrePtInSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, v3, v10, v7 >= 0x602u, v8) )
      return 1;
  }
  return result;
}
