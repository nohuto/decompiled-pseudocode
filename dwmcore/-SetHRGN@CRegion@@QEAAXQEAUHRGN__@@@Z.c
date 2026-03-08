/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180042DF0
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x18003DE08 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18004123C (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimiza.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180046020 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800F4634 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x18010DB8C (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180042EC4 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18004591C (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CRegion::SetHRGN(CRegion *this, HRGN a2)
{
  _DWORD *v2; // rax
  void *v3; // rbx
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edi
  _DWORD *v8; // rdx
  _DWORD *v9; // r8
  void *lpMem; // [rsp+30h] [rbp-78h] BYREF
  int *v11; // [rsp+40h] [rbp-68h] BYREF
  int v12; // [rsp+48h] [rbp-60h] BYREF

  v2 = *(_DWORD **)this;
  v3 = 0LL;
  lpMem = 0LL;
  *v2 = 0;
  if ( a2 )
  {
    if ( a2 == (HRGN)1 )
    {
LABEL_11:
      v8 = *(_DWORD **)this;
      v9 = (_DWORD *)(*(_QWORD *)this + 28LL);
      *v8 = 2;
      *v9 = 0x80000000;
      v9[1] = 0x7FFFFFFF;
      v8[1] = 0x80000000;
      v8[4] = (_DWORD)v9 - ((_DWORD)v8 + 12);
      v8[2] = 0x7FFFFFFF;
      v8[3] = 0x80000000;
      v8[6] = (_DWORD)v9 - ((_DWORD)v8 + 20) + 8;
      v8[5] = 0x7FFFFFFF;
      return;
    }
    v11 = &v12;
    v12 = 0;
    v5 = HrgnToRgnData(a2, (struct _RGNDATA **)&lpMem, (unsigned int *)a2);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1Cu, 0LL);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v11);
      v3 = lpMem;
    }
    else
    {
      v3 = lpMem;
      v7 = CRegion::TryAddRectangles(this, (const struct tagRECT *)lpMem + 2, *((_DWORD *)lpMem + 2));
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v11);
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v3 )
    operator delete(v3);
  if ( v7 < 0 )
    goto LABEL_11;
}
