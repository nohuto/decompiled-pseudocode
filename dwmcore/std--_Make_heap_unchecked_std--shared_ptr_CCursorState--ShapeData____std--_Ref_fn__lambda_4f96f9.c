void __fastcall std::_Make_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // r14d
  __int64 v5; // rbp
  __int64 v6; // rdi
  std::_Ref_count_base **v7; // rsi
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rax
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-10h]

  v4 = a1;
  v5 = (a2 - a1) >> 4;
  v6 = (a2 - a1) >> 5;
  if ( v6 > 0 )
  {
    v7 = (std::_Ref_count_base **)(16 * v6 + a1 - 8);
    do
    {
      v8 = (__int64)*(v7 - 1);
      *(v7 - 1) = 0LL;
      v10 = v8;
      v9 = *v7;
      *v7 = 0LL;
      --v6;
      v11 = v9;
      std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        v4,
        v6,
        v5,
        (unsigned int)&v10,
        a3);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      v7 -= 2;
    }
    while ( v6 > 0 );
  }
}
