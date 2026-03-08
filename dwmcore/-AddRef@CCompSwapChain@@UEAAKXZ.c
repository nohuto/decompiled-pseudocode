/*
 * XREFs of ?AddRef@CCompSwapChain@@UEAAKXZ @ 0x18029AA8C
 * Callers:
 *     ?AddRef@CCompSwapChain@@$4PPPPPPPM@A@EAAKXZ @ 0x18011BDF0 (-AddRef@CCompSwapChain@@$4PPPPPPPM@A@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::AddRef(CCompSwapChain *this)
{
  return CMILRefCountImpl::AddReference((CCompSwapChain *)((char *)this - 376));
}
