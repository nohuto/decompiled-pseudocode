char *__fastcall Prediction::operator+<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  char *v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r10
  char v11; // [rsp+30h] [rbp+8h] BYREF

  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>();
  v6 = a2 - a3;
  v7 = a1;
  v8 = a3 - (_QWORD)a1;
  v9 = 3LL;
  do
  {
    if ( v7 != &v11 )
      *(_QWORD *)v7 = *(_QWORD *)&v7[v8] + *(_QWORD *)&v7[v8 + v6];
    v7 += 8;
    --v9;
  }
  while ( v9 );
  return a1;
}
