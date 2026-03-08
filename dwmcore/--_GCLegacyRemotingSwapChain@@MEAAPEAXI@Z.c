/*
 * XREFs of ??_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z @ 0x180108A50
 * Callers:
 *     ??_ECLegacyRemotingSwapChain@@OBI@EAAPEAXI@Z @ 0x18011D3F0 (--_ECLegacyRemotingSwapChain@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x180108EF8 (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CLegacyRemotingSwapChain *__fastcall CLegacyRemotingSwapChain::`scalar deleting destructor'(
        CLegacyRemotingSwapChain *this,
        char a2)
{
  CLegacyRemotingSwapChain::~CLegacyRemotingSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x120uLL);
  return this;
}
