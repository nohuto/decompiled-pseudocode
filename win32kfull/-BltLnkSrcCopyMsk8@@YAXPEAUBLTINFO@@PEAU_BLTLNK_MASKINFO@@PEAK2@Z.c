void __fastcall BltLnkSrcCopyMsk8(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // eax
  struct _BLTLNK_MASKINFO *v5; // r8
  int v6; // edi
  struct BLTINFO *v7; // rsi
  int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  _BYTE *v12; // r9
  int v13; // r15d
  _BYTE *v14; // r10
  int v15; // ebx
  int v16; // r14d
  char v17; // r11
  unsigned int v18; // edx
  int v19; // ecx
  bool v20; // cc
  int v21; // r13d
  unsigned int v22; // edx
  unsigned __int8 v23; // [rsp+0h] [rbp-58h]
  __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+10h] [rbp-48h]

  v4 = *((_DWORD *)a2 + 6);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 5);
  v7 = a1;
  v8 = *((_DWORD *)a1 + 8);
  v9 = *((_QWORD *)a1 + 1);
  v10 = *(_QWORD *)a2;
  v11 = *((_QWORD *)v7 + 2);
  v24 = v11;
  v23 = *((_BYTE *)v5 + 36);
  v25 = v9;
  while ( v8 )
  {
    --v8;
    v12 = (_BYTE *)(v9 + *((int *)v7 + 12));
    v13 = *((_DWORD *)v7 + 7);
    v14 = (_BYTE *)(v11 + *((int *)v7 + 14));
    v15 = *((_DWORD *)v5 + 7);
    if ( v13 > 0 )
    {
      while ( 1 )
      {
        v16 = v4 - v15;
        v17 = 0;
        v18 = v23 ^ *(unsigned __int8 *)(((__int64)v15 >> 3) + v10);
        v19 = 8 - (v15 & 7);
        if ( v19 > v13 )
        {
          v19 = v13;
          v17 = 8 - (v15 & 7) - v13;
        }
        v20 = v19 <= v16;
        if ( v19 > v16 )
        {
          v17 += v19 - v16;
          v20 = v19 <= v16;
        }
        if ( v20 )
          v16 = v19;
        v13 -= v16;
        v21 = v16 + v15;
        if ( !v18 )
          goto LABEL_41;
        v22 = v18 >> v17;
        switch ( v16 )
        {
          case 1:
            goto LABEL_39;
          case 2:
            goto LABEL_36;
          case 3:
            goto LABEL_33;
          case 4:
            goto LABEL_30;
          case 5:
            goto LABEL_27;
          case 6:
            goto LABEL_24;
          case 7:
            goto LABEL_21;
        }
        if ( v16 == 8 )
          break;
LABEL_41:
        v15 = 0;
        v12 += v16;
        v14 += v16;
        if ( v21 != v4 )
          v15 = v21;
        if ( v13 <= 0 )
        {
          v5 = a2;
          v7 = a1;
          v9 = v25;
          v11 = v24;
          goto LABEL_45;
        }
      }
      if ( (v22 & 1) != 0 )
        v14[7] = v12[7];
      v22 >>= 1;
LABEL_21:
      if ( (v22 & 1) != 0 )
        v14[6] = v12[6];
      v22 >>= 1;
LABEL_24:
      if ( (v22 & 1) != 0 )
        v14[5] = v12[5];
      v22 >>= 1;
LABEL_27:
      if ( (v22 & 1) != 0 )
        v14[4] = v12[4];
      v22 >>= 1;
LABEL_30:
      if ( (v22 & 1) != 0 )
        v14[3] = v12[3];
      v22 >>= 1;
LABEL_33:
      if ( (v22 & 1) != 0 )
        v14[2] = v12[2];
      v22 >>= 1;
LABEL_36:
      if ( (v22 & 1) != 0 )
        v14[1] = v12[1];
      v22 >>= 1;
LABEL_39:
      if ( (v22 & 1) != 0 )
        *v14 = *v12;
      goto LABEL_41;
    }
LABEL_45:
    v11 += *((int *)v7 + 11);
    v9 += *((int *)v7 + 10);
    v24 = v11;
    v25 = v9;
    if ( *((int *)v7 + 9) <= 0 )
    {
      if ( v6 )
      {
        --v6;
        v10 += *((int *)v5 + 8);
      }
      else
      {
        v6 = *((_DWORD *)v5 + 4) - 1;
        v10 = *((_QWORD *)v5 + 1) + *((_DWORD *)v5 + 8) * v6;
      }
    }
    else
    {
      ++v6;
      v10 += *((int *)v5 + 8);
      if ( v6 >= *((_DWORD *)v5 + 4) )
      {
        v10 = *((_QWORD *)v5 + 1);
        v6 = 0;
      }
    }
  }
}
