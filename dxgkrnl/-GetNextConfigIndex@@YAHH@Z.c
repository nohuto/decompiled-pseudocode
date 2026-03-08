/*
 * XREFs of ?GetNextConfigIndex@@YAHH@Z @ 0x1C017648C
 * Callers:
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C01762FC (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01D779C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1C02B6DC8 (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C02BA2B0 (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNextConfigIndex(int a1)
{
  __int64 result; // rax
  int v2; // ecx

  result = 0LL;
  if ( a1 != -1 )
  {
    v2 = a1 + 1;
    if ( v2 >= 2 )
      return 0;
    return (unsigned int)v2;
  }
  return result;
}
