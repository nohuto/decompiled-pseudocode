/*
 * XREFs of ?Present@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18011B930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::Present(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  return CLegacySwapChain::Present((CD3DDevice **)(a1 - *(int *)(a1 - 4) - 432), a2, a3, a4, a5);
}
