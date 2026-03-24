/*
 * XREFs of std::_Med3_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DCFC4
 * Callers:
 *     std::_Guess_median_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DCBF4 (std--_Guess_median_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v4; // r10
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  v4 = *(_QWORD *)(a4 + 976);
  v6 = *a1;
  result = *a2;
  if ( *(float *)(v4 + 4 * v6) > *(float *)(v4 + 4 * *a2) )
  {
    *a2 = v6;
    *a1 = result;
    v4 = *(_QWORD *)(a4 + 976);
    result = *a2;
  }
  v8 = *a3;
  if ( *(float *)(v4 + 4 * result) > *(float *)(v4 + 4 * *a3) )
  {
    *a3 = result;
    *a2 = v8;
    result = *(_QWORD *)(a4 + 976);
    if ( *(float *)(result + 4 * *a1) > *(float *)(result + 4 * v8) )
    {
      *a2 = *a1;
      *a1 = v8;
    }
  }
  return result;
}
