__int64 __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 0LL;
  v4 = 0LL;
  do
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * ((v2 >> 1) + v4)) >= *a2 )
    {
      v2 >>= 1;
    }
    else
    {
      v4 += (v2 >> 1) + 1;
      v2 += -1LL - (v2 >> 1);
    }
  }
  while ( v2 );
  return v4;
}
