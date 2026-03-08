/*
 * XREFs of ?bSrcCopySRLE8D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02F05B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r8
  unsigned __int8 *v2; // rsi
  __int64 v3; // r10
  int v4; // r12d
  int v5; // ebp
  int v6; // r15d
  int v7; // r13d
  int v8; // edx
  unsigned int v9; // r14d
  __int64 v10; // rax
  int v11; // ecx
  __int64 result; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rbx
  char v16; // r9
  unsigned int v17; // r12d
  unsigned int v18; // r14d
  unsigned __int8 *v19; // rsi
  __int64 v20; // rdi
  unsigned int v21; // r12d
  int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // edx
  unsigned int v26; // edi
  __int64 v27; // rcx
  unsigned __int8 *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int8 *v31; // rsi
  unsigned int v32; // ebx
  int v33; // eax
  unsigned __int8 *v34; // rsi
  int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rax
  int v39; // r15d
  int v40; // edi
  unsigned int v41; // edx
  unsigned int i; // r14d
  int v43; // [rsp+4h] [rbp-64h]
  int v44; // [rsp+8h] [rbp-60h]
  unsigned int v45; // [rsp+Ch] [rbp-5Ch]
  int v46; // [rsp+10h] [rbp-58h]
  int v47; // [rsp+14h] [rbp-54h]
  __int64 v48; // [rsp+18h] [rbp-50h]
  unsigned int v50; // [rsp+78h] [rbp+10h]
  int v51; // [rsp+80h] [rbp+18h]
  unsigned int v52; // [rsp+88h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 25);
  v7 = *((_DWORD *)a1 + 24);
  v43 = *((_DWORD *)a1 + 11);
  v46 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 32);
  v51 = v6;
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v10 = *(_QWORD *)a1;
  v11 = *((_DWORD *)a1 + 22);
  v52 = v9;
  v47 = v11;
  v48 = *(_QWORD *)(v10 + 16);
  v44 = *((_DWORD *)v1 + 23);
  if ( v5 < v44 )
    return 1LL;
  v13 = (unsigned int)(v7 - 1) >> 1;
  v50 = v13;
  v14 = (unsigned int)v11 >> 1;
  v15 = (unsigned int)(v8 >> 1);
  v16 = 0;
  v45 = (unsigned int)v11 >> 1;
  if ( v5 < v6 )
  {
    if ( (unsigned int)v15 >= (unsigned int)v14 )
    {
      v14 = v13;
      if ( (unsigned int)v15 <= v13 )
        v14 = (unsigned int)v15;
    }
    v16 = *(_BYTE *)(v14 + v3);
  }
  v17 = v4 + 2;
  if ( v17 <= v9 )
  {
    while ( 1 )
    {
      v18 = *v2;
      v19 = v2 + 1;
      v20 = *v19;
      v2 = v19 + 1;
      if ( v18 )
      {
        if ( v5 < v6 && v8 < v7 && (int)(v18 + v8) > v11 )
        {
          if ( v8 < v11 )
          {
            v18 += v8 - v11;
            v8 = v11;
            v15 = (unsigned int)(v11 >> 1);
          }
          if ( (int)(v18 + v8) <= v7 )
          {
            v39 = 0;
          }
          else
          {
            v39 = v8 + v18 - v7;
            v18 = v7 - v8;
          }
          v40 = *(_DWORD *)(v48 + 4 * v20);
          if ( (v8 & 1) != 0 )
          {
            ++v8;
            *(_BYTE *)(v15 + v3) = v16 ^ (v16 ^ v40) & 0xF;
            v15 = (unsigned int)(v15 + 1);
            --v18;
          }
          v16 = (16 * v40) | v40 & 0xF;
          v41 = v18 + v8;
          for ( i = v18 >> 1; i; --i )
          {
            *(_BYTE *)(v15 + v3) = v16;
            v15 = (unsigned int)(v15 + 1);
          }
          if ( (v41 & 1) != 0 )
            v16 = (16 * v40) | v40 & 0xF;
          v8 = v39 + v41;
LABEL_74:
          v6 = v51;
          goto LABEL_76;
        }
        v8 += v18;
      }
      else
      {
        if ( (_DWORD)v20 )
        {
          if ( (_DWORD)v20 == 1 )
          {
            if ( v5 < v6 )
            {
              if ( v8 >= v11 && v8 < v7 && (v8 & 1) != 0 )
              {
                *(_BYTE *)(v15 + v3) = v16 ^ (*(_BYTE *)(v15 + v3) ^ v16) & 0xF;
              }
              else if ( (v7 & 1) != 0 && v8 >= v7 )
              {
                *(_BYTE *)(v50 + v3) = v16 ^ (*(_BYTE *)(v50 + v3) ^ v16) & 0xF;
              }
            }
            return 0LL;
          }
          if ( (_DWORD)v20 != 2 )
          {
            v21 = v20 + v17;
            if ( v21 > v52 )
              return 0LL;
            v22 = v20 & 1;
            if ( v5 >= v51 || v8 >= v7 || (int)v20 + v8 <= v11 )
            {
              v31 = &v2[v20];
              v8 += v20;
            }
            else
            {
              if ( v8 < v11 )
              {
                v23 = (unsigned int)(v11 - v8);
                v15 = (unsigned int)(v11 >> 1);
                LODWORD(v20) = v20 - v23;
                v8 = v11;
                v2 += v23;
              }
              if ( (int)v20 + v8 > v7 )
              {
                v18 = v8 + v20 - v7;
                LODWORD(v20) = v7 - v8;
              }
              if ( (v8 & 1) != 0 )
              {
                v24 = *v2++;
                ++v8;
                v1 = a1;
                v16 ^= (*(_BYTE *)(v48 + 4 * v24) ^ v16) & 0xF;
                *(_BYTE *)(v15 + v3) = v16;
                v15 = (unsigned int)(v15 + 1);
                LODWORD(v20) = v20 - 1;
              }
              v25 = v20 + v8;
              v26 = (unsigned int)v20 >> 1;
              if ( v26 )
              {
                do
                {
                  v27 = *v2;
                  v28 = v2 + 1;
                  v29 = *v28;
                  v2 = v28 + 1;
                  v16 = (16 * *(_BYTE *)(v48 + 4 * v27)) | *(_BYTE *)(v48 + 4 * v29) & 0xF;
                  *(_BYTE *)(v15 + v3) = v16;
                  v15 = (unsigned int)(v15 + 1);
                  --v26;
                }
                while ( v26 );
                v1 = a1;
              }
              if ( (v25 & 1) != 0 )
              {
                v30 = *v2++;
                v16 = v16 & 0xF | (16 * *(_BYTE *)(v48 + 4 * v30));
              }
              v31 = &v2[v18];
              v8 = v18 + v25;
            }
            v17 = v22 + v21;
            v2 = &v31[v22];
            goto LABEL_74;
          }
          if ( v5 >= v6 )
            goto LABEL_36;
          if ( v8 >= v11 && v8 < v7 && (v8 & 1) != 0 )
          {
            v16 ^= (*(_BYTE *)(v15 + v3) ^ v16) & 0xF;
            *(_BYTE *)(v15 + v3) = v16;
            goto LABEL_36;
          }
          if ( (v7 & 1) != 0 && v8 >= v7 )
          {
            v32 = (unsigned int)(v7 - 1) >> 1;
            v16 ^= (*(_BYTE *)(v50 + v3) ^ v16) & 0xF;
            *(_BYTE *)(v50 + v3) = v16;
          }
          else
          {
LABEL_36:
            v32 = (unsigned int)(v7 - 1) >> 1;
          }
          v17 += 2;
          if ( v17 > v52 )
            return 0LL;
          v33 = *v2;
          v34 = v2 + 1;
          v8 += v33;
          v35 = *v34;
          v2 = v34 + 1;
          v5 -= v35;
          v3 += v35 * v43;
          if ( v5 < v44 )
          {
            *((_DWORD *)v1 + 34) = v8;
LABEL_79:
            *((_QWORD *)v1 + 14) = v3;
            result = 1LL;
            *((_QWORD *)v1 + 13) = v2;
            *((_DWORD *)v1 + 31) = v17;
            *((_DWORD *)v1 + 33) = v5;
            return result;
          }
          v36 = v8 >> 1;
          if ( v5 < v6 )
          {
            v37 = v45;
            if ( v36 >= v45 )
            {
              v37 = v32;
              if ( v36 <= v32 )
                v37 = v8 >> 1;
            }
            v38 = v37;
            goto LABEL_58;
          }
          goto LABEL_76;
        }
        if ( v5 < v6 )
        {
          if ( v8 >= v11 && v8 < v7 && (v8 & 1) != 0 )
          {
            v16 ^= (*(_BYTE *)(v15 + v3) ^ v16) & 0xF;
            *(_BYTE *)(v15 + v3) = v16;
          }
          else if ( (v7 & 1) != 0 && v8 >= v7 )
          {
            v16 ^= (*(_BYTE *)(v50 + v3) ^ v16) & 0xF;
            *(_BYTE *)(v50 + v3) = v16;
          }
        }
        --v5;
        v3 += v43;
        v8 = v46;
        if ( v5 < v44 )
        {
          *((_DWORD *)v1 + 34) = v46;
          goto LABEL_79;
        }
        if ( v5 < v6 )
        {
          v38 = v45;
LABEL_58:
          v16 = *(_BYTE *)(v38 + v3);
        }
      }
LABEL_76:
      v17 += 2;
      v15 = (unsigned int)(v8 >> 1);
      if ( v17 > v52 )
        return 0LL;
      v11 = v47;
    }
  }
  return 0LL;
}
