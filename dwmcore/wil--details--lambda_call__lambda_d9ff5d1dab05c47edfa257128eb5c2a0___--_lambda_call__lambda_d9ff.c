/*
 * XREFs of wil::details::lambda_call__lambda_d9ff5d1dab05c47edfa257128eb5c2a0___::_lambda_call__lambda_d9ff5d1dab05c47edfa257128eb5c2a0___ @ 0x18029711C
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800D6F70 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     ?EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAVCD3DDevice@@_K@Z @ 0x180206FB0 (-EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAVCD3DDevice@@_K@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_d9ff5d1dab05c47edfa257128eb5c2a0___::_lambda_call__lambda_d9ff5d1dab05c47edfa257128eb5c2a0___(
        __int64 *a1)
{
  if ( *((_BYTE *)a1 + 24) )
  {
    *((_BYTE *)a1 + 24) = 0;
    if ( *((_BYTE *)a1 + 16) )
      CComputeScribbleSynchronizer::EndRenderOperation(
        *(CComputeScribbleSynchronizer **)(*a1 + 48),
        *(struct CD3DDevice **)(*a1 + 16),
        a1[1]);
  }
}
