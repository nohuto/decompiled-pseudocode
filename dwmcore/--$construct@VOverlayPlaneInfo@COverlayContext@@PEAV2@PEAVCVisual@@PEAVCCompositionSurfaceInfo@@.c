__int64 __fastcall detail::construct<COverlayContext::OverlayPlaneInfo,COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool>(
        int a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8,
        char *a9,
        char *a10,
        char *a11,
        _BYTE *a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  LOBYTE(a12) = *a12;
  return COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
           a1,
           *a2,
           *a3,
           *a4,
           *a5,
           *a6,
           *a7,
           a8,
           *a9,
           *a10,
           *a11,
           a12,
           a13,
           a14,
           a15,
           a16);
}
