/*
 * XREFs of ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800E4910
 * Callers:
 *     ?IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x1800E4710 (-IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x1800E47BC (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x18029D494 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 *     ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18029D6B0 (-CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPO.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802B1068 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
