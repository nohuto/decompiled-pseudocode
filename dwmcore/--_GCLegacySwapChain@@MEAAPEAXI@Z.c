/*
 * XREFs of ??_GCLegacySwapChain@@MEAAPEAXI@Z @ 0x1800C67C0
 * Callers:
 *     ??_ECLegacySwapChain@@OBA@EAAPEAXI@Z @ 0x18011B470 (--_ECLegacySwapChain@@OBA@EAAPEAXI@Z.c)
 *     ??_ECLegacySwapChain@@OCI@EAAPEAXI@Z @ 0x18011B490 (--_ECLegacySwapChain@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800C7F18 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CLegacySwapChain *__fastcall CLegacySwapChain::`scalar deleting destructor'(CLegacySwapChain *this, char a2)
{
  CLegacySwapChain::~CLegacySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1C0uLL);
  return this;
}
