void __fastcall BltLnkSrcCopyMsk16(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // eax
  struct _BLTLNK_MASKINFO *v5; // r8
  int v6; // r11d
  struct BLTINFO *v7; // rsi
  int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // r15d
  int v13; // r10d
  _WORD *v14; // rbx
  _WORD *v15; // rdi
  int v16; // r14d
  char v17; // r9
  unsigned int v18; // edx
  int v19; // ecx
  bool v20; // cc
  int v21; // r13d
  unsigned int v22; // edx
  __int64 v23; // rax
  unsigned __int8 v24; // [rsp+0h] [rbp-58h]
  int v25; // [rsp+4h] [rbp-54h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+10h] [rbp-48h]

  v4 = *((_DWORD *)a2 + 6);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 5);
  v7 = a1;
  v8 = *((_DWORD *)a1 + 8);
  v9 = *((_QWORD *)a1 + 1);
  v10 = *(_QWORD *)a2;
  v11 = *((_QWORD *)v7 + 2);
  v25 = v4;
  v26 = v11;
  v24 = *((_BYTE *)v5 + 36);
  v27 = v9;
  while ( v8 )
  {
    --v8;
    v12 = *((_DWORD *)v7 + 7);
    v13 = *((_DWORD *)v5 + 7);
    v14 = (_WORD *)(v9 + 2LL * *((int *)v7 + 12));
    v15 = (_WORD *)(v11 + 2LL * *((int *)v7 + 14));
    if ( v12 > 0 )
    {
      while ( 1 )
      {
        v16 = v25 - v13;
        v17 = 0;
        v18 = v24 ^ *(unsigned __int8 *)(((__int64)v13 >> 3) + v10);
        v19 = 8 - (v13 & 7);
        if ( v19 > v12 )
        {
          v19 = v12;
          v17 = 8 - (v13 & 7) - v12;
        }
        v20 = v19 <= v16;
        if ( v19 > v16 )
        {
          v17 += v19 - v16;
          v20 = v19 <= v16;
        }
        if ( v20 )
          v16 = v19;
        v12 -= v16;
        v21 = v16 + v13;
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
        v13 = 0;
        v23 = 2LL * v16;
        v14 = (_WORD *)((char *)v14 + v23);
        v15 = (_WORD *)((char *)v15 + v23);
        if ( v21 != v25 )
          v13 = v21;
        if ( v12 <= 0 )
        {
          v5 = a2;
          v7 = a1;
          v9 = v27;
          v11 = v26;
          goto LABEL_45;
        }
      }
      if ( (v22 & 1) != 0 )
        v15[7] = v14[7];
      v22 >>= 1;
LABEL_21:
      if ( (v22 & 1) != 0 )
        v15[6] = v14[6];
      v22 >>= 1;
LABEL_24:
      if ( (v22 & 1) != 0 )
        v15[5] = v14[5];
      v22 >>= 1;
LABEL_27:
      if ( (v22 & 1) != 0 )
        v15[4] = v14[4];
      v22 >>= 1;
LABEL_30:
      if ( (v22 & 1) != 0 )
        v15[3] = v14[3];
      v22 >>= 1;
LABEL_33:
      if ( (v22 & 1) != 0 )
        v15[2] = v14[2];
      v22 >>= 1;
LABEL_36:
      if ( (v22 & 1) != 0 )
        v15[1] = v14[1];
      v22 >>= 1;
LABEL_39:
      if ( (v22 & 1) != 0 )
        *v15 = *v14;
      goto LABEL_41;
    }
LABEL_45:
    v11 += *((int *)v7 + 11);
    v9 += *((int *)v7 + 10);
    v26 = v11;
    v27 = v9;
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
