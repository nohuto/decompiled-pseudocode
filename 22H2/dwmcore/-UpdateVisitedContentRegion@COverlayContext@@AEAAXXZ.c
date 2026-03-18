/*
 * XREFs of ?UpdateVisitedContentRegion@COverlayContext@@AEAAXXZ @ 0x1801DEA08
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801DB8A4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047C6C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047F2C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D54D8 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DFD90 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

void __fastcall COverlayContext::UpdateVisitedContentRegion(COverlayContext *this)
{
  char *v2; // rsi
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  int *v6; // [rsp+20h] [rbp-B8h] BYREF
  int v7; // [rsp+28h] [rbp-B0h] BYREF
  void *v8[10]; // [rsp+70h] [rbp-68h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( *((_DWORD *)this + 2818) )
  {
    v7 = 0;
    v6 = &v7;
    v2 = (char *)this + 11248;
    v3 = 0;
    do
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v8, (const struct tagRECT *)(*(_QWORD *)v2 + 16LL * v3));
      v4 = FastRegion::CRegion::Union(
             (const struct FastRegion::Internal::CRgnData **)&v6,
             (const struct FastRegion::Internal::CRgnData **)v8);
      if ( v4 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v4, retaddr);
      FastRegion::CRegion::FreeMemory(v8);
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 2818) );
    v5 = FastRegion::CRegion::Union(
           (const struct FastRegion::Internal::CRgnData **)this + 1397,
           (const struct FastRegion::Internal::CRgnData **)&v6);
    if ( v5 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
    *((_DWORD *)v2 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)v2, 0x10u);
    FastRegion::CRegion::FreeMemory((void **)&v6);
  }
}
