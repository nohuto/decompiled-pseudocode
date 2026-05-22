/*
 * XREFs of ?RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ @ 0x18014059C
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x18013EFBC (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800694A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x1801409F0 (-SetVisible@SystemCursorShape@@QEAAJ_N@Z.c)
 */

void __fastcall SystemCursor::RefreshShapeVisibilityData(SystemCursor *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 4);
  v3 = *v1;
  v6 = *v1;
  while ( (__int64 *)v3 != v1 )
  {
    v4 = SystemCursorShape::SetVisible(*(SystemCursorShape **)(v3 + 40), *(_QWORD *)(v3 + 32) == *((_QWORD *)this + 6));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        572LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v4);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v6);
    v3 = v6;
  }
}
