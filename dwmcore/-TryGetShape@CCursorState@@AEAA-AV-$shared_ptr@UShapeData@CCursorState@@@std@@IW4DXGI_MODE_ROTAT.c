/*
 * XREFs of ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x180278244
 * Callers:
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802768A4 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@@Z @ 0x180277F98 (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D8440 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801F36EC (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$emplace_back@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@UShapeData@CCursorState@@@1@@Z @ 0x1802757DC (--$emplace_back@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@UShapeDa.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x180277498 (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x18027777C (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z.c)
 *     ?SortShapeCache@CCursorState@@AEAAXIW4DXGI_MODE_ROTATION@@_N@Z @ 0x180277F3C (-SortShapeCache@CCursorState@@AEAAXIW4DXGI_MODE_ROTATION@@_N@Z.c)
 */

__int64 __fastcall CCursorState::TryGetShape(
        CCursorState *this,
        __int64 a2,
        int a3,
        enum DXGI_MODE_ROTATION a4,
        char a5)
{
  __int64 *v5; // rdi
  _QWORD *v7; // rdx
  std::_Ref_count_base *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // r15
  __int64 *v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rsi
  std::_Ref_count_base *v19[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v21; // [rsp+38h] [rbp-8h]

  v5 = (__int64 *)((char *)this + 216);
  v7 = (_QWORD *)*((_QWORD *)this + 27);
  *(_OWORD *)v19 = 0LL;
  if ( v7 == *((_QWORD **)this + 28) )
    goto LABEL_22;
  std::shared_ptr<CCursorState::ShapeData>::operator=((__int64 *)v19, v7);
  v11 = v19[0];
  if ( *((_BYTE *)v19[0] + 17) == a5 && *((_DWORD *)v19[0] + 2) == a4 && *((_DWORD *)v19[0] + 3) == a3 )
    goto LABEL_23;
  CCursorState::SortShapeCache(this, a3, a4, a5);
  std::shared_ptr<CCursorState::ShapeData>::operator=((__int64 *)v19, (_QWORD *)*v5);
  v11 = v19[0];
  if ( *((_BYTE *)v19[0] + 17) != a5 )
  {
    v12 = CCursorState::AddShadowToShape(this, &v20, (_QWORD **)this + 23);
    v13 = *std::shared_ptr<CRegion>::operator=(v19, v12);
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    if ( !v13 )
      goto LABEL_19;
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      v19);
    v11 = v19[0];
  }
  if ( *((_DWORD *)v11 + 2) != a4 )
  {
    v14 = CCursorState::RotateShape((__int64)this, &v20, (int **)v19, a4);
    v15 = *std::shared_ptr<CRegion>::operator=(v19, v14);
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    if ( !v15 )
      goto LABEL_19;
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      v19);
    v11 = v19[0];
  }
  if ( *((_DWORD *)v11 + 3) == a3 )
  {
LABEL_23:
    *(_QWORD *)a2 = v11;
    *(std::_Ref_count_base **)(a2 + 8) = v19[1];
    return a2;
  }
  v16 = CCursorState::ScaleShape((__int64)this, &v20, (__int64 *)v19, a3);
  v17 = *std::shared_ptr<CRegion>::operator=(v19, v16);
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  if ( v17 )
  {
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      v19);
LABEL_22:
    v11 = v19[0];
    goto LABEL_23;
  }
LABEL_19:
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( v19[1] )
    std::_Ref_count_base::_Decref(v19[1]);
  return a2;
}
