__int64 *__fastcall std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  signed __int64 v5; // rax
  __int64 *v7; // rdi
  __int64 *i; // rsi
  __int64 *v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-10h]

  v5 = (char *)a2 - (char *)a1;
  v7 = a2;
  for ( i = a1; ; v5 = (char *)v7 - (char *)i )
  {
    if ( (__int64)(v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 512 )
      return std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
               i,
               v7,
               a4);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
      &v10,
      (unsigned __int64)i,
      v7,
      a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(((char *)v10 - (char *)i) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)(((char *)v7 - (char *)v11) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        v11,
        v7,
        a3,
        a4);
      v7 = v10;
    }
    else
    {
      std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        i,
        v10,
        a3,
        a4);
      i = v11;
    }
  }
  std::_Make_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
    (__int64)i,
    (__int64)v7,
    a4);
  return (__int64 *)std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
                      i,
                      (__int64)v7,
                      a4);
}
