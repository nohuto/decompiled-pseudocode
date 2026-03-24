/*
 * XREFs of ?GetOverlaySwapChain@CDDisplayRenderTarget@@UEBAPEAVIOverlaySwapChain@@XZ @ 0x18016E580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IOverlaySwapChain *__fastcall CDDisplayRenderTarget::GetOverlaySwapChain(CDDisplayRenderTarget *this)
{
  return (struct IOverlaySwapChain *)((*((_QWORD *)this + 4) + 64LL) & -(__int64)(*((_QWORD *)this + 4) != 0LL));
}
