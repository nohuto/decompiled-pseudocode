/*
 * XREFs of ?BltLnkPatMaskCopy32@@YAXPEAUBLTINFO@@KPEAKE@Z @ 0x1C010DC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkPatMaskCopy32(struct BLTINFO *a1, int a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // ebx
  struct BLTINFO *v5; // r10
  __int64 v6; // rbp
  __int64 v8; // rsi
  int v9; // r12d
  int v10; // r14d
  int v11; // r9d
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // r15d
  _DWORD *v16; // r8
  char v17; // al
  unsigned int v18; // edx

  v4 = *((_DWORD *)a1 + 8);
  v5 = a1;
  v6 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = a4;
  while ( v4 )
  {
    --v4;
    v14 = *((_DWORD *)v5 + 7);
    v15 = *((_DWORD *)v5 + 12);
    v16 = (_DWORD *)(v8 + 4LL * *((int *)v5 + 14));
    if ( v14 > 0 )
    {
      while ( 1 )
      {
        v10 = v14;
        v11 = v14;
        v12 = v9 ^ *(unsigned __int8 *)(((__int64)v15 >> 3) + v6);
        v13 = 8 - (v15 & 7);
        if ( v13 <= v14 )
          v10 = 8 - (v15 & 7);
        v14 -= v10;
        v15 += v10;
        if ( v12 == 255 )
          goto LABEL_5;
        v17 = v13 - v11;
        if ( v13 <= v11 )
          v17 = 0;
        v18 = v12 >> v17;
        switch ( v10 )
        {
          case 1:
            goto LABEL_42;
          case 2:
            goto LABEL_39;
          case 3:
            goto LABEL_36;
          case 4:
            goto LABEL_33;
          case 5:
            goto LABEL_30;
          case 6:
            goto LABEL_27;
          case 7:
            goto LABEL_24;
        }
        if ( v10 == 8 )
          break;
LABEL_5:
        v16 += v10;
        if ( v14 <= 0 )
        {
          v5 = a1;
          goto LABEL_7;
        }
      }
      if ( (v18 & 1) == 0 )
        v16[7] = a2;
      v18 >>= 1;
LABEL_24:
      if ( (v18 & 1) == 0 )
        v16[6] = a2;
      v18 >>= 1;
LABEL_27:
      if ( (v18 & 1) == 0 )
        v16[5] = a2;
      v18 >>= 1;
LABEL_30:
      if ( (v18 & 1) == 0 )
        v16[4] = a2;
      v18 >>= 1;
LABEL_33:
      if ( (v18 & 1) == 0 )
        v16[3] = a2;
      v18 >>= 1;
LABEL_36:
      if ( (v18 & 1) == 0 )
        v16[2] = a2;
      v18 >>= 1;
LABEL_39:
      if ( (v18 & 1) == 0 )
        v16[1] = a2;
      v18 >>= 1;
LABEL_42:
      if ( (v18 & 1) == 0 )
        *v16 = a2;
      goto LABEL_5;
    }
LABEL_7:
    v8 += *((int *)v5 + 11);
    v6 += *((int *)v5 + 10);
  }
}
