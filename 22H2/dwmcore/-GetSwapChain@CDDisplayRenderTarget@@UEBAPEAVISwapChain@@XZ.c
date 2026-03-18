/*
 * XREFs of ?GetSwapChain@CDDisplayRenderTarget@@UEBAPEAVISwapChain@@XZ @ 0x180105F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ISwapChain *__fastcall CDDisplayRenderTarget::GetSwapChain(CDDisplayRenderTarget *this)
{
  return (struct ISwapChain *)*((_QWORD *)this + 5);
}
