/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@PEAV1@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@_N777@Z @ 0x1801D82C8
 * Callers:
 *     ??$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@detail@@YAPEAVOverlayPlaneInfo@COverlayContext@@PEAV12@$$QEAPEAV2@$$QEAPEAVCVisual@@$$QEAPEAVCCompositionSurfaceInfo@@$$QEA_K$$QEAPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@$$QEAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@$$QEA_N888@Z @ 0x1801D7CD4 (--$construct@VOverlayPlaneInfo@COverlayContext@@PEAV2@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x1801D828C (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 */

_QWORD *COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int128 *a7,
        _QWORD *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        ...)
{
  __int128 v16; // xmm1
  _QWORD *result; // rax

  memset_0(a1, 0, 0xE0uLL);
  a1[1] = a3;
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    a1 + 2,
    a4);
  a1[20] = 0LL;
  a1[21] = 0LL;
  a1[20] = *a8;
  a1[21] = a8[1];
  a1[18] = 0LL;
  a1[19] = 0LL;
  *a8 = 0LL;
  a8[1] = 0LL;
  a1[3] = a5;
  *a1 = a2;
  *((_OWORD *)a1 + 2) = *a6;
  *((_OWORD *)a1 + 3) = a6[1];
  *((_OWORD *)a1 + 4) = a6[2];
  *((_OWORD *)a1 + 5) = a6[3];
  *((_OWORD *)a1 + 6) = a6[4];
  *((_OWORD *)a1 + 7) = a6[5];
  *((_OWORD *)a1 + 8) = a6[6];
  v16 = *a7;
  *((_BYTE *)a1 + 176) = a9;
  *((_BYTE *)a1 + 177) = a10;
  *((_BYTE *)a1 + 178) = a11;
  *((_BYTE *)a1 + 179) = a12;
  result = a1;
  *((_OWORD *)a1 + 9) = v16;
  return result;
}
