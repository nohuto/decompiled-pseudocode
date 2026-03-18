/*
 * XREFs of ??_GCDDisplaySwapChain@@MEAAPEAXI@Z @ 0x180288CC4
 * Callers:
 *     ??_ECDDisplaySwapChain@@OBA@EAAPEAXI@Z @ 0x18011EB20 (--_ECDDisplaySwapChain@@OBA@EAAPEAXI@Z.c)
 *     ??_ECDDisplaySwapChain@@OCI@EAAPEAXI@Z @ 0x18011EB40 (--_ECDDisplaySwapChain@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802887F0 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 */

CDDisplaySwapChain *__fastcall CDDisplaySwapChain::`scalar deleting destructor'(CDDisplaySwapChain *this, char a2)
{
  CDDisplaySwapChain::~CDDisplaySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
