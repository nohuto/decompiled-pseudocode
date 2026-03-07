__int64 __fastcall IntpInitClassContext(_BYTE *a1, unsigned __int8 a2, unsigned int *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int16 v5; // r14
  char *v7; // rsi
  __int16 v8; // r9
  unsigned __int8 *v9; // r8
  __int64 v10; // r10
  __int16 v11; // cx
  unsigned int v12; // eax
  bool v13; // zf
  __int16 v14; // dx
  __int64 v15; // rbp
  __int64 Pool2; // r8
  __int64 v17; // r9
  __int16 v18; // dx
  __int64 v19; // rdx
  char v20; // al
  __int64 result; // rax
  __int64 v22; // rcx

  v3 = 0;
  v4 = a2;
  v5 = -1;
  v7 = a1;
  v8 = -1;
  if ( a2 )
  {
    v9 = a1 + 1;
    v10 = a2;
    do
    {
      v11 = *v9;
      v12 = v3 + 1;
      v13 = v11 == v8;
      v9 += 2;
      v14 = v8;
      v8 = v11;
      if ( v13 )
        v12 = v3;
      v3 = v12;
      if ( v11 == v14 )
        v8 = v14;
      --v10;
    }
    while ( v10 );
  }
  v15 = v4;
  Pool2 = ExAllocatePool2(64LL, 24LL * v3, 0x5049654Bu);
  if ( Pool2 )
  {
    v17 = 0xFFFFFFFFLL;
    if ( (_BYTE)v4 )
    {
      do
      {
        v18 = (unsigned __int8)v7[1];
        if ( v18 != v5 )
        {
          v17 = (unsigned int)(v17 + 1);
          v5 = (unsigned __int8)v7[1];
          v22 = 3 * v17;
          *(_QWORD *)(Pool2 + 8 * v22 + 8) = 0LL;
          *(_BYTE *)(Pool2 + 8 * v22) = v18;
          *(_BYTE *)(Pool2 + 8 * v22 + 1) = 0;
        }
        v19 = 3 * v17;
        ++*(_BYTE *)(Pool2 + 8 * v19 + 1);
        v20 = *v7;
        v7 += 2;
        *(_QWORD *)(Pool2 + 8 * v19 + 8) = *(_QWORD *)(Pool2 + 24 * v17 + 8) | (1LL << v20);
        --v15;
      }
      while ( v15 );
    }
  }
  result = Pool2;
  *a3 = v3;
  return result;
}
