char __fastcall COverlayContext::IsCandidateDirectFlipCompatible(
        COverlayContext *this,
        struct CCompositionSurfaceInfo *a2,
        struct ISwapChainRealization *a3,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a4,
        enum DXGI_MODE_ROTATION a5,
        unsigned int a6,
        char a7,
        bool a8)
{
  char v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v17[4]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h] BYREF
  int v19; // [rsp+40h] [rbp-28h]
  int v20; // [rsp+44h] [rbp-24h]
  __int128 v21; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 88LL))(a3) )
  {
    if ( *((int *)a4 + 5) >= 0 && *((int *)a4 + 6) >= 0 )
    {
      v13 = *(_QWORD *)this;
      v17[0] = *((_DWORD *)a4 + 9);
      v17[1] = *((_DWORD *)a4 + 10);
      v17[2] = *((_DWORD *)a4 + 11);
      v17[3] = *((_DWORD *)a4 + 12);
      v14 = v13 + 8 + *(int *)(*(_QWORD *)(v13 + 8) + 12LL);
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v14 + 16LL))(v14, v16);
      v19 = v16[0];
      v20 = v16[1];
      v18 = 0LL;
      if ( *((int *)this + 2772) <= 0
        && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 56LL))(a3)
        && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 72LL))(a3) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 192LL))(a2) )
        {
          if ( (unsigned __int8)COverlayContext::IsPanelFitterCompatibleScale(this, a3, (char *)a4 + 4, (char *)a4 + 20) )
          {
            if ( EqualRect((const RECT *)((char *)a4 + 20), (const RECT *)((char *)a4 + 36)) )
            {
              v21 = *(_OWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 160LL))(*(_QWORD *)this) + 20);
              if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(&v21, v17) )
              {
                if ( (unsigned __int8)COverlayContext::IsPanelFitterCompatibleScale(this, a3, v17, &v18)
                  && a5 == DXGI_MODE_ROTATION_IDENTITY
                  && (a7 & 3) == 0
                  && (a8 && *((_BYTE *)this + 11308)
                   || *(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL)
                   || *((_BYTE *)this + 11297)
                   || a6 > 2) )
                {
                  return COverlayContext::IsDirectFlipSupportedOnTarget(this, a2, a3) != 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return v12;
}
