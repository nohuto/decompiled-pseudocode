/*
 * XREFs of ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801E6CD0
 * Callers:
 *     ?ReleaseRenderTargets@CIndirectSwapchainRenderTarget@@EEAAXXZ @ 0x1801C2DE0 (-ReleaseRenderTargets@CIndirectSwapchainRenderTarget@@EEAAXXZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801E671C (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801EC0A4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801EC52C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801EC890 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801ECD00 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x1801ED64C (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIRenderTargetBitmap@@@@YAXPEAVIRenderTargetBitmap@@@Z @ 0x18012CCDE (--$ReleaseInterfaceNoNULL@VIRenderTargetBitmap@@@@YAXPEAVIRenderTargetBitmap@@@Z.c)
 */

void __fastcall COffScreenRenderTarget::ReleaseRenderTargets(COffScreenRenderTarget *this)
{
  __int64 v1; // rsi
  char *i; // rbx

  v1 = 0LL;
  for ( i = (char *)this + 1760; (unsigned int)v1 < *((_DWORD *)this + 446); v1 = (unsigned int)(v1 + 1) )
    ReleaseInterfaceNoNULL<IRenderTargetBitmap>(*(_QWORD *)(*(_QWORD *)i + 8 * v1));
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)i, 8u);
}
