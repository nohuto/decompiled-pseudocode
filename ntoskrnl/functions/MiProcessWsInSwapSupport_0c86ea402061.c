__int64 __fastcall MiProcessWsInSwapSupport(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax
  _QWORD *v5; // r9
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  _QWORD *v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi

  v2 = *(_QWORD **)a1;
  result = 0LL;
  v5 = *(_QWORD **)a1;
  v6 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 < v6 )
  {
    do
    {
      v7 = v2[1] >> 12;
      if ( (unsigned __int64)(v7 + result) >= 0x1000 )
      {
        v9 = 4096 - result;
        if ( (a2 & 4) != 0 )
        {
          v10 = *v2 + (v9 << 12);
          if ( ((*v2 ^ (v10 - 1)) & 0xFFFFFFFFFFE00000uLL) != 0 )
            v9 -= (v10 >> 12) & 0x1FF;
        }
        v11 = v7 - v9;
        v2[1] = v9 << 12;
        MiProcessWsInSwapRanges(v5, v2, a2);
        if ( v11 )
        {
          v5 = v2;
          *v2 += v2[1];
          v2[1] = v11 << 12;
          v2 -= 2;
        }
        else
        {
          v5 = v2 + 2;
        }
        result = 0LL;
      }
      else
      {
        result += v7;
      }
      v8 = v2;
      v2 += 2;
    }
    while ( (unsigned __int64)v2 < v6 );
    if ( result )
      return MiProcessWsInSwapRanges(v5, v8, a2);
  }
  return result;
}
