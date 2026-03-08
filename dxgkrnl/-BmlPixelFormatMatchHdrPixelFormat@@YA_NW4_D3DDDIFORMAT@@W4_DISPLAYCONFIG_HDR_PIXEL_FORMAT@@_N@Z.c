/*
 * XREFs of ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1C01710D8
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C01706B0 (BmlGetNextBestSourceMode.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C0170C60 (BmlDoesSourceModeObeyConstraint.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171F9C (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     BmlIsSupportedSourceMode @ 0x1C03B8FC8 (BmlIsSupportedSourceMode.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlPixelFormatMatchHdrPixelFormat(int a1, int a2, char a3)
{
  char v3; // r10

  v3 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
      return a1 == 31;
    if ( (unsigned int)(a2 - 2) >= 2 )
    {
      WdLogSingleEntry1(1LL, a2);
      return 0;
    }
    return a1 == 113;
  }
  else
  {
    if ( (unsigned int)(a1 - 21) <= 1 || a1 == 32 || a3 && a1 == 31 )
      return 1;
    return v3;
  }
}
