__int64 __fastcall Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(__int64 a1, __int64 *a2)
{
  __int64 v2; // r10
  __int64 i; // r9
  __int64 j; // r8
  __int64 result; // rax
  __int64 *v7; // rcx

  v2 = 0LL;
  for ( i = 0LL; i < 9; i += 3LL )
  {
    for ( j = 0LL; j < 3; ++j )
    {
      if ( v2 == j )
      {
        result = i + j;
        v7 = (__int64 *)(a1 + 8 * (i + j));
        if ( v7 != a2 )
        {
          result = *a2;
          *v7 = *a2;
        }
      }
    }
    ++v2;
  }
  return result;
}
