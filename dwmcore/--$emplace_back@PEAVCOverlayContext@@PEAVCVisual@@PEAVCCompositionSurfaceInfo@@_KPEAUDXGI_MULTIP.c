void __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool>(
        __int64 a1,
        int a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  std::_Ref_count_base *v15; // rcx
  char v16; // [rsp+68h] [rbp-20h]
  _QWORD v17[3]; // [rsp+70h] [rbp-18h] BYREF

  v12 = a8;
  v13 = *a8;
  *a8 = 0LL;
  v17[0] = v13;
  v14 = v12[1];
  v12[1] = 0LL;
  v17[1] = v14;
  a8 = *(_QWORD **)(a1 + 8);
  v16 = a12;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool>(
    a1,
    (unsigned int)&a7,
    (unsigned int)&a8,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    (__int64)v17,
    a9,
    a10,
    a11,
    v16);
  v15 = (std::_Ref_count_base *)v12[1];
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
}
