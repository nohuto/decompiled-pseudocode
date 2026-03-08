/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x18012B29A
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x180087264 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C8BB4 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 * Callees:
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x18012B0E8 (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x1801D828C (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 */

COverlayContext::OverlayPlaneInfo *__fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
        COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (char *)this + 16,
    *((_QWORD *)a2 + 2));
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  *((_OWORD *)this + 9) = *((_OWORD *)a2 + 9);
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>((_QWORD *)this + 20, (_QWORD *)a2 + 20);
  *((_BYTE *)this + 176) = *((_BYTE *)a2 + 176);
  *((_BYTE *)this + 177) = *((_BYTE *)a2 + 177);
  *((_BYTE *)this + 178) = *((_BYTE *)a2 + 178);
  *((_BYTE *)this + 179) = *((_BYTE *)a2 + 179);
  *((_BYTE *)this + 180) = *((_BYTE *)a2 + 180);
  *((_BYTE *)this + 181) = *((_BYTE *)a2 + 181);
  *((_BYTE *)this + 182) = *((_BYTE *)a2 + 182);
  *((_BYTE *)this + 183) = *((_BYTE *)a2 + 183);
  *((_BYTE *)this + 184) = *((_BYTE *)a2 + 184);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_BYTE *)this + 204) = *((_BYTE *)a2 + 204);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  return this;
}
