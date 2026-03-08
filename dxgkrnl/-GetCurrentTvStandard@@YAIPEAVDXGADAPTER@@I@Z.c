/*
 * XREFs of ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C0391AC8
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0391C6C (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C03A8554 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 */

__int64 __fastcall GetCurrentTvStandard(struct DXGADAPTER *a1, unsigned int a2)
{
  unsigned int v3; // eax
  enum _D3DKMDT_VIDEO_SIGNAL_STANDARD v5[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v6; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+20h] BYREF

  v5[0] = D3DKMDT_VSS_UNINITIALIZED;
  v7 = 0;
  v6 = 0;
  DmmGetClientVidPnTargetModeInfo(a1, a2, v5, &v7, &v6, 0LL, 0LL, 0LL);
  if ( v5[0] > D3DKMDT_VSS_PAL_D )
  {
    if ( v5[0] <= D3DKMDT_VSS_SECAM_K )
    {
      switch ( v5[0] )
      {
        case D3DKMDT_VSS_SECAM_K:
          return 4096;
        case D3DKMDT_VSS_PAL_N:
        case D3DKMDT_VSS_PAL_NC:
          return 128;
        case D3DKMDT_VSS_SECAM_B:
          return 256;
        case D3DKMDT_VSS_SECAM_D:
          return 512;
        case D3DKMDT_VSS_SECAM_G:
          return 1024;
        default:
          return 2048;
      }
    }
    switch ( v5[0] )
    {
      case D3DKMDT_VSS_SECAM_K1:
        return 0x2000;
      case D3DKMDT_VSS_SECAM_L:
        return 0x4000;
      case D3DKMDT_VSS_SECAM_L1:
        return 0x80000;
    }
    if ( v5[0] != D3DKMDT_VSS_EIA_861 && (unsigned int)(v5[0] - 26) > 1 )
      return 1;
  }
  else
  {
    if ( v5[0] == D3DKMDT_VSS_PAL_D )
      return 8;
    if ( v5[0] > D3DKMDT_VSS_NTSC_J )
    {
      switch ( v5[0] )
      {
        case D3DKMDT_VSS_NTSC_443:
          return 0x10000;
        case D3DKMDT_VSS_PAL_B:
        case D3DKMDT_VSS_PAL_B1:
          return 4;
        case D3DKMDT_VSS_PAL_G:
          return 0x20000;
        case D3DKMDT_VSS_PAL_H:
          return 16;
        default:
          return 32;
      }
    }
    if ( v5[0] == D3DKMDT_VSS_NTSC_J )
      return 2;
    if ( v5[0] != D3DKMDT_VSS_VESA_DMT && v5[0] != D3DKMDT_VSS_VESA_GTF && v5[0] != D3DKMDT_VSS_VESA_CVT )
    {
      if ( (unsigned int)(v5[0] - 4) < 2 )
        return 0x8000;
      return 1;
    }
  }
  v3 = v7;
  if ( v6 )
    v3 = 2 * v7;
  return v3 < 0x37 ? 4 : 1;
}
