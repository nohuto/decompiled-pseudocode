/*
 * XREFs of ??0?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBitmap@@@Z @ 0x180034828
 * Callers:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x1800347D0 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ??0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z @ 0x1800EFCCC (--0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z.c)
 *     ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z @ 0x1801090B8 (--0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@.c)
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x1801E8E34 (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801E971C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801EBB44 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ??0CResampleLayer@@AEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@2@Z @ 0x1801F201C (--0CResampleLayer@@AEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTarg.c)
 *     ??0CStereoRenderTargetBitmap@@IEAA@PEAVIRenderTargetBitmap@@@Z @ 0x1802B2244 (--0CStereoRenderTargetBitmap@@IEAA@PEAVIRenderTargetBitmap@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx

  *a1 = a2;
  if ( a2 )
  {
    v3 = *(int *)(*(_QWORD *)(a2 + 8) + 4LL) + a2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return a1;
}
