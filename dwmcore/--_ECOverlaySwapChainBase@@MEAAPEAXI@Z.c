/*
 * XREFs of ??_ECOverlaySwapChainBase@@MEAAPEAXI@Z @ 0x180285618
 * Callers:
 *     ??_ECOverlaySwapChainBase@@OBA@EAAPEAXI@Z @ 0x18011A9B0 (--_ECOverlaySwapChainBase@@OBA@EAAPEAXI@Z.c)
 *     ??_ECOverlaySwapChainBase@@OCI@EAAPEAXI@Z @ 0x18011A9D0 (--_ECOverlaySwapChainBase@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1COverlaySwapChainBase@@MEAA@XZ @ 0x1800C7E4C (--1COverlaySwapChainBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

COverlaySwapChainBase *__fastcall COverlaySwapChainBase::`vector deleting destructor'(
        COverlaySwapChainBase *this,
        char a2)
{
  COverlaySwapChainBase::~COverlaySwapChainBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
