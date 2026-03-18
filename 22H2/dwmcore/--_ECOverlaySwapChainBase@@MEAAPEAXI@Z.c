/*
 * XREFs of ??_ECOverlaySwapChainBase@@MEAAPEAXI@Z @ 0x180288D98
 * Callers:
 *     ??_ECOverlaySwapChainBase@@OBA@EAAPEAXI@Z @ 0x18011EB60 (--_ECOverlaySwapChainBase@@OBA@EAAPEAXI@Z.c)
 *     ??_ECOverlaySwapChainBase@@OCI@EAAPEAXI@Z @ 0x18011EB80 (--_ECOverlaySwapChainBase@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1COverlaySwapChainBase@@MEAA@XZ @ 0x1800C88AC (--1COverlaySwapChainBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
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
