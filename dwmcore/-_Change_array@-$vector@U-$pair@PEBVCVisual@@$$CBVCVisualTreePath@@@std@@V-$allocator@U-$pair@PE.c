/*
 * XREFs of ?_Change_array@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAXQEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@2@_K1@Z @ 0x1800D69CC
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x1800D67A8 (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1800D6A48 (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Change_array(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v6, a1[1]);
    result = std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  *a1 = a2;
  a1[1] = a2 + (a3 << 6);
  a1[2] = a2 + (a4 << 6);
  return result;
}
