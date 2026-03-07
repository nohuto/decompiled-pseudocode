void __fastcall BltLnkSrcCopyMsk32(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // eax
  struct _BLTLNK_MASKINFO *v5; // r8
  int v6; // r11d
  struct BLTINFO *v7; // rsi
  int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // r14d
  char v13; // r9
  unsigned int v14; // edx
  int v15; // ecx
  bool v16; // cc
  int v17; // r15d
  int v18; // r13d
  unsigned int v19; // edx
  int v20; // r10d
  __int64 v21; // rax
  _DWORD *v22; // rbx
  _DWORD *v23; // rdi
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
    v17 = *((_DWORD *)v7 + 7);
    v20 = *((_DWORD *)v5 + 7);
    v22 = (_DWORD *)(v9 + 4LL * *((int *)v7 + 12));
    v23 = (_DWORD *)(v11 + 4LL * *((int *)v7 + 14));
    if ( v17 <= 0 )
      goto LABEL_44;
    do
    {
      v12 = v25 - v20;
      v13 = 0;
      v14 = v24 ^ *(unsigned __int8 *)(((__int64)v20 >> 3) + v10);
      v15 = 8 - (v20 & 7);
      if ( v15 > v17 )
      {
        v15 = v17;
        v13 = 8 - (v20 & 7) - v17;
      }
      v16 = v15 <= v12;
      if ( v15 > v12 )
      {
        v13 += v15 - v12;
        v16 = v15 <= v12;
      }
      if ( v16 )
        v12 = v15;
      v17 -= v12;
      v18 = v12 + v20;
      if ( v14 )
      {
        v19 = v14 >> v13;
        if ( v12 != 1 )
        {
          if ( v12 != 2 )
          {
            if ( v12 != 3 )
            {
              if ( v12 != 4 )
              {
                if ( v12 != 5 )
                {
                  if ( v12 != 6 )
                  {
                    if ( v12 != 7 )
                    {
                      if ( v12 != 8 )
                        goto LABEL_40;
                      if ( (v19 & 1) != 0 )
                        v23[7] = v22[7];
                      v19 >>= 1;
                    }
                    if ( (v19 & 1) != 0 )
                      v23[6] = v22[6];
                    v19 >>= 1;
                  }
                  if ( (v19 & 1) != 0 )
                    v23[5] = v22[5];
                  v19 >>= 1;
                }
                if ( (v19 & 1) != 0 )
                  v23[4] = v22[4];
                v19 >>= 1;
              }
              if ( (v19 & 1) != 0 )
                v23[3] = v22[3];
              v19 >>= 1;
            }
            if ( (v19 & 1) != 0 )
              v23[2] = v22[2];
            v19 >>= 1;
          }
          if ( (v19 & 1) != 0 )
            v23[1] = v22[1];
          v19 >>= 1;
        }
        if ( (v19 & 1) != 0 )
          *v23 = *v22;
      }
LABEL_40:
      v20 = 0;
      v21 = 4LL * v12;
      v22 = (_DWORD *)((char *)v22 + v21);
      v23 = (_DWORD *)((char *)v23 + v21);
      if ( v18 != v25 )
        v20 = v18;
    }
    while ( v17 > 0 );
    v5 = a2;
    v7 = a1;
    v9 = v27;
    v11 = v26;
LABEL_44:
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
