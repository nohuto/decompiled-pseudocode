signed __int64 __fastcall std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  signed __int64 result; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rax
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-10h]

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( result >= 32 )
  {
    v6 = (__int64 *)(a2 - 16);
    v7 = -8LL - (_QWORD)a1;
    v8 = 16LL - (_QWORD)a1;
    do
    {
      v9 = *v6;
      *v6 = 0LL;
      v11 = v9;
      v10 = (std::_Ref_count_base *)v6[1];
      v6[1] = 0LL;
      v12 = v10;
      std::shared_ptr<CRegion>::operator=(v6, a1);
      std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        (__int64)a1,
        0LL,
        ((__int64)v6 + v7 + 8) >> 4,
        &v11,
        a3);
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      v6 -= 2;
      result = ((unsigned __int64)v6 + v8) & 0xFFFFFFFFFFFFFFF0uLL;
    }
    while ( result >= 32 );
  }
  return result;
}
