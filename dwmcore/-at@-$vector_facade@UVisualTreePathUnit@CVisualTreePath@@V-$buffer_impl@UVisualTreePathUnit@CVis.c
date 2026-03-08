/*
 * XREFs of ?at@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBAAEBUVisualTreePathUnit@CVisualTreePath@@_K@Z @ 0x1801D6164
 * Callers:
 *     ?AppendAncestorListAboveInnermostVisualTree@CVisualTreePath@@QEBAXPEAV?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@@Z @ 0x1800E8A7C (-AppendAncestorListAboveInnermostVisualTree@CVisualTreePath@@QEBAXPEAV-$vector@U-$pair@PEBVCVisu.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1801D5FA4 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::at(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( a2 >= (a1[1] - *a1) >> 4 )
  {
    std::_Xout_of_range("index too big");
    __debugbreak();
  }
  return v2 + 16 * a2;
}
