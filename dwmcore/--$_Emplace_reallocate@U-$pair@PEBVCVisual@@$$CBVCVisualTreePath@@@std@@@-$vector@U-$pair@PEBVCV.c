/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x1800D67A8
 * Callers:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180087520 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?AppendAncestorListAboveInnermostVisualTree@CVisualTreePath@@QEBAXPEAV?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@@Z @ 0x1800E8A7C (-AppendAncestorListAboveInnermostVisualTree@CVisualTreePath@@QEBAXPEAV-$vector@U-$pair@PEBVCVisu.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180087890 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1800D68E0 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_copy@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1800D690C (--$_Uninitialized_copy@PEAU-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@.c)
 *     ?_Change_array@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAXQEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@2@_K1@Z @ 0x1800D69CC (-_Change_array@-$vector@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@PE.c)
 *     ??$_Uninitialized_move@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1801D5E80 (--$_Uninitialized_move@PEAU-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@.c)
 */

_QWORD *__fastcall std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v6; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // r12
  _QWORD *v14; // r13
  __int128 *v15; // rdi
  __int128 *v16; // rbx
  char *v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rcx

  v3 = 0x3FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 6;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<64>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_QWORD *)((v4 & 0xFFFFFFFFFFFFFFC0uLL) + v13);
  *v14 = *a3;
  v14[1] = v14 + 4;
  v14[2] = v14 + 4;
  v14[3] = v14 + 8;
  v15 = (__int128 *)a3[2];
  v16 = (__int128 *)a3[1];
  v17 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
          (detail::liberal_expansion_policy *)(v14 + 1),
          0LL,
          v15 - v16);
  while ( v16 != v15 )
  {
    v18 = *v16++;
    *(_OWORD *)v17 = v18;
    v17 += 16;
  }
  v19 = a1[1];
  v20 = *a1;
  if ( a2 == v19 )
  {
    std::_Uninitialized_copy<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
      v20,
      v19,
      v13);
  }
  else
  {
    std::_Uninitialized_move<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
      v20,
      a2,
      v13);
    std::_Uninitialized_move<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
      a2,
      a1[1],
      v14 + 8);
  }
  std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Change_array(a1, v13, v9, v3);
  return v14;
}
