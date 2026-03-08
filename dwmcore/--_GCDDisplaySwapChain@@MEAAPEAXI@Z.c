/*
 * XREFs of ??_GCDDisplaySwapChain@@MEAAPEAXI@Z @ 0x180285544
 * Callers:
 *     ??_ECDDisplaySwapChain@@OBA@EAAPEAXI@Z @ 0x18011A970 (--_ECDDisplaySwapChain@@OBA@EAAPEAXI@Z.c)
 *     ??_ECDDisplaySwapChain@@OCI@EAAPEAXI@Z @ 0x18011A990 (--_ECDDisplaySwapChain@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180285070 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 */

CDDisplaySwapChain *__fastcall CDDisplaySwapChain::`scalar deleting destructor'(CDDisplaySwapChain *this, char a2)
{
  CDDisplaySwapChain::~CDDisplaySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
