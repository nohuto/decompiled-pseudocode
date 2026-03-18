/*
 * XREFs of ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02F0550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r9
  char *v2; // r10
  __int64 v3; // rbx
  int v4; // r15d
  int v5; // r14d
  int v6; // r12d
  int v7; // r13d
  int v8; // edx
  __int64 v9; // rax
  int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rbp
  char v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // r15d
  unsigned int v18; // edi
  unsigned __int8 *v19; // r10
  unsigned __int64 v20; // rsi
  unsigned int v21; // r15d
  BOOL v22; // r13d
  unsigned int v23; // ecx
  char v24; // al
  char v25; // cl
  unsigned int v26; // edi
  int v27; // r12d
  unsigned int v28; // eax
  char v29; // r12
  __int64 v30; // rbp
  unsigned int v31; // esi
  unsigned int v32; // eax
  char v33; // dl
  unsigned __int64 v34; // rcx
  unsigned int j; // esi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r10
  unsigned int v38; // edi
  int v39; // eax
  unsigned __int8 *v40; // r10
  int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  int v44; // eax
  int v45; // r13d
  __int64 v46; // rcx
  char v47; // si
  char v48; // r12
  char v49; // al
  __int64 v50; // rax
  char v51; // si
  unsigned int v52; // edx
  unsigned int i; // edi
  __int64 v54; // rax
  unsigned int v55; // [rsp+0h] [rbp-78h]
  int v56; // [rsp+4h] [rbp-74h]
  int v57; // [rsp+8h] [rbp-70h]
  __int64 v58; // [rsp+10h] [rbp-68h]
  int v59; // [rsp+18h] [rbp-60h]
  int v60; // [rsp+1Ch] [rbp-5Ch]
  int v61; // [rsp+20h] [rbp-58h]
  int v62; // [rsp+24h] [rbp-54h]
  int v63; // [rsp+28h] [rbp-50h]
  unsigned int v65; // [rsp+88h] [rbp+10h]
  int v66; // [rsp+90h] [rbp+18h]
  unsigned int v67; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = (char *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 25);
  v60 = *((_DWORD *)a1 + 11);
  v62 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 32);
  v63 = v6;
  v65 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *(_QWORD *)a1;
  v10 = *((_DWORD *)a1 + 22);
  v66 = v10;
  v56 = v7;
  v58 = *(_QWORD *)(v9 + 16);
  v61 = *((_DWORD *)v1 + 23);
  if ( v5 < v61 )
    return 1LL;
  v12 = (unsigned int)v10 >> 1;
  v13 = (unsigned int)(v6 - 1) >> 1;
  v55 = (unsigned int)v10 >> 1;
  v67 = v13;
  v14 = (unsigned int)(v8 >> 1);
  v15 = 0;
  v57 = v6 & 1;
  if ( v5 < v7 )
  {
    if ( (unsigned int)v14 >= (unsigned int)v12 )
    {
      v12 = v13;
      if ( (unsigned int)v14 <= v13 )
        v12 = (unsigned int)v14;
    }
    v15 = *(_BYTE *)(v12 + v3);
  }
  v16 = v65;
  v17 = v4 + 2;
  if ( v17 <= v65 )
  {
    while ( 1 )
    {
      v18 = (unsigned __int8)*v2;
      v19 = (unsigned __int8 *)(v2 + 1);
      v20 = *v19;
      v2 = (char *)(v19 + 1);
      if ( !v18 )
        break;
      if ( v5 < v7 && v8 < v6 )
      {
        if ( (int)(v18 + v8) > v10 )
        {
          if ( v8 < v10 )
          {
            LODWORD(v14) = v55;
            v44 = v10 - v8;
            v8 = v10;
            v18 -= v44;
          }
          if ( (int)(v18 + v8) <= v6 )
          {
            v45 = 0;
          }
          else
          {
            v45 = v8 + v18 - v6;
            v18 = v6 - v8;
          }
          v46 = v20 & 0xF;
          v47 = *(_BYTE *)(v58 + 4 * (v20 >> 4));
          v48 = *(_BYTE *)(v58 + 4 * v46);
          v49 = v48;
          if ( (v8 & 1) != 0 )
          {
            v50 = (unsigned int)v14;
            LODWORD(v14) = v14 + 1;
            ++v8;
            *(_BYTE *)(v50 + v3) = v15 ^ (v15 ^ v47) & 0xF;
            --v18;
            v49 = v47;
            v47 = v48;
          }
          v51 = 16 * v47;
          v52 = v18 + v8;
          v15 = v51 | v49 & 0xF;
          for ( i = v18 >> 1; i; --i )
          {
            v54 = (unsigned int)v14;
            LODWORD(v14) = v14 + 1;
            *(_BYTE *)(v54 + v3) = v15;
          }
          if ( (v52 & 1) != 0 )
            v15 = v51 | v15 & 0xF;
          v8 = v45 + v52;
LABEL_48:
          v10 = v66;
LABEL_24:
          v7 = v56;
LABEL_63:
          v16 = v65;
          goto LABEL_64;
        }
        v16 = v65;
      }
      v8 += v18;
LABEL_64:
      v17 += 2;
      v14 = (unsigned int)(v8 >> 1);
      if ( v17 > v16 )
        return 0LL;
      v6 = v63;
    }
    if ( (_DWORD)v20 )
    {
      if ( (_DWORD)v20 == 1 )
      {
        if ( v5 < v7 )
        {
          if ( v8 >= v10 && v8 < v6 && (v8 & 1) != 0 )
          {
            *(_BYTE *)(v14 + v3) = v15 ^ (*(_BYTE *)(v14 + v3) ^ v15) & 0xF;
          }
          else if ( v57 && v8 >= v6 )
          {
            *(_BYTE *)(v67 + v3) = v15 ^ (*(_BYTE *)(v67 + v3) ^ v15) & 0xF;
          }
        }
        return 0LL;
      }
      if ( (_DWORD)v20 != 2 )
      {
        v21 = ((unsigned int)(v20 + 1) >> 1) + v17;
        if ( v21 > v65 )
          return 0LL;
        v22 = (((_DWORD)v20 + 1) & 2) != 0;
        if ( v5 >= v56 || v8 >= v6 || (int)v20 + v8 <= v66 )
        {
          v8 += v20;
          v37 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v20 + 1) >> 1];
          goto LABEL_47;
        }
        if ( v8 < v66 )
        {
          v23 = v66 - v8;
          v14 = v55;
          LODWORD(v20) = v20 - (v66 - v8);
          v8 = v66;
          v2 += (unsigned __int64)v23 >> 1;
          if ( (v23 & 1) != 0 )
          {
            v24 = *v2++;
            v25 = *(_BYTE *)(v58 + 4LL * (v24 & 0xF));
            if ( (v66 & 1) != 0 )
            {
              v15 ^= (v15 ^ v25) & 0xF;
              *(_BYTE *)(v55 + v3) = v15;
              v14 = v55 + 1;
            }
            else
            {
              v15 = v15 & 0xF | (16 * v25);
            }
            v10 = v66;
            v8 = v66 + 1;
            LODWORD(v20) = v20 - 1;
            if ( !(_DWORD)v20 )
            {
              v17 = v22 + v21;
              v2 += v22;
              goto LABEL_24;
            }
          }
        }
        if ( (int)v20 + v8 <= v6 )
        {
          v26 = 0;
        }
        else
        {
          v26 = v8 + v20 - v6;
          LODWORD(v20) = v6 - v8;
        }
        if ( !(_DWORD)v20 )
        {
          v37 = (unsigned __int64)&v2[(unsigned __int64)(v26 + 1) >> 1];
          goto LABEL_45;
        }
        v27 = v20 + v8;
        v59 = v20 + v8;
        if ( (v8 & 1) != 0 )
        {
          v28 = (unsigned __int8)*v2++;
          v29 = *(_BYTE *)(v58 + 4LL * (v28 & 0xF));
          v15 ^= (*(_BYTE *)(v58 + 4 * ((unsigned __int64)v28 >> 4)) ^ v15) & 0xF;
          *(_BYTE *)(v14 + v3) = v15;
          v30 = (unsigned int)(v14 + 1);
          v31 = (unsigned int)(v20 - 1) >> 1;
          if ( v31 )
          {
            do
            {
              v32 = (unsigned __int8)*v2++;
              v33 = 16 * v29;
              v29 = *(_BYTE *)(v58 + 4LL * (v32 & 0xF));
              v15 = v33 | *(_BYTE *)(v58 + 4 * ((unsigned __int64)v32 >> 4)) & 0xF;
              *(_BYTE *)(v30 + v3) = v15;
              v30 = (unsigned int)(v30 + 1);
              --v31;
            }
            while ( v31 );
            v1 = a1;
          }
          if ( (v59 & 1) != 0 )
          {
            v34 = v26 + 1;
            v15 = v15 & 0xF | (16 * v29);
          }
          else
          {
            v34 = v26;
          }
          v27 = v59;
        }
        else
        {
          for ( j = (unsigned int)v20 >> 1; j; --j )
          {
            v36 = (unsigned __int8)*v2++;
            v15 = *(_BYTE *)(v58 + 4 * (v36 & 0xF)) & 0xF | (16 * *(_BYTE *)(v58 + 4 * (v36 >> 4)));
            *(_BYTE *)(v14 + v3) = v15;
            v14 = (unsigned int)(v14 + 1);
          }
          if ( (v27 & 1) != 0 )
          {
            v15 = v15 & 0xF | (16 * *(_BYTE *)(v58 + 4 * ((unsigned __int64)(unsigned __int8)*v2 >> 4)));
            v37 = (unsigned __int64)&v2[((unsigned __int64)v26 >> 1) + 1];
LABEL_43:
            v8 = v27;
LABEL_45:
            v8 += v26;
LABEL_47:
            v17 = v22 + v21;
            v2 = (char *)(v22 + v37);
            goto LABEL_48;
          }
          v34 = v26 + 1;
        }
        v37 = (unsigned __int64)&v2[v34 >> 1];
        goto LABEL_43;
      }
      if ( v5 < v7 )
      {
        if ( v8 >= v10 && v8 < v6 && (v8 & 1) != 0 )
        {
          v15 ^= (*(_BYTE *)(v14 + v3) ^ v15) & 0xF;
          *(_BYTE *)(v14 + v3) = v15;
        }
        else if ( v57 && v8 >= v6 )
        {
          v38 = v67;
          v15 ^= (*(_BYTE *)(v67 + v3) ^ v15) & 0xF;
          *(_BYTE *)(v67 + v3) = v15;
          goto LABEL_55;
        }
      }
      v38 = v67;
LABEL_55:
      v17 += 2;
      if ( v17 > v65 )
        return 0LL;
      v39 = (unsigned __int8)*v2;
      v40 = (unsigned __int8 *)(v2 + 1);
      v8 += v39;
      v41 = *v40;
      v2 = (char *)(v40 + 1);
      v5 -= v41;
      v3 += v41 * v60;
      if ( v5 < v61 )
      {
        *((_DWORD *)v1 + 34) = v8;
LABEL_99:
        *((_QWORD *)v1 + 14) = v3;
        result = 1LL;
        *((_QWORD *)v1 + 13) = v2;
        *((_DWORD *)v1 + 31) = v17;
        *((_DWORD *)v1 + 33) = v5;
        return result;
      }
      v42 = v8 >> 1;
      if ( v5 < v7 )
      {
        v43 = v55;
        if ( v42 >= v55 )
        {
          v43 = v38;
          if ( v42 <= v38 )
            v43 = v8 >> 1;
        }
        v15 = *(_BYTE *)(v43 + v3);
      }
      v10 = v66;
      goto LABEL_63;
    }
    if ( v5 < v7 )
    {
      if ( v8 >= v10 && v8 < v6 && (v8 & 1) != 0 )
      {
        v15 ^= (*(_BYTE *)(v14 + v3) ^ v15) & 0xF;
        *(_BYTE *)(v14 + v3) = v15;
      }
      else
      {
        if ( !v57 || v8 < v6 )
          goto LABEL_78;
        v15 ^= (*(_BYTE *)(v67 + v3) ^ v15) & 0xF;
        *(_BYTE *)(v67 + v3) = v15;
      }
      v10 = v66;
    }
LABEL_78:
    --v5;
    v3 += v60;
    v8 = v62;
    if ( v5 < v61 )
    {
      *((_DWORD *)v1 + 34) = v62;
      goto LABEL_99;
    }
    if ( v5 < v7 )
      v15 = *(_BYTE *)(v55 + v3);
    goto LABEL_63;
  }
  return 0LL;
}
