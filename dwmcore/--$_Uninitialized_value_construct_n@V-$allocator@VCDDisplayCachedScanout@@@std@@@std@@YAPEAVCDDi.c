/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDisplayCachedScanout@@PEAV1@_KAEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180284FE4
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180284E34 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDD.c)
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x180287488 (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180284B38 (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 */

__int64 *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CDDisplayCachedScanout>>(
        __int64 *a1,
        __int64 a2)
{
  for ( ; a2; --a2 )
  {
    a1[4] = 1LL;
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1 += 5;
  }
  std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(a1, a1);
  return a1;
}
