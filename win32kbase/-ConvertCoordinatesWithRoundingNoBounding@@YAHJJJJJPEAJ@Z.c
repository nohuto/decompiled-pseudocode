__int64 __fastcall ConvertCoordinatesWithRoundingNoBounding(int a1, int a2, int a3, int a4, int a5, LONG *plResult)
{
  int v6; // edx
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r9d

  v6 = a2 - a1;
  v7 = (a4 - a3) * (__int64)(a5 - a1);
  v8 = 2 * v7;
  if ( v7 <= 0 )
    v9 = v8 - v6;
  else
    v9 = v6 + v8;
  LOBYTE(v10) = LongLongToLong(a3 + v9 / (2LL * v6), plResult) == 0;
  return v10;
}
