/*
 * XREFs of ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02CCE70
 * Callers:
 *     <none>
 * Callees:
 *     ?Feature_2923253048__private_IsEnabled@@YAHXZ @ 0x1C015FFCC (-Feature_2923253048__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall bSrcCopySRLE4D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // rsi
  char *v2; // r14
  __int64 v3; // rbp
  int v4; // r11d
  int v5; // r13d
  int v6; // r10d
  int v7; // ebx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  __int64 result; // rax
  unsigned int v12; // r12d
  unsigned int v13; // edx
  __int64 v14; // r9
  char v15; // di
  __int64 v16; // rax
  unsigned int v17; // r11d
  unsigned int v18; // edx
  unsigned __int8 *v19; // r14
  unsigned __int64 v20; // r8
  unsigned int v21; // r11d
  BOOL v22; // r12d
  unsigned int v23; // ecx
  char v24; // al
  char v25; // cl
  unsigned int v26; // r10d
  int v27; // edx
  unsigned int v28; // eax
  char v29; // bl
  __int64 v30; // r9
  unsigned int v31; // r8d
  unsigned int v32; // eax
  char v33; // dl
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r14
  unsigned int j; // r8d
  unsigned __int64 v37; // rax
  int v38; // eax
  unsigned __int8 *v39; // r14
  int v40; // ecx
  unsigned int v41; // r12d
  __int64 v42; // rax
  int v43; // eax
  int v44; // r12d
  __int64 v45; // rcx
  char v46; // r8
  char v47; // r10
  char v48; // al
  __int64 v49; // rax
  char v50; // r8
  unsigned int v51; // ebx
  unsigned int i; // edx
  __int64 v53; // rax
  unsigned int v54; // [rsp+20h] [rbp-78h]
  int v55; // [rsp+24h] [rbp-74h]
  unsigned int v56; // [rsp+24h] [rbp-74h]
  unsigned int v57; // [rsp+28h] [rbp-70h]
  int v58; // [rsp+2Ch] [rbp-6Ch]
  int v59; // [rsp+30h] [rbp-68h]
  __int64 v60; // [rsp+38h] [rbp-60h]
  int v61; // [rsp+40h] [rbp-58h]
  int v62; // [rsp+44h] [rbp-54h]
  int v63; // [rsp+48h] [rbp-50h]
  int v65; // [rsp+A8h] [rbp+10h]
  int v66; // [rsp+B0h] [rbp+18h]
  unsigned int v67; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = (char *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 32);
  v61 = *((_DWORD *)a1 + 11);
  v62 = v6;
  v58 = *((_DWORD *)a1 + 23);
  v63 = *((_DWORD *)a1 + 14);
  v57 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v8 = *(_QWORD *)a1;
  v9 = *((_DWORD *)a1 + 22);
  v66 = v9;
  v60 = *(_QWORD *)(v8 + 16);
  v10 = *((_DWORD *)v1 + 25);
  v65 = v10;
  if ( v5 < v58 )
    return 1LL;
  v12 = (unsigned int)v9 >> 1;
  v13 = (unsigned int)(v6 - 1) >> 1;
  v67 = (unsigned int)v9 >> 1;
  v54 = v13;
  v14 = (unsigned int)(v7 >> 1);
  v15 = 0;
  v59 = v6 & 1;
  if ( v5 < v10 )
  {
    if ( (unsigned int)v14 < v12 )
    {
      v16 = v12;
    }
    else
    {
      v16 = v13;
      if ( (unsigned int)v14 <= v13 )
        v16 = (unsigned int)v14;
    }
    v15 = *(_BYTE *)(v16 + v3);
    v10 = *((_DWORD *)v1 + 25);
  }
  v17 = v4 + 2;
  if ( v17 <= v57 )
  {
    while ( 1 )
    {
      v18 = (unsigned __int8)*v2;
      v19 = (unsigned __int8 *)(v2 + 1);
      v20 = *v19;
      v2 = (char *)(v19 + 1);
      if ( v18 )
      {
        if ( v5 < v10 && v7 < v6 )
        {
          if ( (int)(v18 + v7) > v9 )
          {
            if ( v7 < v9 )
            {
              LODWORD(v14) = v12;
              v43 = v9 - v7;
              v7 = v9;
              v18 -= v43;
            }
            if ( (int)(v18 + v7) <= v6 )
            {
              v44 = 0;
            }
            else
            {
              v44 = v7 + v18 - v6;
              v18 = v6 - v7;
            }
            v45 = v20 & 0xF;
            v46 = *(_BYTE *)(v60 + 4 * (v20 >> 4));
            v47 = *(_BYTE *)(v60 + 4 * v45);
            v48 = v47;
            if ( (v7 & 1) != 0 )
            {
              v49 = (unsigned int)v14;
              LODWORD(v14) = v14 + 1;
              ++v7;
              *(_BYTE *)(v49 + v3) = v15 ^ (v15 ^ v46) & 0xF;
              --v18;
              v48 = v46;
              v46 = v47;
            }
            v50 = 16 * v46;
            v51 = v18 + v7;
            v15 = v50 | v48 & 0xF;
            for ( i = v18 >> 1; i; --i )
            {
              v53 = (unsigned int)v14;
              LODWORD(v14) = v14 + 1;
              *(_BYTE *)(v53 + v3) = v15;
            }
            if ( (v51 & 1) != 0 )
              v15 = v50 | v15 & 0xF;
            v7 = v44 + v51;
            goto LABEL_48;
          }
          v10 = v65;
        }
        v7 += v18;
        goto LABEL_70;
      }
      if ( (_DWORD)v20 )
      {
        if ( (_DWORD)v20 == 1 )
        {
          if ( v5 < v65 && v5 >= v58 )
          {
            if ( v7 >= v9 && v7 < v6 && (v7 & 1) != 0 )
            {
              *(_BYTE *)(v14 + v3) = v15 ^ (v15 ^ *(_BYTE *)(v14 + v3)) & 0xF;
            }
            else if ( v59 && v7 >= v6 )
            {
              *(_BYTE *)(v54 + v3) = v15 ^ (v15 ^ *(_BYTE *)(v54 + v3)) & 0xF;
            }
          }
          return 0LL;
        }
        if ( (_DWORD)v20 != 2 )
        {
          v21 = ((unsigned int)(v20 + 1) >> 1) + v17;
          if ( v21 > v57 )
            return 0LL;
          v22 = (((_DWORD)v20 + 1) & 2) != 0;
          if ( v5 >= v65 || v7 >= v6 || (int)v20 + v7 <= v66 )
          {
            v7 += v20;
            v35 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v20 + 1) >> 1];
          }
          else
          {
            if ( v7 < v66 )
            {
              v23 = v66 - v7;
              v14 = v67;
              LODWORD(v20) = v20 - (v66 - v7);
              v7 = v66;
              v2 += (unsigned __int64)v23 >> 1;
              if ( (v23 & 1) != 0 )
              {
                v24 = *v2++;
                v25 = *(_BYTE *)(v60 + 4LL * (v24 & 0xF));
                if ( (v66 & 1) != 0 )
                {
                  v15 ^= (v15 ^ v25) & 0xF;
                  *(_BYTE *)(v67 + v3) = v15;
                  v14 = v67 + 1;
                }
                else
                {
                  v15 = v15 & 0xF | (16 * v25);
                }
                v9 = v66;
                v7 = v66 + 1;
                LODWORD(v20) = v20 - 1;
                if ( !(_DWORD)v20 )
                {
                  v17 = v22 + v21;
                  v2 += v22;
                  v10 = v65;
LABEL_69:
                  v12 = v67;
                  goto LABEL_70;
                }
              }
            }
            if ( (int)v20 + v7 <= v6 )
            {
              v26 = 0;
            }
            else
            {
              v26 = v7 + v20 - v6;
              LODWORD(v20) = v62 - v7;
            }
            if ( (_DWORD)v20 )
            {
              v27 = v20 + v7;
              v55 = v20 + v7;
              if ( (v7 & 1) != 0 )
              {
                v28 = (unsigned __int8)*v2++;
                v29 = *(_BYTE *)(v60 + 4LL * (v28 & 0xF));
                v15 ^= (v15 ^ *(_BYTE *)(v60 + 4 * ((unsigned __int64)v28 >> 4))) & 0xF;
                *(_BYTE *)(v14 + v3) = v15;
                v30 = (unsigned int)(v14 + 1);
                v31 = (unsigned int)(v20 - 1) >> 1;
                if ( v31 )
                {
                  do
                  {
                    v32 = (unsigned __int8)*v2++;
                    v33 = 16 * v29;
                    v29 = *(_BYTE *)(v60 + 4LL * (v32 & 0xF));
                    v15 = v33 | *(_BYTE *)(v60 + 4 * ((unsigned __int64)v32 >> 4)) & 0xF;
                    *(_BYTE *)(v30 + v3) = v15;
                    v30 = (unsigned int)(v30 + 1);
                    --v31;
                  }
                  while ( v31 );
                  v1 = a1;
                  v27 = v55;
                }
                if ( (v27 & 1) != 0 )
                {
                  v15 = v15 & 0xF | (16 * v29);
                  goto LABEL_36;
                }
                v34 = v26;
LABEL_37:
                v35 = (unsigned __int64)&v2[v34 >> 1];
              }
              else
              {
                for ( j = (unsigned int)v20 >> 1; j; --j )
                {
                  v37 = (unsigned __int8)*v2++;
                  v15 = *(_BYTE *)(v60 + 4 * (v37 & 0xF)) & 0xF | (16 * *(_BYTE *)(v60 + 4 * (v37 >> 4)));
                  *(_BYTE *)(v14 + v3) = v15;
                  v14 = (unsigned int)(v14 + 1);
                }
                if ( (v27 & 1) == 0 )
                {
LABEL_36:
                  v34 = v26 + 1;
                  goto LABEL_37;
                }
                v15 = v15 & 0xF | (16 * *(_BYTE *)(v60 + 4 * ((unsigned __int64)(unsigned __int8)*v2 >> 4)));
                v35 = (unsigned __int64)&v2[((unsigned __int64)v26 >> 1) + 1];
              }
              v7 = v27;
            }
            else
            {
              v35 = (unsigned __int64)&v2[(unsigned __int64)(v26 + 1) >> 1];
            }
            v7 += v26;
          }
          v17 = v22 + v21;
          v2 = (char *)(v22 + v35);
LABEL_48:
          v10 = v65;
LABEL_68:
          v9 = v66;
          goto LABEL_69;
        }
        if ( v5 < v65 )
        {
          if ( v7 >= v9 && v7 < v6 && (v7 & 1) != 0 )
          {
            v15 ^= (v15 ^ *(_BYTE *)(v14 + v3)) & 0xF;
            *(_BYTE *)(v14 + v3) = v15;
          }
          else if ( v59 && v7 >= v6 )
          {
            v15 ^= (v15 ^ *(_BYTE *)(v54 + v3)) & 0xF;
            *(_BYTE *)(v54 + v3) = v15;
          }
        }
        v17 += 2;
        v56 = v17;
        if ( v17 > v57 )
          return 0LL;
        v38 = (unsigned __int8)*v2;
        v39 = (unsigned __int8 *)(v2 + 1);
        v7 += v38;
        v40 = *v39;
        v2 = (char *)(v39 + 1);
        v5 -= v40;
        v3 += v40 * v61;
        if ( v5 < v58 )
        {
          *((_DWORD *)v1 + 34) = v7;
LABEL_103:
          *((_QWORD *)v1 + 14) = v3;
          result = 1LL;
          *((_QWORD *)v1 + 13) = v2;
          *((_DWORD *)v1 + 31) = v17;
          *((_DWORD *)v1 + 33) = v5;
          return result;
        }
        v41 = v7 >> 1;
        if ( (unsigned int)Feature_2923253048__private_IsEnabled() )
        {
          v10 = v65;
          if ( v5 >= v65 )
          {
            v17 = v56;
            goto LABEL_68;
          }
        }
        if ( v41 < v67 )
        {
          v12 = v67;
          v42 = v67;
        }
        else
        {
          v42 = v54;
          if ( v41 <= v54 )
            v42 = v41;
          v12 = v67;
        }
        v17 = v56;
        v9 = v66;
        goto LABEL_84;
      }
      v10 = v65;
      if ( v5 < v65 )
      {
        if ( v7 >= v9 && v7 < v6 && (v7 & 1) != 0 )
        {
          v15 ^= (v15 ^ *(_BYTE *)(v14 + v3)) & 0xF;
          *(_BYTE *)(v14 + v3) = v15;
LABEL_80:
          v10 = v65;
          v9 = v66;
          goto LABEL_81;
        }
        if ( v59 && v7 >= v6 )
        {
          v15 ^= (v15 ^ *(_BYTE *)(v54 + v3)) & 0xF;
          *(_BYTE *)(v54 + v3) = v15;
          goto LABEL_80;
        }
      }
LABEL_81:
      --v5;
      v3 += v61;
      v7 = v63;
      if ( v5 < v58 )
      {
        *((_DWORD *)v1 + 34) = v63;
        goto LABEL_103;
      }
      if ( v5 < v10 )
      {
        v42 = v12;
LABEL_84:
        v15 = *(_BYTE *)(v42 + v3);
        v10 = v65;
      }
LABEL_70:
      v17 += 2;
      v14 = (unsigned int)(v7 >> 1);
      if ( v17 > v57 )
        return 0LL;
      v6 = v62;
    }
  }
  return 0LL;
}
