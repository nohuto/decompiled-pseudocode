/*
 * XREFs of ??_E?$_Ref_count_obj2@UShapeData@CCursorState@@@std@@UEAAPEAXI@Z @ 0x180275D80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<CCursorState::ShapeData>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<CCursorState::ShapeData>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
