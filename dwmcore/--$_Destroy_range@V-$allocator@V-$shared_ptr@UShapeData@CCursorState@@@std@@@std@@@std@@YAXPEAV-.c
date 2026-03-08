/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x180274A58
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@YAPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x18027577C (--$_Uninitialized_move@PEAV-$shared_ptr@UShapeData@CCursorState@@@std@@V-$allocator@V-$shared_pt.c)
 *     ??1CCursorState@@UEAA@XZ @ 0x180275B1C (--1CCursorState@@UEAA@XZ.c)
 *     ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x180276F18 (-ProcessStateChanges@CCursorState@@QEAAX_K_N@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UShapeData@CCursorState@@@2@_K1@Z @ 0x1802788B4 (-_Change_array@-$vector@V-$shared_ptr@UShapeData@CCursorState@@@std@@V-$allocator@V-$shared_ptr@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 8);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
