/*
 * XREFs of ?TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180225A1C
 * Callers:
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DB45C (-TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRect.c)
 * Callees:
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@@Z @ 0x180277F98 (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 */

bool __fastcall CCursorVisual::TryEnableHardwareCursor(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rcx
  char v6; // bl
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD v11[4]; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+70h] [rbp-18h]

  v5 = *(_QWORD *)(a1 + 720);
  v6 = 0;
  if ( v5 )
  {
    v7 = *(_OWORD *)(a5 + 16);
    v11[0] = *(_OWORD *)a5;
    v8 = *(_OWORD *)(a5 + 32);
    v11[1] = v7;
    v9 = *(_OWORD *)(a5 + 48);
    v12 = *(_DWORD *)(a5 + 64);
    v11[2] = v8;
    v11[3] = v9;
    return (unsigned __int8)CCursorState::TryEnableHardwareCursor(v5, a2, a3, a4, (CMILMatrix *)v11) != 0;
  }
  return v6;
}
