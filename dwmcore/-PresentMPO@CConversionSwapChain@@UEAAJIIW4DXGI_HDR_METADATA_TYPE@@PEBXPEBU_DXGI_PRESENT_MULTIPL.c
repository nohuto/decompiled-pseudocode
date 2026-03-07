__int64 __fastcall CConversionSwapChain::PresentMPO(
        CConversionSwapChain *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        const void *a5,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  char *v7; // r15
  __int64 v13; // rdx
  char *v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  int v18; // ecx
  int v19; // ecx
  int v20; // r9d
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r9
  int v28; // eax
  int v29; // r8d
  int v30; // edx
  int v31; // r8d
  int v32; // edx
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v36; // [rsp+20h] [rbp-E0h]
  void *v37; // [rsp+28h] [rbp-D8h]
  unsigned int v38; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+7Ch] [rbp-84h]
  _DWORD v44[4]; // [rsp+80h] [rbp-80h] BYREF
  int *v45; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+98h] [rbp-68h] BYREF
  void *v47[10]; // [rsp+E0h] [rbp-20h] BYREF
  const void *retaddr; // [rsp+188h] [rbp+88h]

  v7 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  if ( a7 )
  {
    v7 = (char *)a7;
    do
    {
      v13 = 136LL * *(unsigned int *)a6;
      v14 = (char *)this + v13 + 400;
      *(_OWORD *)v14 = *(_OWORD *)a6;
      *((_OWORD *)v14 + 1) = *((_OWORD *)a6 + 1);
      *((_OWORD *)v14 + 2) = *((_OWORD *)a6 + 2);
      *((_OWORD *)v14 + 3) = *((_OWORD *)a6 + 3);
      *((_OWORD *)v14 + 4) = *((_OWORD *)a6 + 4);
      *((_OWORD *)v14 + 5) = *((_OWORD *)a6 + 5);
      *((_OWORD *)v14 + 6) = *((_OWORD *)a6 + 6);
      *((_OWORD *)v14 + 7) = *((_OWORD *)a6 + 7);
      *((_QWORD *)v14 + 16) = *((_QWORD *)a6 + 16);
      if ( *(_DWORD *)((char *)this + v13 + 404)
        && !CConversionSwapChain::IsDesktopPlane(this, (CConversionSwapChain *)((char *)this + v13 + 400)) )
      {
        *((_BYTE *)this + 776) = 1;
        a3 &= ~2u;
      }
      a6 = (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)a6 + 136);
      --v7;
    }
    while ( v7 );
  }
  if ( (a3 & 2) != 0 )
  {
    v15 = CLegacySwapChain::Present((CD3DDevice **)this, a2, a3, (__int64)&v39, (unsigned int)v7);
    v17 = v15;
    if ( v15 >= 0 )
      goto LABEL_42;
    v37 = v7;
    v36 = 431;
    goto LABEL_40;
  }
  v15 = CConversionSwapChain::CalcPresentMode(this, &v38);
  v17 = v15;
  if ( v15 < 0 )
  {
    v37 = v7;
    v36 = 335;
    goto LABEL_40;
  }
  v18 = *((_DWORD *)this + 99);
  if ( !v18 )
  {
    v15 = CConversionSwapChain::ConvertSingleDesktopPlane(this);
    v17 = v15;
    if ( v15 < 0 )
    {
      v37 = v7;
      v36 = 343;
    }
    else
    {
      CRegion::GetRectangles((FastRegion::Internal::CRgnData **)this + 84, &v39);
      v15 = CLegacySwapChain::Present((CD3DDevice **)this, a2, a3, (__int64)&v39, (unsigned int)v7);
      v17 = v15;
      if ( v15 >= 0 )
        goto LABEL_36;
      v37 = v7;
      v36 = 350;
    }
    goto LABEL_40;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v33 = CConversionSwapChain::ConvertSingleAppPlane(this, (CConversionSwapChain *)((char *)this + 136 * v38 + 400));
    v17 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x162u, v7);
      goto LABEL_42;
    }
    std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>(
      (__int64 *)&v39,
      0LL,
      (CConversionSwapChain *)((char *)this + 760));
    v15 = CLegacySwapChain::Present((CD3DDevice **)this, a2, a3, (__int64)&v39, (unsigned int)v7);
    v17 = v15;
    if ( v15 >= 0 )
      goto LABEL_36;
    v37 = v7;
    v36 = 360;
    goto LABEL_40;
  }
  v16 = (unsigned int)(v19 - 1);
  if ( !(_DWORD)v16 )
  {
    v27 = 136LL * v38;
    v28 = *(_DWORD *)((char *)this + v27 + 428);
    v29 = *(_DWORD *)((char *)this + v27 + 440);
    v30 = *(_DWORD *)((char *)this + v27 + 436);
    v44[1] = *(_DWORD *)((char *)this + v27 + 432);
    v44[0] = v28;
    v44[2] = v30;
    v44[3] = v29;
    v31 = *(_DWORD *)((char *)this + v27 + 456);
    v32 = *(_DWORD *)((char *)this + v27 + 452);
    v41 = *(_QWORD *)((char *)this + v27 + 444);
    v42 = v32;
    v43 = v31;
    v15 = COverlaySwapChainBase::PresentDFlip(
            (unsigned int *)this,
            a2,
            a3,
            0,
            *((_QWORD *)this + 17 * v38 + 51),
            (DXGI_COLOR_SPACE_TYPE)*(_DWORD *)((char *)this + v27 + 500),
            a4,
            (__int64)a5,
            v44,
            &v41);
    v17 = v15;
    if ( v15 >= 0 )
      goto LABEL_36;
    v37 = v7;
    v36 = 390;
LABEL_40:
    v20 = v15;
    goto LABEL_41;
  }
  if ( (_DWORD)v16 == 1 )
  {
    v46 = (int)v7;
    v45 = &v46;
    v21 = FastRegion::CRegion::Copy(&v45, (int **)this + 84);
    if ( v21 < 0 )
      ModuleFailFastForHRESULT(v21, retaddr);
    if ( *((_BYTE *)this + 776) != (_BYTE)v7 )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v47, (const struct tagRECT *)((char *)this + 760));
      v22 = FastRegion::CRegion::Union(
              (const struct FastRegion::Internal::CRgnData **)&v45,
              (const struct FastRegion::Internal::CRgnData **)v47);
      if ( v22 < 0 )
        ModuleFailFastForHRESULT(v22, retaddr);
      FastRegion::CRegion::FreeMemory(v47);
    }
    CRegion::GetRectangles((FastRegion::Internal::CRgnData **)&v45, &v39);
    v23 = CConversionSwapChain::ConvertDesktopAndAppPlanes(
            this,
            (CConversionSwapChain *)((char *)this + 400),
            (CConversionSwapChain *)((char *)this + 536));
    v17 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x198u, v7);
    }
    else
    {
      v25 = CLegacySwapChain::Present((CD3DDevice **)this, a2, a3, (__int64)&v39, (unsigned int)v7);
      v17 = v25;
      if ( v25 >= 0 )
      {
        FastRegion::CRegion::FreeMemory((void **)&v45);
LABEL_36:
        **((_DWORD **)this + 84) = (_DWORD)v7;
        *((_BYTE *)this + 776) = (_BYTE)v7;
        goto LABEL_42;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x19Du, v7);
    }
    FastRegion::CRegion::FreeMemory((void **)&v45);
    goto LABEL_42;
  }
  v17 = -2003292412;
  v37 = v7;
  v20 = -2003292412;
  v36 = 418;
LABEL_41:
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v20, v36, v37);
LABEL_42:
  if ( (_QWORD)v39 )
    std::_Deallocate<16,0>((void *)v39, (v40 - v39) & 0xFFFFFFFFFFFFFFF0uLL);
  return v17;
}
