void __fastcall CDrawingContext::AddTransientDirtyRegion(
        struct FastRegion::Internal::CRgnData **this,
        FastRegion::Internal::CRgnData **a2)
{
  int v3; // eax
  __int128 v4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+40h] [rbp-20h]
  struct tagRECT *v6[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp-8h]
  void *retaddr; // [rsp+68h] [rbp+8h]
  __int64 *v9; // [rsp+70h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  CRegion::GetRectangles(a2, &v4);
  v7 = 0LL;
  *(_OWORD *)v6 = 0LL;
  std::vector<tagRECT>::reserve(v6, (__int64)(*((_QWORD *)&v4 + 1) - v4) >> 4);
  std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_6991071fcff892ffb13e08e0d7abc234___(
    &v9,
    (int *)v4,
    *((int **)&v4 + 1),
    (__int64 *)v6,
    (__int64)this);
  v3 = CRegion::TryAddRectangles(this + 1012, v6[0], v6[1] - v6[0]);
  if ( v3 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
  if ( v6[0] )
  {
    std::_Deallocate<16,0>(v6[0], (v7 - (unsigned __int64)v6[0]) & 0xFFFFFFFFFFFFFFF0uLL);
    v7 = 0LL;
    *(_OWORD *)v6 = 0LL;
  }
  if ( (_QWORD)v4 )
    std::_Deallocate<16,0>((void *)v4, (v5 - v4) & 0xFFFFFFFFFFFFFFF0uLL);
}
