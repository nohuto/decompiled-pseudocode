__int64 __fastcall HvpDetermineResultingLoggingState(unsigned int *a1)
{
  unsigned int v1; // r11d
  unsigned int v2; // r8d
  unsigned int v4; // ecx
  unsigned int *v5; // r9
  __int64 v6; // rbx
  unsigned int v7; // r10d
  __int64 v8; // r9
  int v9; // r10d
  __int64 result; // rax
  unsigned int v11; // ecx

  v1 = a1[15];
  v2 = 0;
  a1[16] = 0;
  if ( v1 )
  {
    v4 = 0;
    v5 = a1 + 13;
    v6 = v1;
    do
    {
      v7 = a1[6 * *v5 + 6];
      if ( v7 > v4 )
      {
        a1[16] = v7;
        v4 = v7;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  v8 = 3LL * a1[v1 + 12];
  a1[17] = a1[6 * a1[13] + 3];
  v9 = a1[2 * v8 + 4] + 1;
  a1[20] = v9;
  result = a1[2 * v8 + 1];
  v11 = a1[2 * v8 + 2];
  if ( (result & 2) != 0 )
  {
    if ( v11 == 1 )
    {
      a1[22] |= 1u;
      a1[18] = 1;
    }
    else
    {
      result = 5 - (unsigned int)(v11 != 4);
      a1[18] = result;
    }
    a1[19] = v9;
  }
  else
  {
    a1[18] = v11;
    result = a1[2 * v8 + 3];
    a1[19] = result;
    v2 = a1[2 * v8 + 5];
  }
  a1[21] = v2;
  return result;
}
