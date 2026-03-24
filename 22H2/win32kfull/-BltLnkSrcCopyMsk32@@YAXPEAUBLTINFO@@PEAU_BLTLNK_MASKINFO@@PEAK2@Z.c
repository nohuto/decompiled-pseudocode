/*
 * XREFs of ?BltLnkSrcCopyMsk32@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C00FE820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk32(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // eax
  struct _BLTLNK_MASKINFO *v5; // r8
  int v6; // r11d
  struct BLTINFO *v7; // rbx
  int v8; // r13d
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // r14d
  int v13; // r15d
  unsigned int v14; // edx
  int v15; // ecx
  char v16; // bp
  bool v17; // cc
  int v18; // r12d
  int v19; // r15d
  unsigned int v20; // edx
  int v21; // esi
  __int64 v22; // rax
  _DWORD *v23; // r9
  _DWORD *v24; // r10
  unsigned __int8 v25; // [rsp+0h] [rbp-58h]
  int v26; // [rsp+4h] [rbp-54h]
  __int64 v27; // [rsp+10h] [rbp-48h]
  __int64 v28; // [rsp+18h] [rbp-40h]

  v4 = *((_DWORD *)a2 + 6);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 5);
  v7 = a1;
  v8 = *((_DWORD *)a1 + 8);
  v9 = *((_QWORD *)a1 + 1);
  v10 = *(_QWORD *)a2;
  v11 = *((_QWORD *)v7 + 2);
  v26 = v4;
  v27 = v11;
  v25 = *((_BYTE *)v5 + 36);
  v28 = v9;
  while ( v8 )
  {
    --v8;
    v18 = *((_DWORD *)v7 + 7);
    v21 = *((_DWORD *)v5 + 7);
    v23 = (_DWORD *)(v9 + 4LL * *((int *)v7 + 12));
    v24 = (_DWORD *)(v11 + 4LL * *((int *)v7 + 14));
    if ( v18 <= 0 )
      goto LABEL_44;
    do
    {
      v12 = v26 - v21;
      v13 = v18;
      v14 = v25 ^ *(unsigned __int8 *)(((__int64)v21 >> 3) + v10);
      v15 = 8 - (v21 & 7);
      v16 = v15 - v18;
      if ( v15 <= v18 )
      {
        v13 = 8 - (v21 & 7);
        v16 = 0;
      }
      v17 = v13 <= v12;
      if ( v13 > v12 )
      {
        v16 += v13 - v12;
        v17 = v13 <= v12;
      }
      if ( v17 )
        v12 = v13;
      v18 -= v12;
      v19 = v12 + v21;
      if ( v14 )
      {
        v20 = v14 >> v16;
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
                      if ( (v20 & 1) != 0 )
                        v24[7] = v23[7];
                      v20 >>= 1;
                    }
                    if ( (v20 & 1) != 0 )
                      v24[6] = v23[6];
                    v20 >>= 1;
                  }
                  if ( (v20 & 1) != 0 )
                    v24[5] = v23[5];
                  v20 >>= 1;
                }
                if ( (v20 & 1) != 0 )
                  v24[4] = v23[4];
                v20 >>= 1;
              }
              if ( (v20 & 1) != 0 )
                v24[3] = v23[3];
              v20 >>= 1;
            }
            if ( (v20 & 1) != 0 )
              v24[2] = v23[2];
            v20 >>= 1;
          }
          if ( (v20 & 1) != 0 )
            v24[1] = v23[1];
          v20 >>= 1;
        }
        if ( (v20 & 1) != 0 )
          *v24 = *v23;
      }
LABEL_40:
      v21 = 0;
      v22 = 4LL * v12;
      v23 = (_DWORD *)((char *)v23 + v22);
      v24 = (_DWORD *)((char *)v24 + v22);
      if ( v19 != v26 )
        v21 = v19;
    }
    while ( v18 > 0 );
    v5 = a2;
    v7 = a1;
    v9 = v28;
    v11 = v27;
LABEL_44:
    v11 += *((int *)v7 + 11);
    v9 += *((int *)v7 + 10);
    v27 = v11;
    v28 = v9;
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
