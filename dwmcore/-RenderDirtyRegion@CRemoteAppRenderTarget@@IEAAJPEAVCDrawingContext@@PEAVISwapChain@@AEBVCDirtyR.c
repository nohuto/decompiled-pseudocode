__int64 __fastcall CRemoteAppRenderTarget::RenderDirtyRegion(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2,
        struct ISwapChain *a3,
        const struct CDirtyRegion *a4,
        enum CRemoteAppRenderTarget::ProtectionMode *a5)
{
  unsigned int v7; // edi
  unsigned int v10; // ebx
  struct IDeviceTarget *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  bool IsCurrent; // al
  struct CVisual *v15; // r11
  struct CVisualTree *v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rcx
  struct MilRectF *v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-71h]
  _QWORD v26[2]; // [rsp+50h] [rbp-41h] BYREF
  __int128 v27; // [rsp+60h] [rbp-31h] BYREF
  __int128 v28; // [rsp+70h] [rbp-21h] BYREF
  int v29; // [rsp+80h] [rbp-11h]
  int v30; // [rsp+84h] [rbp-Dh]
  float v31[4]; // [rsp+88h] [rbp-9h] BYREF

  v7 = 0;
  *(_DWORD *)a5 = 0;
  v10 = 0;
  if ( *(_QWORD *)CDirtyRegion::GetDirtyRects((__int64)a4, (gsl::details *)v31) )
  {
    CRemoteAppRenderTarget::GetTreeBounds((__int64)this, (__int64)v31);
    v11 = (struct IDeviceTarget *)(**(__int64 (__fastcall ***)(struct ISwapChain *))a3)(a3);
    v12 = CDrawingContext::BeginFrame(
            a2,
            v11,
            (CRemoteAppRenderTarget *)((char *)this + 184),
            (const struct _D3DCOLORVALUE *)((char *)this + 124),
            0LL);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x23Bu, 0LL);
      return v10;
    }
    if ( *((_DWORD *)a4 + 705) )
    {
      do
      {
        v26[0] = 0LL;
        v26[1] = 0LL;
        CDirtyRegion::GetOptimizedRect((__int64)a4, &v27, v7, v31, 0LL, 0LL, 0, v26, 0LL);
        if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v27) )
        {
          IsCurrent = COcclusionContext::IsCurrent((const struct CDirtyRegion *)((char *)a4 + 16));
          v29 &= (unsigned int)v15;
          v30 &= (unsigned int)v15;
          v16 = (struct CVisualTree *)*((_QWORD *)this + 12);
          v25 = *((_BYTE *)this + 140) != 0 ? 2 : 0;
          v28 = v27;
          v10 = CDrawingContext::DrawVisualTree(
                  a2,
                  v16,
                  (float *)&v28,
                  (COcclusionContext *)(v17 & -(__int64)IsCurrent),
                  v25,
                  (char)v15,
                  v15);
          if ( (v10 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v10, 0x24Au, 0LL);
            CDrawingContext::EndFrame(a2);
            return v10;
          }
          v19 = (struct MilRectF *)&v27;
          if ( *((_BYTE *)a4 + 4420) )
            v19 = 0LL;
          CRemoteAppRenderTarget::NotifyRenderedRect((__int64)this, (__int64)a3, v19);
        }
        ++v7;
      }
      while ( v7 < *((_DWORD *)a4 + 705) );
    }
    if ( *((_BYTE *)a2 + 8092) )
    {
      *(_DWORD *)a5 = 2;
    }
    else if ( *((_BYTE *)a4 + 4420) )
    {
      *(_DWORD *)a5 = 1;
    }
    v20 = CDrawingContext::EndFrame(a2);
    v10 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x25Bu, 0LL);
      return v10;
    }
  }
  if ( g_LockAndReadOffscreenTarget )
  {
    v22 = (**(__int64 (__fastcall ***)(struct ISwapChain *))a3)(a3);
    v23 = *(int *)(*(_QWORD *)(v22 + 8) + 16LL) + v22 + 8;
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 24LL))(
      v23,
      ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  }
  return v10;
}
