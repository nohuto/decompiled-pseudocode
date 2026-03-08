/*
 * XREFs of ??_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z @ 0x18026A060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCompositionSwapchainStatistics@@MEAA@XZ @ 0x180269FEC (--1CCompositionSwapchainStatistics@@MEAA@XZ.c)
 */

CCompositionSwapchainStatistics *__fastcall CCompositionSwapchainStatistics::`vector deleting destructor'(
        CCompositionSwapchainStatistics *this,
        char a2)
{
  CCompositionSwapchainStatistics::~CCompositionSwapchainStatistics(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
