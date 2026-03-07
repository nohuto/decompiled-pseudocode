_QWORD *__fastcall Prediction::Vector<Prediction::CFixPred,3>::operator=(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9

  v2 = a1;
  v3 = a2 - (_QWORD)a1;
  v4 = 3LL;
  do
  {
    if ( v2 != (_QWORD *)((char *)v2 + v3) )
      *v2 = *(_QWORD *)((char *)v2 + v3);
    ++v2;
    --v4;
  }
  while ( v4 );
  return a1;
}
