void __fastcall vPatCpyRect4_8x8(struct _PATBLTFRAME *a1, int a2)
{
  struct _RECTL *v3; // rsi
  int v5; // r15d
  const unsigned int *v6; // rdi
  const unsigned int *v7; // r14
  char *v8; // r9
  char v9; // r11
  char *v10; // r8
  char v11; // al
  int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // r11d
  unsigned int v15; // ebp
  int v16; // r12d
  int v17; // ecx
  int v18; // r9d
  int v19; // ecx
  int v20; // [rsp+70h] [rbp-58h]
  char v21; // [rsp+78h] [rbp-50h] BYREF
  char v22; // [rsp+7Ah] [rbp-4Eh] BYREF
  __int64 v23; // [rsp+98h] [rbp-30h] BYREF

  v3 = (struct _RECTL *)*((_QWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 8) )
  {
    v6 = (const unsigned int *)&v21;
    v7 = (const unsigned int *)&v23;
    v8 = &v22;
    v9 = 4 * *((_BYTE *)a1 + 32);
    v10 = (char *)(*((_QWORD *)a1 + 1) + 2LL);
    do
    {
      HIBYTE(v20) = *(v10 - 2);
      BYTE2(v20) = *(v10 - 1);
      v11 = *v10;
      v10 += 4;
      BYTE1(v20) = v11;
      LOBYTE(v20) = *(v10 - 3);
      v12 = __ROR4__(v20, v9);
      v8[1] = v12;
      *v8 = BYTE1(v12);
      *(v8 - 1) = BYTE2(v12);
      *(v8 - 2) = HIBYTE(v12);
      v8 += 4;
    }
    while ( v8 - 2 < (char *)&v23 );
  }
  else
  {
    v6 = (const unsigned int *)*((_QWORD *)a1 + 1);
    v7 = v6 + 8;
  }
  do
  {
    v13 = dword_1C032AF00[v3->left & 7];
    v14 = ~v13;
    v15 = dword_1C032AF00[v3->right & 7];
    if ( !v15 )
      v15 = -1;
    v16 = (int)((v3->right >> 1) - (((v3->left + 7) >> 1) & 0xFFFFFFFC)) >> 2;
    if ( v16 + 1 > 5 )
    {
      if ( v16 == 5 )
        goto LABEL_22;
      v17 = v16 - 6;
      if ( v16 == 6 )
        goto LABEL_22;
    }
    else
    {
      if ( v16 == 4 )
        goto LABEL_22;
      if ( v16 == -1 )
        goto LABEL_14;
      v17 = (int)((v3->right >> 1) - (((v3->left + 7) >> 1) & 0xFFFFFFFC)) >> 2;
      if ( !v16 )
      {
        if ( v13 && v15 != -1 )
        {
          v18 = 8;
          goto LABEL_25;
        }
LABEL_14:
        v14 &= v15;
        v18 = 9;
        v13 = ~v14;
        goto LABEL_25;
      }
    }
    v19 = v17 - 1;
    if ( v19 && (unsigned int)(v19 - 1) >= 2 )
    {
      if ( v13 )
        v18 = v15 == -1;
      else
        v18 = 3 - (v15 != -1);
      goto LABEL_25;
    }
LABEL_22:
    if ( v13 )
      v18 = 5 - (v15 != -1);
    else
      v18 = 7 - (v15 != -1);
LABEL_25:
    vPatternCopyLoop(
      v3,
      (unsigned int *)(*(_QWORD *)a1 + (((__int64)v3->left >> 1) & 0xFFFFFFFFFFFFFFFCuLL)
                                     + *((_DWORD *)a1 + 4) * v3->top),
      a1,
      v18,
      v15,
      v14,
      ~v15,
      v13,
      v16,
      v5,
      8 * v5,
      v6,
      v7);
    ++v3;
    --a2;
  }
  while ( a2 );
}
