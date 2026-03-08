/*
 * XREFs of std::_Guess_median_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18023ECCC
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18023F09C (std--_Partition_by_median_guess_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b851.c)
 * Callees:
 *     std::_Med3_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18023EFBC (std--_Med3_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___.c)
 */

__int64 __fastcall std::_Guess_median_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx

  v3 = a3;
  v4 = a2;
  v5 = (a3 - a1) >> 2;
  if ( v5 > 40 )
  {
    v6 = (v5 + 1) >> 3;
    v7 = 4 * v6;
    v8 = 4 * v6 + a1;
    v9 = 8 * v6;
    std::_Med3_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(a1, v8, 8 * v6 + a1);
    std::_Med3_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(v4 - v7, v4, v7 + v4);
    std::_Med3_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(v3 - v9, v3 - v7, v3);
    a3 = v10;
    a1 = v8;
    a2 = v4;
  }
  return std::_Med3_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(a1, a2, a3);
}
