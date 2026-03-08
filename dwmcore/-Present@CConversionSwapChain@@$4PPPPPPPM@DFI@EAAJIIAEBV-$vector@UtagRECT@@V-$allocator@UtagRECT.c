/*
 * XREFs of ?Present@CConversionSwapChain@@$4PPPPPPPM@DFI@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18011D090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::Present(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  return CConversionSwapChain::Present((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 856), a2, a3, a5);
}
