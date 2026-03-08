/*
 * XREFs of std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180275044
 * Callers:
 *     std::_Guess_median_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180274DEC (std--_Guess_median_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f9.c)
 * Callees:
 *     std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x180274898 (std--_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___--operator()_std--shared_ptr_CCursorStat.c)
 */

__int64 std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        ...)
{
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = a1 + 1;
  v5 = a2 + 1;
  if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                          (__int64)va,
                          (__int64)a2,
                          a1) )
  {
    v8 = *a2;
    *a2 = *a1;
    v9 = *v4;
    *a1 = v8;
    v10 = *v5;
    *v5 = v9;
    *v4 = v10;
  }
  result = std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
             (__int64)va,
             (__int64)a3,
             a2);
  if ( (_BYTE)result )
  {
    v12 = *a3;
    *a3 = *a2;
    v13 = *v5;
    *a2 = v12;
    v14 = a3[1];
    a3[1] = v13;
    *v5 = v14;
    result = std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
               (__int64)va,
               (__int64)a2,
               a1);
    if ( (_BYTE)result )
    {
      v15 = *a2;
      *a2 = *a1;
      result = *v4;
      *a1 = v15;
      v16 = *v5;
      *v5 = result;
      *v4 = v16;
    }
  }
  return result;
}
