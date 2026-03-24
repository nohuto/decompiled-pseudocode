/*
 * XREFs of ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02CE6A0
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
  unsigned int v4; // r15d
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
  unsigned int v17; // esi
  unsigned __int8 *v18; // r10
  unsigned __int64 v19; // rdi
  unsigned int v20; // r15d
  BOOL v21; // r13d
  unsigned int v22; // ecx
  char v23; // al
  char v24; // cl
  unsigned int v25; // esi
  char v26; // al
  unsigned int v27; // eax
  char v28; // r12
  __int64 v29; // rbp
  unsigned int v30; // edi
  unsigned int v31; // eax
  char v32; // dl
  unsigned __int64 v33; // rcx
  unsigned int v34; // edi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r10
  unsigned int v37; // edi
  int v38; // eax
  unsigned __int8 *v39; // r10
  int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  int v43; // eax
  __int64 v44; // rcx
  char v45; // di
  char v46; // r13
  __int64 v47; // rax
  char v48; // di
  unsigned int v49; // edx
  unsigned int i; // esi
  __int64 v51; // rax
  int v52; // [rsp+0h] [rbp-78h]
  int v53; // [rsp+0h] [rbp-78h]
  unsigned int v54; // [rsp+4h] [rbp-74h]
  int v55; // [rsp+8h] [rbp-70h]
  int v56; // [rsp+Ch] [rbp-6Ch]
  __int64 v57; // [rsp+10h] [rbp-68h]
  int v58; // [rsp+18h] [rbp-60h]
  int v59; // [rsp+1Ch] [rbp-5Ch]
  int v60; // [rsp+20h] [rbp-58h]
  int v61; // [rsp+24h] [rbp-54h]
  unsigned int v63; // [rsp+88h] [rbp+10h]
  int v64; // [rsp+90h] [rbp+18h]
  unsigned int v65; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = (char *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 25);
  v58 = *((_DWORD *)a1 + 11);
  v61 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 32);
  v60 = v6;
  v63 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *(_QWORD *)a1;
  v10 = *((_DWORD *)a1 + 22);
  v64 = v10;
  v55 = v7;
  v57 = *(_QWORD *)(v9 + 16);
  v59 = *((_DWORD *)v1 + 23);
  if ( v5 < v59 )
    return 1LL;
  v12 = (unsigned int)v10 >> 1;
  v13 = (unsigned int)(v6 - 1) >> 1;
  v54 = (unsigned int)v10 >> 1;
  v65 = v13;
  v14 = (unsigned int)(v8 >> 1);
  v15 = 0;
  v56 = v6 & 1;
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
  v16 = v63;
  while ( 1 )
  {
    v4 += 2;
    if ( v4 > v16 )
      return 0LL;
    v17 = (unsigned __int8)*v2;
    v18 = (unsigned __int8 *)(v2 + 1);
    v19 = *v18;
    v2 = (char *)(v18 + 1);
    if ( !v17 )
      break;
    if ( v5 < v7 && v8 < v6 )
    {
      if ( (int)(v17 + v8) > v10 )
      {
        if ( v8 < v10 )
        {
          LODWORD(v14) = v54;
          v43 = v10 - v8;
          v8 = v10;
          v17 -= v43;
        }
        if ( (int)(v17 + v8) <= v6 )
        {
          v53 = 0;
        }
        else
        {
          v53 = v8 + v17 - v6;
          v17 = v6 - v8;
        }
        v44 = v19 & 0xF;
        v45 = *(_BYTE *)(v57 + 4 * (v19 >> 4));
        v46 = *(_BYTE *)(v57 + 4 * v44);
        if ( (v8 & 1) != 0 )
        {
          v47 = (unsigned int)v14;
          LODWORD(v14) = v14 + 1;
          ++v8;
          *(_BYTE *)(v47 + v3) = v15 ^ (v15 ^ v45) & 0xF;
          --v17;
          LOBYTE(v47) = v46 ^ v45;
          v46 = v45;
          v45 ^= v47;
        }
        v48 = 16 * v45;
        v49 = v17 + v8;
        v15 = v48 | v46 & 0xF;
        for ( i = v17 >> 1; i; --i )
        {
          v51 = (unsigned int)v14;
          LODWORD(v14) = v14 + 1;
          *(_BYTE *)(v51 + v3) = v15;
        }
        if ( (v49 & 1) != 0 )
          v15 = v48 | v48 & 0xF | v46 & 0xF;
        v8 = v53 + v49;
LABEL_49:
        v10 = v64;
LABEL_25:
        v7 = v55;
LABEL_64:
        v16 = v63;
        goto LABEL_65;
      }
      v16 = v63;
    }
    v8 += v17;
LABEL_65:
    v14 = (unsigned int)(v8 >> 1);
  }
  if ( !(_DWORD)v19 )
  {
    if ( v5 < v7 )
    {
      if ( v8 >= v10 && v8 < v6 && (v8 & 1) != 0 )
      {
        v15 ^= (v15 ^ *(_BYTE *)(v14 + v3)) & 0xF;
        *(_BYTE *)(v14 + v3) = v15;
      }
      else
      {
        if ( !v56 || v8 < v6 )
          goto LABEL_78;
        v15 ^= (*(_BYTE *)(v65 + v3) ^ v15) & 0xF;
        *(_BYTE *)(v65 + v3) = v15;
      }
      v10 = v64;
    }
LABEL_78:
    --v5;
    v3 += v58;
    v8 = v61;
    if ( v5 < v59 )
    {
      *((_DWORD *)v1 + 34) = v61;
      goto LABEL_99;
    }
    if ( v5 < v7 )
      v15 = *(_BYTE *)(v54 + v3);
    goto LABEL_64;
  }
  if ( (_DWORD)v19 != 1 )
  {
    if ( (_DWORD)v19 != 2 )
    {
      v20 = ((unsigned int)(v19 + 1) >> 1) + v4;
      if ( v20 > v63 )
        return 0LL;
      v21 = (((_DWORD)v19 + 1) & 2) != 0;
      if ( v5 >= v55 || v8 >= v6 || (int)v19 + v8 <= v64 )
      {
        v8 += v19;
        v36 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v19 + 1) >> 1];
        goto LABEL_48;
      }
      if ( v8 < v64 )
      {
        v22 = v64 - v8;
        v14 = v54;
        LODWORD(v19) = v19 - (v64 - v8);
        v8 = v64;
        v2 += (unsigned __int64)v22 >> 1;
        if ( (v22 & 1) != 0 )
        {
          v23 = *v2++;
          v24 = *(_BYTE *)(v57 + 4LL * (v23 & 0xF));
          if ( (v64 & 1) != 0 )
          {
            v15 ^= (v15 ^ v24) & 0xF;
            *(_BYTE *)(v54 + v3) = v15;
            v14 = v54 + 1;
          }
          else
          {
            v15 = v15 & 0xF | (16 * v24);
          }
          v10 = v64;
          v8 = v64 + 1;
          LODWORD(v19) = v19 - 1;
          if ( !(_DWORD)v19 )
          {
            v4 = v21 + v20;
            v2 += v21;
            goto LABEL_25;
          }
        }
      }
      if ( (int)v19 + v8 <= v6 )
      {
        v25 = 0;
      }
      else
      {
        v25 = v8 + v19 - v6;
        LODWORD(v19) = v6 - v8;
      }
      if ( (_DWORD)v19 )
      {
        v26 = v19 + v8;
        v52 = v19 + v8;
        if ( (v8 & 1) != 0 )
        {
          v27 = (unsigned __int8)*v2++;
          v28 = *(_BYTE *)(v57 + 4LL * (v27 & 0xF));
          v15 ^= (v15 ^ *(_BYTE *)(v57 + 4 * ((unsigned __int64)v27 >> 4))) & 0xF;
          *(_BYTE *)(v14 + v3) = v15;
          v29 = (unsigned int)(v14 + 1);
          v30 = (unsigned int)(v19 - 1) >> 1;
          if ( v30 )
          {
            do
            {
              v31 = (unsigned __int8)*v2++;
              v32 = 16 * v28;
              v28 = *(_BYTE *)(v57 + 4LL * (v31 & 0xF));
              v15 = v32 | *(_BYTE *)(v57 + 4 * ((unsigned __int64)v31 >> 4)) & 0xF;
              *(_BYTE *)(v29 + v3) = v15;
              v29 = (unsigned int)(v29 + 1);
              --v30;
            }
            while ( v30 );
            v1 = a1;
          }
          v8 = v52;
          if ( (v52 & 1) != 0 )
          {
            v33 = v25 + 1;
            v15 = v15 & 0xF | (16 * v28);
          }
          else
          {
            v33 = v25;
          }
          v6 = v60;
          goto LABEL_45;
        }
        v34 = (unsigned int)v19 >> 1;
        if ( v34 )
        {
          do
          {
            v35 = (unsigned __int8)*v2++;
            v15 = *(_BYTE *)(v57 + 4 * (v35 & 0xF)) & 0xF | (16 * *(_BYTE *)(v57 + 4 * (v35 >> 4)));
            *(_BYTE *)(v14 + v3) = v15;
            v14 = (unsigned int)(v14 + 1);
            --v34;
          }
          while ( v34 );
          v26 = v52;
        }
        if ( (v26 & 1) != 0 )
        {
          v8 = v52;
          v15 = v15 & 0xF | (16 * *(_BYTE *)(v57 + 4 * ((unsigned __int64)(unsigned __int8)*v2 >> 4)));
          v36 = (unsigned __int64)&v2[((unsigned __int64)v25 >> 1) + 1];
LABEL_46:
          v8 += v25;
LABEL_48:
          v4 = v21 + v20;
          v2 = (char *)(v21 + v36);
          goto LABEL_49;
        }
        v8 = v52;
      }
      v33 = v25 + 1;
LABEL_45:
      v36 = (unsigned __int64)&v2[v33 >> 1];
      goto LABEL_46;
    }
    if ( v5 < v7 )
    {
      if ( v8 >= v10 && v8 < v6 && (v8 & 1) != 0 )
      {
        v15 ^= (v15 ^ *(_BYTE *)(v14 + v3)) & 0xF;
        *(_BYTE *)(v14 + v3) = v15;
      }
      else if ( v56 && v8 >= v6 )
      {
        v37 = v65;
        v15 ^= (*(_BYTE *)(v65 + v3) ^ v15) & 0xF;
        *(_BYTE *)(v65 + v3) = v15;
        goto LABEL_56;
      }
    }
    v37 = v65;
LABEL_56:
    v4 += 2;
    if ( v4 > v63 )
      return 0LL;
    v38 = (unsigned __int8)*v2;
    v39 = (unsigned __int8 *)(v2 + 1);
    v8 += v38;
    v40 = *v39;
    v2 = (char *)(v39 + 1);
    v5 -= v40;
    v3 += v40 * v58;
    if ( v5 < v59 )
    {
      *((_DWORD *)v1 + 34) = v8;
LABEL_99:
      *((_QWORD *)v1 + 14) = v3;
      result = 1LL;
      *((_QWORD *)v1 + 13) = v2;
      *((_DWORD *)v1 + 31) = v4;
      *((_DWORD *)v1 + 33) = v5;
      return result;
    }
    v41 = v8 >> 1;
    if ( v5 < v7 )
    {
      v42 = v54;
      if ( v41 >= v54 )
      {
        v42 = v37;
        if ( v41 <= v37 )
          v42 = v8 >> 1;
      }
      v15 = *(_BYTE *)(v42 + v3);
    }
    v10 = v64;
    goto LABEL_64;
  }
  if ( v5 < v7 )
  {
    if ( v8 >= v10 && v8 < v6 && (v8 & 1) != 0 )
    {
      *(_BYTE *)(v14 + v3) = v15 ^ (v15 ^ *(_BYTE *)(v14 + v3)) & 0xF;
    }
    else if ( v56 && v8 >= v6 )
    {
      *(_BYTE *)(v65 + v3) = v15 ^ (*(_BYTE *)(v65 + v3) ^ v15) & 0xF;
    }
  }
  return 0LL;
}
