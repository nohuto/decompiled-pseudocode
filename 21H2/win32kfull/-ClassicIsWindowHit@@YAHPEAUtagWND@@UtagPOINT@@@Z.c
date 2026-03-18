/*
 * XREFs of ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C010B0A0
 * Callers:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0004C98 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C010B030 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00036E4 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C0077940 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 */

_BOOL8 __fastcall ClassicIsWindowHit(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v4; // rcx
  struct tagPOINT v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = *((_QWORD *)a1 + 5);
  return (*(_BYTE *)(v4 + 31) & 0x10) != 0
      && PtInRect((_DWORD *)(v4 + 88), *(_QWORD *)&a2)
      && !tagWND::PtOutsideClipRgnOrMaxClip(a1, &v6)
      && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 || LayerHitTest(a1, a2));
}
