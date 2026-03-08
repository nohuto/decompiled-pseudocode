/*
 * XREFs of ?Initialize@CCaptureRenderTarget@@MEAAJXZ @ 0x1801EA220
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6314 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::Initialize(CCaptureRenderTarget *this)
{
  *((_BYTE *)this + 1756) = 1;
  CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 216LL), this);
  return 0LL;
}
