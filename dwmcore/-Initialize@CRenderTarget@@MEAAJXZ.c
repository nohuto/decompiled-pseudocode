/*
 * XREFs of ?Initialize@CRenderTarget@@MEAAJXZ @ 0x180103F30
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6314 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 */

__int64 __fastcall CRenderTarget::Initialize(CRenderTarget *this)
{
  CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 216LL), this);
  return 0LL;
}
