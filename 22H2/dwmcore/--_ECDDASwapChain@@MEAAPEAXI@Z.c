/*
 * XREFs of ??_ECDDASwapChain@@MEAAPEAXI@Z @ 0x1802A3190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDDASwapChain@@MEAA@XZ @ 0x1802A30B0 (--1CDDASwapChain@@MEAA@XZ.c)
 */

CDDASwapChain *__fastcall CDDASwapChain::`vector deleting destructor'(CDDASwapChain *this, char a2)
{
  CDDASwapChain::~CDDASwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
