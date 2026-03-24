/*
 * XREFs of ?IsValid@CCompSwapChain@@UEBAJXZ @ 0x1802511F8
 * Callers:
 *     ?IsValid@CCompSwapChain@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F7950 (-IsValid@CCompSwapChain@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::IsValid(CCompSwapChain *this)
{
  if ( *((_QWORD *)this - 38) )
    return *(unsigned int *)(*((_QWORD *)this - 40) + 1128LL);
  else
    return 2291662989LL;
}
