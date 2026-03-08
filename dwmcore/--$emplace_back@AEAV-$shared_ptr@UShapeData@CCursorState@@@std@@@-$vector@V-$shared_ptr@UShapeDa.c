/*
 * XREFs of ??$emplace_back@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@UShapeData@CCursorState@@@1@@Z @ 0x1802757DC
 * Callers:
 *     ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x180276F18 (-ProcessStateChanges@CCursorState@@QEAAX_K_N@Z.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x180278244 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 * Callees:
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x18012B0E8 (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r9
  _QWORD *result; // rax

  v3 = (_QWORD *)a1[1];
  if ( v3 == (_QWORD *)a1[2] )
    return std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Emplace_reallocate<std::shared_ptr<CCursorState::ShapeData> &>(
             a1,
             (__int64)v3,
             a2);
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v3, a2);
  result = *(_QWORD **)(v4 + 8);
  *(_QWORD *)(v4 + 8) = result + 2;
  return result;
}
