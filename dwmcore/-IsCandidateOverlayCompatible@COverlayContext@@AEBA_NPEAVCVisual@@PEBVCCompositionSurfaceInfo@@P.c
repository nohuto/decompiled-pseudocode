char __fastcall COverlayContext::IsCandidateOverlayCompatible(
        COverlayContext *this,
        struct CVisual *a2,
        const struct CCompositionSurfaceInfo *a3,
        struct ISwapChainRealization *a4,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a5,
        enum DXGI_MODE_ROTATION a6,
        unsigned int a7,
        bool a8)
{
  char v12; // bl

  v12 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a4 + 64LL))(a4)
    && (unsigned int)COverlayContext::FindOverlayCandidateIndex(this, a2, 0LL, 0LL) == -1
    && (unsigned int)COverlayContext::FindOverlayCandidateIndex(this, 0LL, a3, 0LL) == -1
    && (*(unsigned __int8 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)a3 + 192LL))(a3)
    && !IsRectEmpty((const RECT *)((char *)a5 + 4))
    && !IsRectEmpty((const RECT *)((char *)a5 + 20))
    && !IsRectEmpty((const RECT *)((char *)a5 + 36))
    && COverlayContext::AreSupportedStretchFactors(
         (COverlayContext *)((char *)this + 48),
         a4,
         (const struct tagRECT *)((char *)a5 + 4),
         (const struct tagRECT *)((char *)a5 + 20),
         (COverlayContext *)((char *)this + 48),
         a6 == DXGI_MODE_ROTATION_ROTATE90)
    && (a8 && *((_BYTE *)this + 11308) || *((_BYTE *)this + 11297) || a7 > 2) )
  {
    return 1;
  }
  return v12;
}
