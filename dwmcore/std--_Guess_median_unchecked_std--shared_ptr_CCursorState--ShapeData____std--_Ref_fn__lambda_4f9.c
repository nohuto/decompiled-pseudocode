/*
 * XREFs of std::_Guess_median_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180274DEC
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x18027510C (std--_Partition_by_median_guess_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_f.c)
 * Callees:
 *     std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x180275044 (std--_Med3_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9abf6f.c)
 */

__int64 __fastcall std::_Guess_median_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbp

  v3 = a3;
  v4 = (a3 - a1) >> 4;
  v5 = a2;
  if ( v4 > 40 )
  {
    v6 = (v4 + 1) >> 3;
    v7 = 16 * v6;
    v6 *= 32LL;
    v8 = v7 + a1;
    std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
      a1,
      v7 + a1,
      v6 + a1);
    std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
      v5 - v7,
      v5,
      v7 + v5);
    std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
      v3 - v6,
      v3 - v7,
      v3);
    a3 = v3 - v7;
    a2 = v5;
    a1 = v8;
  }
  return std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
           a1,
           a2,
           a3);
}
