/*
 * XREFs of ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x18024E038
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18024F8F8 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800D4290 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800F1F70 (-IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180249130 (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV.c)
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
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  int v20[4]; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = -1;
  v6 = 0;
  v7 = 0;
  v8 = (_DWORD *)((char *)this + 324);
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
      if ( *((_DWORD *)this + 79) == 2 || !operator==((_DWORD *)this + 95, (_DWORD *)this + 166) )
        *((_BYTE *)this + 696) = 1;
      *((_DWORD *)this + 79) = 3;
      v11 = *((_DWORD *)this + 96);
      v12 = *((_DWORD *)this + 97);
      v13 = *((_DWORD *)this + 98);
      *((_DWORD *)this + 166) = *((_DWORD *)this + 95);
      *((_DWORD *)this + 167) = v11;
      *((_DWORD *)this + 168) = v12;
      *((_DWORD *)this + 169) = v13;
    }
    else
    {
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003292412, 0x238u, 0LL);
    }
  }
  else
  {
    v14 = 136LL * v5;
    if ( CConversionSwapChain::IsDesktopPlane(this, (CConversionSwapChain *)((char *)this + v14 + 320)) )
    {
      *((_DWORD *)this + 79) = 0;
    }
    else
    {
      if ( *(int *)((char *)this + v14 + 348) >= 0 )
      {
        v15 = *(_DWORD *)((char *)this + v14 + 352);
        if ( v15 >= 0 )
        {
          v16 = *(_DWORD *)((char *)this + v14 + 364);
          if ( v16 >= 0 )
          {
            v17 = *(_DWORD *)((char *)this + v14 + 368);
            if ( v17 >= 0 && *(_DWORD *)((char *)this + v14 + 396) == 1 )
            {
              v20[0] = *(_DWORD *)((char *)this + v14 + 348);
              v20[2] = *(_DWORD *)((char *)this + v14 + 356);
              v20[3] = *(_DWORD *)((char *)this + v14 + 360);
              *((_QWORD *)&v19 + 1) = *(_QWORD *)((char *)this + v14 + 372);
              v20[1] = v15;
              *(_QWORD *)&v19 = __PAIR64__(v17, v16);
              v2 = CLegacySwapChain::CheckDirectFlipSupport(
                     (__int64)this + 352,
                     *(_QWORD *)((char *)this + v14 + 328),
                     *(enum DXGI_COLOR_SPACE_TYPE *)((char *)this + v14 + 420),
                     v20,
                     &v19);
            }
          }
        }
      }
      *((_DWORD *)this + 79) = (v2 != 0) + 1;
    }
  }
  return v4;
}
