char *__fastcall Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>(char *a1)
{
  __int64 v1; // rbx
  char *v3; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 3LL;
  `vector constructor iterator'(a1, 8LL, 3LL, (void (__fastcall *)(char *))Prediction::CFixPred::CFixPred);
  v3 = a1;
  do
  {
    if ( v3 != &v5 )
      *(_QWORD *)v3 = 0LL;
    v3 += 8;
    --v1;
  }
  while ( v1 );
  return a1;
}
