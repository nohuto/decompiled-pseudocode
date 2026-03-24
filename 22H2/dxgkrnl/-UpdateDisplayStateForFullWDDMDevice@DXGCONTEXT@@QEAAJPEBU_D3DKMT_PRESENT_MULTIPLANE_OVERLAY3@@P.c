/*
 * XREFs of ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C02A78C0
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A4B6C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003610 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00F9790 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C015F9D4 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C0215564 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        const struct DXGALLOCATION **a3,
        enum _D3DDDIFORMAT *a4,
        int a5,
        unsigned int a6)
{
  DISPLAY_SOURCE *v10; // rsi
  __int64 v11; // rdx
  __int64 i; // rdi
  D3DKMT_MULTIPLANE_OVERLAY3 *v13; // r11
  __int64 LayerIndex; // rdx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r11
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // r8
  struct tagRECT *p_DstRect; // r9
  struct tagRECT *p_SrcRect; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  _BYTE v22[16]; // [rsp+78h] [rbp+17h] BYREF
  struct tagRECT v23; // [rsp+88h] [rbp+27h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v22,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL) + 520LL),
    0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v10 = (DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL) + 112LL)
                         + 3968LL * a2->VidPnSourceId);
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(v10);
  for ( i = 0LL; (unsigned int)i < a2->PresentPlaneCount; i = (unsigned int)(i + 1) )
  {
    v13 = a2->ppPresentPlanes[i];
    LayerIndex = v13->LayerIndex;
    if ( (v13->InputFlags.Value & 1) != 0 )
    {
      pPlaneAttributes = v13->pPlaneAttributes;
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
      v23 = 0LL;
      DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        v10,
        LayerIndex,
        0LL,
        0,
        0,
        &v23,
        &v23,
        &v23,
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
    LOBYTE(v11) = 1;
    p_SrcRect = &pPostComposition->SrcRect;
  }
  else
  {
    p_DstRect = &v23;
    v23 = 0LL;
    p_SrcRect = &v23;
    v11 = 0LL;
  }
  DISPLAY_SOURCE::SetPostCompositionConfigUnsafe(v10, v11, p_SrcRect, p_DstRect);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v19);
  if ( a5 > -1 )
    DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), a2->VidPnSourceId, a3[a5], a6, 0);
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v20);
  return 0LL;
}
