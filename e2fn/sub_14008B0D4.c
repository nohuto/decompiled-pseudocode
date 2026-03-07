_QWORD *__fastcall sub_14008B0D4(_QWORD *a1, _QWORD *a2)
{
  int v2; // ebx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 Pool2; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx

  v2 = 0;
  *a1 = off_1400D4D58;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = a2[3];
  if ( !v5 )
    goto LABEL_14;
  v6 = 24 * v5;
  if ( !is_mul_ok(v5, 0x18uLL) )
    v6 = -1LL;
  Pool2 = ExAllocatePool2(64LL, v6, 1802921315LL);
  if ( Pool2 )
  {
    v8 = Pool2;
    do
    {
      *(_OWORD *)v8 = 0LL;
      *(_BYTE *)(v8 + 16) = 0;
      v8 += 24LL;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    Pool2 = 0LL;
  }
  a1[1] = Pool2;
  if ( Pool2 )
  {
    a1[3] = a2[3];
    v9 = a2[2];
    a1[2] = v9;
    if ( v9 )
    {
      v10 = 0LL;
      do
      {
        v11 = a2[1];
        ++v2;
        v12 = a1[1];
        *(_OWORD *)(v10 + v12) = *(_OWORD *)(v10 + v11);
        *(_QWORD *)(v10 + v12 + 16) = *(_QWORD *)(v10 + v11 + 16);
        v10 += 24LL;
      }
      while ( (unsigned __int64)v2 < a1[2] );
    }
  }
  else
  {
LABEL_14:
    a1[3] = 0LL;
    a1[2] = 0LL;
  }
  return a1;
}
