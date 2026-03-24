/*
 * XREFs of ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C004DB1C
 * Callers:
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C004C878 (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxDCompSpeedHitTest @ 0x1C004CF2C (xxxDCompSpeedHitTest.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C004DDA4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     DCELayerHitTest @ 0x1C0016E7C (DCELayerHitTest.c)
 *     GetWindowCloakState @ 0x1C004DC0C (GetWindowCloakState.c)
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C004DEE4 (IsWindowUnderActiveLockScreen.c)
 *     DCEHitTestWindow @ 0x1C01E4C34 (DCEHitTestWindow.c)
 */

__int64 __fastcall DCEIsWindowHit(struct tagWND *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64)*a2;
  v12 = (__int64)*a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0
    || (unsigned int)GetWindowCloakState(a1)
    || (unsigned int)IsWindowUnderActiveLockScreen(a1) )
  {
    return 0LL;
  }
  v7 = *((_QWORD *)a1 + 27);
  v8 = *((_QWORD *)a1 + 5) + 88LL;
  if ( !v7 )
  {
    if ( (unsigned int)PtInRect(v8) )
      goto LABEL_6;
    return 0LL;
  }
  if ( !(unsigned int)DCEHitTestWindow(v8, v7, &v12, a3) )
    return 0LL;
  v3 = v12;
LABEL_6:
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
  if ( v9 && !(unsigned int)GrePtInRegion(v9, (unsigned int)v3, HIDWORD(v12)) )
    return 0LL;
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v10 + 26) & 8) != 0 && (*(_DWORD *)(v10 + 232) & 0x20) == 0 && !DCELayerHitTest((__int64)a1, v3) )
    return 0LL;
  if ( *((_QWORD *)a1 + 27) )
    *a2 = (struct tagPOINT)v3;
  return 1LL;
}
