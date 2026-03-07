void __fastcall BltLnkPatMaskCopy32(struct BLTINFO *a1, int a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // ebx
  struct BLTINFO *v5; // r10
  __int64 v6; // rbp
  __int64 v8; // rsi
  int v9; // r12d
  int v10; // edi
  int v11; // r15d
  _DWORD *v12; // r8
  int v13; // r14d
  int v14; // r9d
  unsigned int v15; // edx
  int v16; // ecx
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
    v10 = *((_DWORD *)v5 + 7);
    v11 = *((_DWORD *)v5 + 12);
    v12 = (_DWORD *)(v8 + 4LL * *((int *)v5 + 14));
    if ( v10 <= 0 )
      goto LABEL_41;
    do
    {
      v13 = v10;
      v14 = v10;
      v15 = v9 ^ *(unsigned __int8 *)(((__int64)v11 >> 3) + v6);
      v16 = 8 - (v11 & 7);
      if ( v16 <= v10 )
        v13 = 8 - (v11 & 7);
      v10 -= v13;
      v11 += v13;
      if ( v15 != 255 )
      {
        v17 = v16 - v14;
        if ( v16 <= v14 )
          v17 = 0;
        v18 = v15 >> v17;
        if ( v13 != 1 )
        {
          if ( v13 != 2 )
          {
            if ( v13 != 3 )
            {
              if ( v13 != 4 )
              {
                if ( v13 != 5 )
                {
                  if ( v13 != 6 )
                  {
                    if ( v13 != 7 )
                    {
                      if ( v13 != 8 )
                        goto LABEL_39;
                      if ( (v18 & 1) == 0 )
                        v12[7] = a2;
                      v18 >>= 1;
                    }
                    if ( (v18 & 1) == 0 )
                      v12[6] = a2;
                    v18 >>= 1;
                  }
                  if ( (v18 & 1) == 0 )
                    v12[5] = a2;
                  v18 >>= 1;
                }
                if ( (v18 & 1) == 0 )
                  v12[4] = a2;
                v18 >>= 1;
              }
              if ( (v18 & 1) == 0 )
                v12[3] = a2;
              v18 >>= 1;
            }
            if ( (v18 & 1) == 0 )
              v12[2] = a2;
            v18 >>= 1;
          }
          if ( (v18 & 1) == 0 )
            v12[1] = a2;
          v18 >>= 1;
        }
        if ( (v18 & 1) == 0 )
          *v12 = a2;
      }
LABEL_39:
      v12 += v13;
    }
    while ( v10 > 0 );
    v5 = a1;
LABEL_41:
    v8 += *((int *)v5 + 11);
    v6 += *((int *)v5 + 10);
  }
}
