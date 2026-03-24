/*
 * XREFs of ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C01267D0
 * Callers:
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0126760 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0214DDC (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 * Callees:
 *     LayerHitTest @ 0x1C0006BE4 (LayerHitTest.c)
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 */

_BOOL8 __fastcall ClassicIsWindowHit(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v2; // r8
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int y; // [rsp+3Ch] [rbp+14h]

  y = a2.y;
  v2 = *((_QWORD *)a1 + 5);
  return (*(_BYTE *)(v2 + 31) & 0x10) != 0
      && PtInRect((_DWORD *)(v2 + 88), *(_QWORD *)&a2)
      && ((v7 = *(_QWORD *)(v6 + 168)) == 0 || (unsigned int)GrePtInRegion(v7, (unsigned int)a2.x, y))
      && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 || LayerHitTest((__int64)a1, *(_QWORD *)&a2));
}
