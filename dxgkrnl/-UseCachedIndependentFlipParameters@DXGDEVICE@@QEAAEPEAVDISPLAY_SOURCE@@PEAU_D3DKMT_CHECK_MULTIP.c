bool __fastcall DXGDEVICE::UseCachedIndependentFlipParameters(
        DXGDEVICE *this,
        struct DISPLAY_SOURCE *a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *a3)
{
  LUID *p_CompSurfaceLuid; // r8
  __int64 v6; // r10
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rcx
  int v9; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v10; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v11; // [rsp+88h] [rbp-78h] BYREF
  enum _D3DDDI_ROTATION v12; // [rsp+8Ch] [rbp-74h] BYREF
  enum D3DKMT_MULTIPLANE_OVERLAY_BLEND v13; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v14; // [rsp+94h] [rbp-6Ch] BYREF
  enum D3DDDI_COLOR_SPACE_TYPE v15; // [rsp+98h] [rbp-68h] BYREF
  int v16; // [rsp+9Ch] [rbp-64h] BYREF
  int v17; // [rsp+A0h] [rbp-60h] BYREF
  int v18; // [rsp+A4h] [rbp-5Ch] BYREF
  int v19; // [rsp+A8h] [rbp-58h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // [rsp+ACh] [rbp-54h] BYREF
  struct tagRECT v21; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v22; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v23; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v25[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v26; // [rsp+108h] [rbp+8h]

  p_CompSurfaceLuid = &a3->CompSurfaceLuid;
  if ( !(p_CompSurfaceLuid->LowPart | a3->CompSurfaceLuid.HighPart) )
    return 0;
  v6 = *((_QWORD *)this + 2);
  v26 = 0;
  VidPnSourceId = a3->VidPnSourceId;
  v9 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v10 = 0;
  v24 = 0LL;
  memset(v25, 0, sizeof(v25));
  (*(void (__fastcall **)(_QWORD, D3DDDI_VIDEO_PRESENT_SOURCE_ID *, LUID *, __int64, _OWORD *, int *, int *, unsigned int *, __int64 *, int *, int *, int *, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 408LL))(
    *(_QWORD *)(v6 + 744),
    &VidPnSourceId,
    p_CompSurfaceLuid,
    -1LL,
    v25,
    &v9,
    &v19,
    &v10,
    &v24,
    &v18,
    &v17,
    &v16,
    0LL,
    0LL);
  if ( !v9 )
    return 0;
  if ( v10 != a3->LayerIndex )
    return 0;
  v11 = 0;
  v12 = 0;
  v13 = D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE;
  v15 = D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  v14 = 0;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(a2, v10, &v11, &v23, &v21, &v22, &v12, &v13, &v15, &v14);
  pPlaneAttributes = a3->pPlaneAttributes;
  if ( v11 != pPlaneAttributes->Flags )
    return 0;
  return v21.left == pPlaneAttributes->DstRect.left
      && v21.right == pPlaneAttributes->DstRect.right
      && v21.top == pPlaneAttributes->DstRect.top
      && v21.bottom == pPlaneAttributes->DstRect.bottom
      && v12 == pPlaneAttributes->Rotation
      && v13 == pPlaneAttributes->Blend
      && v22.left == pPlaneAttributes->ClipRect.left
      && v22.right == pPlaneAttributes->ClipRect.right
      && v22.top == pPlaneAttributes->ClipRect.top
      && v22.bottom == pPlaneAttributes->ClipRect.bottom
      && v14 == pPlaneAttributes->SDRWhiteLevel
      && (v15 != pPlaneAttributes->ColorSpace
       || v23.left != pPlaneAttributes->SrcRect.left
       || v23.right != pPlaneAttributes->SrcRect.right
       || v23.top != pPlaneAttributes->SrcRect.top
       || v23.bottom != pPlaneAttributes->SrcRect.bottom);
}
