/*
 * XREFs of ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00D08FC
 * Callers:
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00D04DC (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     EditionPostDwmSpeedHitTest @ 0x1C00D0570 (EditionPostDwmSpeedHitTest.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C00D07D0 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     IsWindowUnderActiveLockScreen @ 0x1C00D0A00 (IsWindowUnderActiveLockScreen.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00D0A80 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C01210F8 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C01513E8 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

__int64 __fastcall DCEIsWindowHit(struct tagWND *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  struct tagPOINT v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  const struct _D3DMATRIX *v10; // rdx
  const struct tagRECT *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct tagPOINT v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v15 = *a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0
    || GetWindowCloakState(a1)
    || (unsigned int)IsWindowUnderActiveLockScreen(a1, v7, v8, v9) )
  {
    return 0LL;
  }
  v10 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 27);
  v11 = (const struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( !v10 )
  {
    if ( v3.x >= v11->left
      && v3.x < *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL)
      && v3.y >= *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL)
      && v3.y < *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) )
    {
      goto LABEL_9;
    }
    return 0LL;
  }
  if ( !DCEHitTestWindow(v11, v10, &v15, a3) )
    return 0LL;
  v3 = v15;
LABEL_9:
  v12 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
  if ( v12 && !(unsigned int)GrePtInRegion(v12, (unsigned int)v3.x, (unsigned int)v15.y) )
    return 0LL;
  v13 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v13 + 26) & 8) != 0 && (*(_DWORD *)(v13 + 232) & 2) == 0 && !DCELayerHitTest(a1, v3) )
    return 0LL;
  if ( *((_QWORD *)a1 + 27) )
    *a2 = v3;
  return 1LL;
}
