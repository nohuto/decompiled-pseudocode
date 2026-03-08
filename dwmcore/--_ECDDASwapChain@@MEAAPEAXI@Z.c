/*
 * XREFs of ??_ECDDASwapChain@@MEAAPEAXI@Z @ 0x18029FA10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CDDASwapChain@@MEAA@XZ @ 0x18029F930 (--1CDDASwapChain@@MEAA@XZ.c)
 */

CDDASwapChain *__fastcall CDDASwapChain::`vector deleting destructor'(CDDASwapChain *this, char a2)
{
  CDDASwapChain::~CDDASwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
