/*
 * XREFs of ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x18029D494
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18029F0F0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800E4910 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?CheckDirectFlipSupport@COverlaySwapChainBase@@UEBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180299C10 (-CheckDirectFlipSupport@COverlaySwapChainBase@@UEBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV.c)
 *     ?IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18029EDE8 (-IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::CalcPresentMode(CConversionSwapChain *this, unsigned int *a2)
{
  char v2; // di
  unsigned int v4; // ebp
  unsigned int v5; // r8d
  int v6; // ecx
  unsigned int v7; // r9d
  _DWORD *v8; // r10
  unsigned int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // r9
  _DWORD *v12; // r10
  int v13; // ecx
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r14
  __int64 v17; // rsi
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  _DWORD v22[4]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v23[4]; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = -1;
  v6 = 0;
  v7 = 0;
  v8 = (_DWORD *)((char *)this + 404);
  do
  {
    if ( *v8 )
    {
      ++v6;
      v9 = v7;
      if ( v5 != -1 )
        v9 = v5;
      v5 = v9;
    }
    ++v7;
    v8 += 34;
  }
  while ( v7 < 2 );
  *a2 = v5;
  v10 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v10 )
  {
    if ( (_DWORD)v10 == 1 )
    {
      v11 = (_DWORD *)((char *)this + 460);
      if ( *((_DWORD *)this + 99) == 2 || !operator==((_DWORD *)this + 115, (_DWORD *)this + 186) )
      {
        *((_BYTE *)this + 776) = 1;
        v12 = (_DWORD *)((char *)this + 744);
      }
      *((_DWORD *)this + 99) = 3;
      v13 = v11[1];
      v14 = v11[2];
      v15 = v11[3];
      *v12 = *v11;
      v12[1] = v13;
      v12[2] = v14;
      v12[3] = v15;
    }
    else
    {
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003292412, 0x25Du, 0LL);
    }
  }
  else
  {
    v16 = v5;
    v17 = 136LL * v5;
    if ( CConversionSwapChain::IsDesktopPlane(this, (CConversionSwapChain *)((char *)this + v17 + 400)) )
    {
      *((_DWORD *)this + 99) = 0;
    }
    else
    {
      if ( *(int *)((char *)this + v17 + 428) >= 0 )
      {
        v18 = *(_DWORD *)((char *)this + v17 + 432);
        if ( v18 >= 0 )
        {
          v19 = *(_DWORD *)((char *)this + v17 + 444);
          if ( v19 >= 0 )
          {
            v20 = *(_DWORD *)((char *)this + v17 + 448);
            if ( v20 >= 0 && *(_DWORD *)((char *)this + v17 + 476) == 1 )
            {
              v23[0] = *(_DWORD *)((char *)this + v17 + 428);
              v23[2] = *(_DWORD *)((char *)this + v17 + 436);
              v23[3] = *(_DWORD *)((char *)this + v17 + 440);
              v22[2] = *(_DWORD *)((char *)this + v17 + 452);
              v22[3] = *(_DWORD *)((char *)this + v17 + 456);
              v23[1] = v18;
              v22[0] = v19;
              v22[1] = v20;
              v2 = COverlaySwapChainBase::CheckDirectFlipSupport(
                     (__int64)this,
                     *((_QWORD *)this + 17 * v16 + 51),
                     *(_DWORD *)((char *)this + v17 + 500),
                     (__int64)v23,
                     (__int64)v22);
            }
          }
        }
      }
      *((_DWORD *)this + 99) = (v2 != 0) + 1;
    }
  }
  return v4;
}
