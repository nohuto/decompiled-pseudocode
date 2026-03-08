/*
 * XREFs of ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x1800CA614
 * Callers:
 *     ??0COverlaySwapChainBase@@IEAA@PEAVCD3DDevice@@AEBVRenderTargetInfo@@IIU_LUID@@@Z @ 0x1800CA4FC (--0COverlaySwapChainBase@@IEAA@PEAVCD3DDevice@@AEBVRenderTargetInfo@@IIU_LUID@@@Z.c)
 *     ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z @ 0x1801090B8 (--0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@.c)
 *     ??0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z @ 0x1802013EC (--0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18025254C (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ??0CDummyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGIOutputDWM@@IU_UNSIGNED_RATIO@@PEAUHINSTANCE__@@@Z @ 0x18029584C (--0CDummyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGIOutputDWM@@IU_UNSIGNED_RATIO@@PEAUHINS.c)
 *     ??0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I@Z @ 0x18029A5E8 (--0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_sto.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  return a1;
}
