/*
 * XREFs of ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x18017B438
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1800905F0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
        COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  *((_BYTE *)this + 216) = *((_BYTE *)a2 + 216);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_BYTE *)this + 219) = *((_BYTE *)a2 + 219);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_BYTE *)this + 217) = *((_BYTE *)a2 + 217);
  *((_BYTE *)this + 218) = *((_BYTE *)a2 + 218);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_BYTE *)this + 220) = *((_BYTE *)a2 + 220);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_BYTE *)this + 221) = *((_BYTE *)a2 + 221);
}
