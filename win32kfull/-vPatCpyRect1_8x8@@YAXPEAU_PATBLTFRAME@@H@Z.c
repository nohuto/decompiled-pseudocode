void __fastcall vPatCpyRect1_8x8(struct _PATBLTFRAME *a1, int a2)
{
  struct _RECTL *v3; // rsi
  LONG left; // r8d
  int right; // r9d
  unsigned int v6; // r13d
  unsigned int v7; // r10d
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // r9d
  int v11; // ecx
  unsigned int *v12; // r11
  unsigned int *v13; // rsi
  char v14; // bp
  unsigned int *i; // r14
  unsigned int v16; // r8d
  int v17; // r8d
  bool v18; // zf
  int v20; // [rsp+78h] [rbp-70h]
  struct _RECTL *v21; // [rsp+80h] [rbp-68h]
  int v22; // [rsp+88h] [rbp-60h]
  unsigned int *v23; // [rsp+90h] [rbp-58h]
  unsigned int v24[8]; // [rsp+98h] [rbp-50h] BYREF
  unsigned int v25[2]; // [rsp+B8h] [rbp-30h] BYREF

  v3 = (struct _RECTL *)*((_QWORD *)a1 + 3);
  v20 = *((_DWORD *)a1 + 4);
  v21 = v3;
  do
  {
    left = v3->left;
    right = v3->right;
    v6 = aulMsk[v3->left & 0x1F];
    v7 = ~v6;
    v8 = aulMsk[right & 0x1F];
    if ( v8 == -1 )
      v8 = 0;
    v23 = (unsigned int *)(*(_QWORD *)a1 + *((_DWORD *)a1 + 4) * v3->top + 4 * ((__int64)v3->left >> 5));
    v22 = (right >> 5) - ((left + 31) >> 5);
    if ( v22 + 1 > 5 )
    {
      if ( v22 == 5 )
        goto LABEL_19;
      v9 = v22 - 6;
      if ( v22 == 6 )
        goto LABEL_19;
    }
    else
    {
      if ( v22 == 4 )
        goto LABEL_19;
      if ( v22 == -1 )
        goto LABEL_11;
      v9 = (right >> 5) - ((left + 31) >> 5);
      if ( !v22 )
      {
        if ( aulMsk[v3->left & 0x1F] != -1 && v8 )
        {
          v10 = 8;
          goto LABEL_22;
        }
LABEL_11:
        v6 &= ~v8;
        v10 = 9;
        v7 = ~v6;
        goto LABEL_22;
      }
    }
    v11 = v9 - 1;
    if ( v11 && (unsigned int)(v11 - 1) >= 2 )
    {
      if ( aulMsk[v3->left & 0x1F] == -1 )
        v10 = 3 - (v8 != 0);
      else
        v10 = v8 == 0;
      goto LABEL_22;
    }
LABEL_19:
    if ( aulMsk[v3->left & 0x1F] == -1 )
      v10 = 7 - (v8 != 0);
    else
      v10 = 5 - (v8 != 0);
LABEL_22:
    v12 = (unsigned int *)*((_QWORD *)a1 + 1);
    v13 = v24;
    v14 = *((_BYTE *)a1 + 32);
    for ( i = v12 + 8; v12 < i; ++v13 )
    {
      v16 = *v12++;
      v17 = (((HIBYTE(v16) << 8) | HIBYTE(v16)) << 16) | (HIBYTE(v16) << 8) | HIBYTE(v16);
      if ( v14 )
        v17 = __ROR4__(v17, v14);
      *v13 = v17;
    }
    vPatternCopyLoop(v21, v23, a1, v10, ~v8, v6, v8, v7, v22, v20, 8 * v20, v24, v25);
    v3 = v21 + 1;
    v18 = a2-- == 1;
    ++v21;
  }
  while ( !v18 );
}
