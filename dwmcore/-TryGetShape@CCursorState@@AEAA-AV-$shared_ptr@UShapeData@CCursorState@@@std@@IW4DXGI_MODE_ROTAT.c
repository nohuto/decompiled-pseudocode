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
