/*
 * XREFs of ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18024F8F8
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@$4PPPPPPPM@A@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800F7740 (-PresentMPO@CConversionSwapChain@@$4PPPPPPPM@A@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18009B838 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ??1CRegion@@QEAA@XZ @ 0x18009BAC8 (--1CRegion@@QEAA@XZ.c)
 *     ??0CRegion@@QEAA@XZ @ 0x18009BAD4 (--0CRegion@@QEAA@XZ.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x1800D0A28 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800EDF94 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800F1D48 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800F1F70 (-IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 *     ?push_back@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAXAEBUtagRECT@@@Z @ 0x1800F2078 (-push_back@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18016B820 (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ??0CRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180174314 (--0CRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180249DA4 (-PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_M.c)
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x18024E038 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18024E34C (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18024EBA4 (-ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x18024ED10 (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CConversionSwapChain::PresentMPO(
        CConversionSwapChain *this,
        unsigned int a2,
        char a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        const void *a5,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  __int64 v12; // r14
  __int64 v13; // rdx
  char *v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  unsigned int v28; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  _DWORD v31[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h]
  void *v35[10]; // [rsp+90h] [rbp-70h] BYREF
  void *v36[10]; // [rsp+E0h] [rbp-20h] BYREF

  v30 = 0LL;
  v29 = 0LL;
  if ( a7 )
  {
    v12 = a7;
    do
    {
      v13 = *(unsigned int *)a6;
      v14 = (char *)this + 136 * v13 - 456;
      *(_OWORD *)v14 = *(_OWORD *)a6;
      *((_OWORD *)v14 + 1) = *((_OWORD *)a6 + 1);
      *((_OWORD *)v14 + 2) = *((_OWORD *)a6 + 2);
      *((_OWORD *)v14 + 3) = *((_OWORD *)a6 + 3);
      *((_OWORD *)v14 + 4) = *((_OWORD *)a6 + 4);
      *((_OWORD *)v14 + 5) = *((_OWORD *)a6 + 5);
      *((_OWORD *)v14 + 6) = *((_OWORD *)a6 + 6);
      *((_OWORD *)v14 + 7) = *((_OWORD *)a6 + 7);
      *((_QWORD *)v14 + 16) = *((_QWORD *)a6 + 16);
      if ( *((_DWORD *)this + 34 * v13 - 113)
        && !CConversionSwapChain::IsDesktopPlane(
              (CConversionSwapChain *)((char *)this - 776),
              (CConversionSwapChain *)((char *)this + 136 * v13 - 456)) )
      {
        *((_BYTE *)this - 80) = 1;
        a3 &= ~2u;
      }
      a6 = (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)a6 + 136);
      --v12;
    }
    while ( v12 );
  }
  v15 = CConversionSwapChain::CalcPresentMode((CConversionSwapChain *)((char *)this - 776), &v28);
  v17 = v15;
  if ( v15 < 0 )
  {
    v27 = 328;
    goto LABEL_31;
  }
  v18 = *((_DWORD *)this - 115);
  if ( !v18 )
  {
    v15 = CConversionSwapChain::ConvertSingleDesktopPlane((CConversionSwapChain *)((char *)this - 776));
    v17 = v15;
    if ( v15 < 0 )
    {
      v27 = 336;
    }
    else
    {
      CRegion::GetRectangles((int **)this - 23, &v29);
      v15 = CLegacySwapChain::Present((__int64)this - 424, a2, a3, (__int64)&v29, 0);
      v17 = v15;
      if ( v15 >= 0 )
        goto LABEL_32;
      v27 = 340;
    }
    goto LABEL_31;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v15 = CConversionSwapChain::ConvertSingleAppPlane(
            (CConversionSwapChain *)((char *)this - 776),
            (CConversionSwapChain *)((char *)this + 136 * v28 - 456));
    v17 = v15;
    if ( v15 < 0 )
    {
      v27 = 344;
    }
    else
    {
      std::vector<tagRECT>::push_back(&v29, (_OWORD *)this - 6);
      v15 = CLegacySwapChain::Present((__int64)this - 424, a2, a3, (__int64)&v29, 0);
      v17 = v15;
      if ( v15 >= 0 )
        goto LABEL_32;
      v27 = 348;
    }
    goto LABEL_31;
  }
  v20 = (unsigned int)(v19 - 1);
  if ( !(_DWORD)v20 )
  {
    v25 = 136LL * v28;
    v32 = *(_QWORD *)((char *)this + v25 - 428);
    v33 = *(_DWORD *)((char *)this + v25 - 420);
    v34 = *(_DWORD *)((char *)this + v25 - 416);
    v31[0] = *(_DWORD *)((char *)this + v25 - 412);
    v31[1] = *((_DWORD *)this + 34 * v28 - 102);
    v31[2] = *(_DWORD *)((char *)this + v25 - 404);
    v31[3] = *(_DWORD *)((char *)this + v25 - 400);
    v15 = CLegacySwapChain::PresentDFlip(
            (__int64)this - 424,
            a2,
            a3,
            0LL,
            *(_QWORD *)((char *)this + v25 - 448),
            (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)((char *)this + v25 - 356),
            a4,
            (__int64)a5,
            &v32,
            v31);
    v17 = v15;
    if ( v15 >= 0 )
      goto LABEL_32;
    v27 = 378;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v27, 0LL);
    goto LABEL_32;
  }
  if ( (_DWORD)v20 == 1 )
  {
    CRegion::CRegion((CRegion *)v35);
    CRegion::Copy(
      (const struct FastRegion::Internal::CRgnData **)v35,
      (const struct FastRegion::Internal::CRgnData **)this - 23);
    if ( *((_BYTE *)this - 80) )
    {
      CRegion::CRegion((CRegion *)v36, (const struct tagRECT *)this - 6);
      CRegion::Union((CRegion *)v35, (const struct CRegion *)v36);
      CRegion::~CRegion(v36);
    }
    CRegion::GetRectangles((int **)v35, &v29);
    v21 = CConversionSwapChain::ConvertDesktopAndAppPlanes(
            (CConversionSwapChain *)((char *)this - 776),
            (CConversionSwapChain *)((char *)this - 456),
            (CConversionSwapChain *)((char *)this - 320));
    v17 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x18Cu, 0LL);
    }
    else
    {
      v23 = CLegacySwapChain::Present((__int64)this - 424, a2, a3, (__int64)&v29, 0);
      v17 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x18Eu, 0LL);
    }
    CRegion::~CRegion(v35);
  }
  else
  {
    v17 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2003292412, 0x193u, 0LL);
  }
LABEL_32:
  **((_DWORD **)this - 23) = 0;
  *((_BYTE *)this - 80) = 0;
  std::vector<tagRECT>::~vector<tagRECT>((__int64)&v29);
  return v17;
}
