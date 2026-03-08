/*
 * XREFs of ??$emplace_back@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@1@@Z @ 0x180116854
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180131260 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_P.c)
 *     ?CheckMultiplaneOverlaySupportInternal@CDDisplaySwapChain@@IEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IW4ScanoutScaleMode@1@PEA_N@Z @ 0x180285680 (-CheckMultiplaneOverlaySupportInternal@CDDisplaySwapChain@@IEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLA.c)
 *     ?InternalCheckDirectFlipSupport@CLegacySwapChain@@MEBA_N_N0PEAUIUnknown@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2W4DXGI_COLOR_SPACE_TYPE@@I@Z @ 0x180297AA0 (-InternalCheckDirectFlipSupport@CLegacySwapChain@@MEBA_N_N0PEAUIUnknown@@AEBV-$TMilRect@IUMilRec.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<std::unique_ptr<ICheckMPOCache>>::emplace_back<std::unique_ptr<CCheckMPOCache>>(
        char **a1,
        __int64 *a2)
{
  char *v3; // rcx
  __int64 v4; // rax
  char *result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<std::unique_ptr<ICheckMPOCache>>::_Emplace_reallocate<std::unique_ptr<CCheckMPOCache>>(
             a1,
             v3,
             a2);
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)v3 = v4;
  result = a1[1];
  a1[1] = result + 8;
  return result;
}
