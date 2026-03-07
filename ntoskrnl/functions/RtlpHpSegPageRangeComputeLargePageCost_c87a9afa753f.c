__int64 __fastcall RtlpHpSegPageRangeComputeLargePageCost(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  __int16 *v7; // rax
  unsigned int v8; // r9d
  int v9; // ecx
  int v10; // ebx
  unsigned int i; // edx
  __int64 result; // rax

  v3 = a2 & *a1;
  v4 = a2 - v3;
  v5 = *(_QWORD *)(v3 + 24);
  v6 = v5 + 2 * ((unsigned __int64)(v4 + a3 - 1) >> 21);
  v7 = (__int16 *)(v5 + 2 * ((unsigned __int64)v4 >> 21));
  v8 = 0;
  v9 = 0;
  v10 = 0;
  for ( i = ((__int64)(v6 - (_QWORD)v7) >> 1) + 1; (unsigned __int64)v7 <= v6; ++v7 )
  {
    if ( (*v7 & 0x7FF) != 0 )
    {
      if ( *v7 < 0 )
        ++v9;
    }
    else
    {
      ++v10;
    }
  }
  if ( v9 == i )
  {
    LOBYTE(v8) = i > (unsigned int)(a3 + 0x1FFFFF) >> 21;
    return v8;
  }
  else if ( v9 )
  {
    return 2LL;
  }
  else
  {
    result = 4LL;
    if ( v10 )
      return 3LL;
  }
  return result;
}
