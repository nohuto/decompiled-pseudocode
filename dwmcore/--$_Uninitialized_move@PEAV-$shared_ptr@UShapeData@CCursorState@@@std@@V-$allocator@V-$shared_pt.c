/*
 * XREFs of ??$_Uninitialized_move@PEAV?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@YAPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x18027577C
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UShapeData@CCursorState@@@1@QEAV21@AEAV21@@Z @ 0x180274A98 (--$_Emplace_reallocate@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@U.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x180274A58 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV-.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<std::shared_ptr<CCursorState::ShapeData> *,std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(
        char *a1,
        char *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  signed __int64 v4; // r8

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 - (char *)a3;
    do
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      *v3 = *(_QWORD *)((char *)v3 + v4);
      v3[1] = *(_QWORD *)((char *)v3 + v4 + 8);
      *(_QWORD *)((char *)v3 + v4) = 0LL;
      *(_QWORD *)((char *)v3 + v4 + 8) = 0LL;
      v3 += 2;
    }
    while ( (char *)v3 + v4 != a2 );
  }
  std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>((__int64)v3, (__int64)v3);
  return v3;
}
