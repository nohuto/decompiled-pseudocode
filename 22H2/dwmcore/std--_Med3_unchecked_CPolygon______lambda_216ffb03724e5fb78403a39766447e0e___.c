/*
 * XREFs of std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x1801F9EB0
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x1801F9F0C (std--_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = *a2;
  v5 = *a1;
  if ( *(_DWORD *)(*a2 + 264) < *(_DWORD *)(v5 + 264) )
  {
    *a2 = v5;
    *a1 = v3;
    v3 = *a2;
  }
  v6 = *a3;
  result = *(unsigned int *)(v3 + 264);
  if ( *(_DWORD *)(*a3 + 264) < (unsigned int)result )
  {
    *a3 = v3;
    *a2 = v6;
    result = *(unsigned int *)(*a1 + 264);
    if ( *(_DWORD *)(v6 + 264) < (unsigned int)result )
    {
      *a2 = *a1;
      *a1 = v6;
    }
  }
  return result;
}
