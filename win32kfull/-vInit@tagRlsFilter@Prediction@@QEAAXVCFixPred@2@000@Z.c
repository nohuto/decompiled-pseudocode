__int64 __fastcall Prediction::tagRlsFilter::vInit(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 *v5; // rdi
  __int64 *v7; // rcx
  __int64 *v8; // r8
  unsigned __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1 + 53;
  if ( a1 + 53 != a2 )
    *v5 = *a2;
  v7 = a1 + 50;
  if ( v7 != a3 )
    *v7 = *a3;
  if ( a1 + 51 != a4 )
    a1[51] = *a4;
  v8 = a1 + 48;
  if ( a1 + 48 != v7 )
    *v8 = *v7;
  v9 = Div128by64(1LL, 0LL, *v8, &v11);
  if ( a1 + 49 != &v11 )
    a1[49] = v9;
  if ( a1 + 52 != a5 )
    a1[52] = *a5;
  Prediction::SquareMatrix<Prediction::CFixPred,3>::diag((__int64)(a1 + 18), v5);
  a5 = (__int64 *)0x100000000LL;
  return Prediction::SquareMatrix<Prediction::CFixPred,3>::diag((__int64)(a1 + 36), (__int64 *)&a5);
}
