__int64 __fastcall DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        const struct DXGALLOCATION **a3,
        enum _D3DDDIFORMAT *a4,
        int a5,
        unsigned int a6)
{
  DISPLAY_SOURCE *v10; // rsi
  __int64 i; // rdi
  D3DKMT_MULTIPLANE_OVERLAY3 *v12; // r11
  __int64 LayerIndex; // rdx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r11
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // r8
  struct tagRECT *p_DstRect; // r9
  char v17; // dl
  struct tagRECT *p_SrcRect; // r8
  _BYTE v20[16]; // [rsp+78h] [rbp+17h] BYREF
  struct tagRECT v21; // [rsp+88h] [rbp+27h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v20,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL) + 608LL),
    0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v10 = (DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL) + 128LL)
                         + 4000LL * a2->VidPnSourceId);
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(v10);
  for ( i = 0LL; (unsigned int)i < a2->PresentPlaneCount; i = (unsigned int)(i + 1) )
  {
    v12 = a2->ppPresentPlanes[i];
    LayerIndex = v12->LayerIndex;
    if ( (v12->InputFlags.Value & 1) != 0 )
    {
      pPlaneAttributes = v12->pPlaneAttributes;
      DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        v10,
        LayerIndex,
        a3[LayerIndex],
        1u,
        pPlaneAttributes->Flags,
        &pPlaneAttributes->SrcRect,
        &pPlaneAttributes->DstRect,
        &pPlaneAttributes->ClipRect,
        pPlaneAttributes->Rotation,
        pPlaneAttributes->Blend,
        pPlaneAttributes->ColorSpace,
        pPlaneAttributes->SDRWhiteLevel,
        a4[LayerIndex],
        0);
    }
    else
    {
      v21 = 0LL;
      DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        v10,
        LayerIndex,
        0LL,
        0,
        0,
        &v21,
        &v21,
        &v21,
        D3DDDI_ROTATION_IDENTITY,
        D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
        D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
        0,
        D3DDDIFMT_UNKNOWN,
        0);
    }
  }
  pPostComposition = a2->pPostComposition;
  if ( pPostComposition )
  {
    p_DstRect = &pPostComposition->DstRect;
    v17 = 1;
    p_SrcRect = &pPostComposition->SrcRect;
  }
  else
  {
    p_DstRect = &v21;
    v21 = 0LL;
    p_SrcRect = &v21;
    v17 = 0;
  }
  DISPLAY_SOURCE::SetPostCompositionConfigUnsafe(v10, v17, p_SrcRect, p_DstRect);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  if ( a5 > -1 )
    DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), a2->VidPnSourceId, a3[a5], a6, 0);
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return 0LL;
}
