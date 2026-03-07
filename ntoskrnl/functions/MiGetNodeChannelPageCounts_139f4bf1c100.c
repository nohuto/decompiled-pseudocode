unsigned __int64 *__fastcall MiGetNodeChannelPageCounts(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  unsigned int v7; // r10d
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // r11
  __int64 *v11; // r9
  __int64 v12; // rbx
  _QWORD *v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edi
  unsigned __int64 v19; // r8
  unsigned int v20; // r9d
  unsigned __int64 *result; // rax
  unsigned int v22; // ebp
  _QWORD *v23; // rsi
  unsigned __int64 v24; // rcx
  __int64 *v25; // r8
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rsi
  _QWORD *v29; // rcx
  __int64 v30; // rbp
  __int64 v31; // rax

  v7 = a3;
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 25408LL * a2);
  if ( a3 == 4 )
    v9 = v8[2854];
  else
    v9 = v8[a3 + 2850];
  do
  {
    if ( MmNumberOfChannels == 1 || v7 == 4 )
    {
      v10 = v8[2844];
      v11 = MiLargePageSizes;
      v12 = v8[2845];
      v13 = v8;
      v14 = 3LL;
      do
      {
        v15 = *v11++;
        v16 = *v13 * v15;
        v17 = v13[1] * v15;
        v10 += v16;
        v13 += 134;
        v12 += v17;
        --v14;
      }
      while ( v14 );
      v18 = MmNumberOfChannels;
      v19 = 0LL;
      if ( v7 == 4 )
        goto LABEL_8;
    }
    else
    {
      v25 = MiLargePageSizes;
      v26 = 3LL;
      v10 = v8[2 * v7 + 2867];
      v27 = (__int64)&v8[4 * v7 + 6];
      v12 = v8[2 * v7 + 2868];
      do
      {
        v28 = *v25;
        v29 = (_QWORD *)v27;
        v30 = 4LL;
        do
        {
          v31 = *v29 + v29[32];
          ++v29;
          v10 += v28 * v31;
          v12 += v28 * (v29[15] + v29[47]);
          --v30;
        }
        while ( v30 );
        ++v25;
        v27 += 1072LL;
        --v26;
      }
      while ( v26 );
      v19 = 0LL;
    }
    v18 = v7 + 1;
LABEL_8:
    v20 = 0;
    if ( v7 != 4 )
      v20 = v7;
    v7 = v20;
LABEL_11:
    if ( v20 != v18 )
    {
      v22 = 0;
      v23 = &v8[88 * v20 + 407];
      while ( 1 )
      {
        v24 = v19 + *v23;
        if ( v24 < v19 || v24 == -1LL )
          break;
        ++v22;
        v23 += 11;
        v19 = v24;
        if ( v22 >= 8 )
        {
          ++v20;
          goto LABEL_11;
        }
      }
      v19 = -2LL;
    }
  }
  while ( v12 + v19 + v10 > v9 );
  *a5 = v12;
  result = a6;
  *a4 = v10;
  *a6 = v19;
  return result;
}
