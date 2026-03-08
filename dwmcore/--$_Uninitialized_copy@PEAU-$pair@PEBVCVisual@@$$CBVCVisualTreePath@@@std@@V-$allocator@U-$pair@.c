/*
 * XREFs of ??$_Uninitialized_copy@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1800D690C
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x1800D67A8 (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180087890 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1800D6A48 (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 */

_QWORD *__fastcall std::_Uninitialized_copy<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
        char *a1,
        char *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rbp
  _OWORD *v7; // rbx
  _OWORD *v8; // r14
  char *i; // rax
  _OWORD *v10; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a3 + 4;
    v6 = a1 - (char *)a3;
    do
    {
      *v3 = *(_QWORD *)((char *)v5 + v6 - 32);
      *(v5 - 3) = v5;
      *(v5 - 1) = v5 + 4;
      *(v5 - 2) = v5;
      v7 = *(_OWORD **)((char *)v5 + v6 - 16);
      v8 = *(_OWORD **)((char *)v5 + v6 - 24);
      for ( i = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                  (detail::liberal_expansion_policy *)(v5 - 3),
                  0LL,
                  v7 - v8); ; i += 16 )
      {
        v10 = v8;
        if ( v8 == v7 )
          break;
        ++v8;
        *(_OWORD *)i = *v10;
      }
      v5 += 8;
      v3 += 8;
    }
    while ( (char *)v5 + v6 - 32 != a2 );
  }
  std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v3, v3);
  return v3;
}
