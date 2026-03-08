/*
 * XREFs of ?GetOverlaySwapChain@CLegacyRenderTarget@@UEBAPEAVIOverlaySwapChain@@XZ @ 0x1801052B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IOverlaySwapChain *__fastcall CLegacyRenderTarget::GetOverlaySwapChain(CLegacyRenderTarget *this)
{
  return (struct IOverlaySwapChain *)*((_QWORD *)this + 5);
}
