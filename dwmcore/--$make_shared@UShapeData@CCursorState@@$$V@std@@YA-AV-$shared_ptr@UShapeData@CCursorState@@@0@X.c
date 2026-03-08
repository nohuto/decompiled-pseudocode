/*
 * XREFs of ??$make_shared@UShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@UShapeData@CCursorState@@@0@XZ @ 0x180275900
 * Callers:
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x180277498 (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x18027777C (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x180277CC0 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<CCursorState::ShapeData,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx

  v2 = operator new(0x30uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<CCursorState::ShapeData>::`vftable';
    *((_OWORD *)v2 + 1) = 0LL;
    *((_OWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 4;
  return a1;
}
