__int64 __fastcall MiReduceWs(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 128);
  v7 = 7;
  if ( v5 > a3 )
  {
    do
    {
      v8 = v5 - v4;
      if ( v7 )
      {
        v9 = *(_QWORD *)(a1 + 8LL * v7 + 40);
        if ( v9 > v8 )
          v9 = v8;
        v8 = v9;
      }
      if ( v8 )
      {
        LOBYTE(a3) = a2;
        MiTrimWorkingSet(a1, v8, a3, v7, 16);
        if ( !v7 )
          break;
      }
      v5 = *(_QWORD *)(a1 + 128);
      --v7;
    }
    while ( v5 > v4 );
  }
  LOBYTE(v5) = a2;
  return MiSimpleAging(a1, v5);
}
