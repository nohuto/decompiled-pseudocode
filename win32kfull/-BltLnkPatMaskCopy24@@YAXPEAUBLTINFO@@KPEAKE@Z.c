void __fastcall BltLnkPatMaskCopy24(struct BLTINFO *a1, unsigned int a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // esi
  __int64 v5; // r12
  __int64 v6; // r15
  char v7; // r10
  unsigned int v8; // r11d
  struct BLTINFO *v9; // rdi
  unsigned int v10; // ebx
  int v11; // ebp
  int v12; // r13d
  _BYTE *v13; // rdx
  int v14; // r14d
  int v15; // r9d
  unsigned int v16; // r8d
  int v17; // ecx
  char v18; // al
  unsigned int v19; // r8d

  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v7 = a2;
  v8 = a2 >> 8;
  v9 = a1;
  v10 = HIWORD(a2);
  while ( v4 )
  {
    --v4;
    v11 = *((_DWORD *)v9 + 7);
    v12 = *((_DWORD *)v9 + 12);
    v13 = (_BYTE *)(v6 + 3 * *((_DWORD *)v9 + 14));
    if ( v11 <= 0 )
      goto LABEL_41;
    do
    {
      v14 = v11;
      v15 = v11;
      v16 = a4 ^ *(unsigned __int8 *)(((__int64)v12 >> 3) + v5);
      v17 = 8 - (v12 & 7);
      if ( v17 <= v11 )
        v14 = 8 - (v12 & 7);
      v11 -= v14;
      v12 += v14;
      if ( v16 != 255 )
      {
        v18 = v17 - v15;
        if ( v17 <= v15 )
          v18 = 0;
        v19 = v16 >> v18;
        if ( v14 != 1 )
        {
          if ( v14 != 2 )
          {
            if ( v14 != 3 )
            {
              if ( v14 != 4 )
              {
                if ( v14 != 5 )
                {
                  if ( v14 != 6 )
                  {
                    if ( v14 != 7 )
                    {
                      if ( v14 != 8 )
                        goto LABEL_39;
                      if ( (v19 & 1) == 0 )
                      {
                        v13[23] = v10;
                        v13[22] = v8;
                        v13[21] = v7;
                      }
                      v19 >>= 1;
                    }
                    if ( (v19 & 1) == 0 )
                    {
                      v13[20] = v10;
                      v13[19] = v8;
                      v13[18] = v7;
                    }
                    v19 >>= 1;
                  }
                  if ( (v19 & 1) == 0 )
                  {
                    v13[17] = v10;
                    v13[16] = v8;
                    v13[15] = v7;
                  }
                  v19 >>= 1;
                }
                if ( (v19 & 1) == 0 )
                {
                  v13[14] = v10;
                  v13[13] = v8;
                  v13[12] = v7;
                }
                v19 >>= 1;
              }
              if ( (v19 & 1) == 0 )
              {
                v13[11] = v10;
                v13[10] = v8;
                v13[9] = v7;
              }
              v19 >>= 1;
            }
            if ( (v19 & 1) == 0 )
            {
              v13[8] = v10;
              v13[7] = v8;
              v13[6] = v7;
            }
            v19 >>= 1;
          }
          if ( (v19 & 1) == 0 )
          {
            v13[5] = v10;
            v13[4] = v8;
            v13[3] = v7;
          }
          v19 >>= 1;
        }
        if ( (v19 & 1) == 0 )
        {
          v13[2] = v10;
          v13[1] = v8;
          *v13 = v7;
        }
      }
LABEL_39:
      v13 += 3 * v14;
    }
    while ( v11 > 0 );
    v9 = a1;
LABEL_41:
    v6 += *((int *)v9 + 11);
    v5 += *((int *)v9 + 10);
  }
}
