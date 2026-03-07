char *__fastcall Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(char *a1)
{
  char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  `vector constructor iterator'(a1, 8LL, 9LL, (void (__fastcall *)(char *))Prediction::CFixPred::CFixPred);
  v2 = a1;
  v3 = 3LL;
  do
  {
    v4 = 3LL;
    do
    {
      if ( v2 != &v6 )
        *(_QWORD *)v2 = 0LL;
      v2 += 8;
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
  return a1;
}
