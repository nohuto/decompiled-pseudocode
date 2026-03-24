/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02CDB00
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE4D1(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // r15
  __int64 v3; // rsi
  int v4; // r12d
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // r13d
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 result; // rax
  char v15; // r8
  char v16; // bp
  struct BLTINFO *v17; // rdi
  int v18; // eax
  int *v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // r12d
  bool i; // cc
  unsigned int v23; // r14d
  unsigned __int8 *v24; // r15
  __int64 v25; // r11
  unsigned __int64 v26; // r9
  unsigned int v27; // r12d
  BOOL v28; // ecx
  char v29; // dl
  unsigned __int8 v30; // r14
  char v31; // al
  char v32; // cl
  __int64 v33; // rdx
  unsigned int v34; // r12d
  __int64 v35; // rdi
  int v36; // ebx
  unsigned int v37; // r10d
  unsigned __int8 v38; // cl
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  char v41; // cl
  unsigned int v42; // eax
  unsigned __int8 *v43; // r15
  int v44; // r9d
  int v45; // edx
  unsigned int v46; // r11d
  int v47; // eax
  unsigned __int8 *v48; // r15
  int v49; // ecx
  int v50; // r9d
  unsigned __int8 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // r9d
  unsigned int v55; // ebx
  __int64 v56; // r14
  __int64 v57; // r14
  char v58; // [rsp+20h] [rbp-98h]
  unsigned __int8 v59; // [rsp+21h] [rbp-97h]
  int v60; // [rsp+24h] [rbp-94h]
  char v61; // [rsp+28h] [rbp-90h]
  unsigned int v62; // [rsp+2Ch] [rbp-8Ch]
  int v63; // [rsp+30h] [rbp-88h]
  int v64; // [rsp+34h] [rbp-84h]
  unsigned int v65; // [rsp+38h] [rbp-80h]
  unsigned int v66; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v67; // [rsp+40h] [rbp-78h]
  int v68; // [rsp+44h] [rbp-74h]
  int v69; // [rsp+48h] [rbp-70h]
  int v70; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v71; // [rsp+50h] [rbp-68h]
  __int64 v72; // [rsp+58h] [rbp-60h]
  int v73; // [rsp+60h] [rbp-58h]
  char v75; // [rsp+C8h] [rbp+10h]
  char v76; // [rsp+D8h] [rbp+20h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 25);
  v7 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 24);
  v9 = *((_DWORD *)a1 + 32);
  v69 = *((_DWORD *)a1 + 11);
  v10 = *((_QWORD *)a1 + 9);
  v63 = v6;
  v73 = v7;
  v64 = v5;
  v11 = *(_DWORD *)(v10 + 64);
  v12 = *(_QWORD *)a1;
  v13 = *((_DWORD *)a1 + 22);
  v67 = v11;
  v60 = v13;
  v72 = *(_QWORD *)(v12 + 16);
  v70 = *((_DWORD *)a1 + 23);
  if ( v5 < v70 )
    return 1LL;
  v15 = 0;
  v71 = v13 >> 3;
  v16 = byte_1C02F00B8[(v13 & 7) + 16];
  v62 = (unsigned int)(v8 - 1) >> 3;
  v17 = a1;
  v75 = ~byte_1C02F00B8[(v8 & 7) + 16];
  if ( v5 >= v6 )
    goto LABEL_10;
  if ( v9 >= (int)v13 )
  {
    if ( v9 < v8 )
    {
      v15 = byte_1C02F00B8[(v9 & 7) + 16] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v9 >= v8 )
  {
LABEL_8:
    v15 = *(_BYTE *)(((unsigned int)(v8 - 1) >> 3) + v3);
    goto LABEL_10;
  }
  v15 = v16 & *(_BYTE *)((v13 >> 3) + v3);
LABEL_10:
  v18 = 1;
  v19 = (int *)(v72 + 4);
  v20 = 15LL;
  do
  {
    *v19 = v18;
    v18 ^= 1u;
    ++v19;
    --v20;
  }
  while ( v20 );
  v21 = v4 + 2;
  for ( i = v21 <= v11; ; i = v21 <= v67 )
  {
    v65 = v21;
    if ( !i )
      return 0LL;
    v23 = *v2;
    v24 = v2 + 1;
    v25 = (unsigned int)(v9 >> 3);
    v26 = *v24;
    v2 = v24 + 1;
    if ( v23 )
    {
      if ( v5 >= v63 || v9 >= v8 || (int)(v23 + v9) <= v60 )
      {
        v9 += v23;
      }
      else
      {
        if ( v9 < v60 )
        {
          v23 += v9 - v60;
          v9 = v60;
          v25 = (unsigned int)(v60 >> 3);
        }
        if ( (int)(v23 + v9) <= v8 )
        {
          v66 = 0;
        }
        else
        {
          v66 = v9 + v23 - v8;
          v23 = v8 - v9;
        }
        v52 = *(unsigned __int8 *)(v72 + 4 * (v26 >> 4));
        v59 = *(_BYTE *)(v72 + 4 * (v26 & 0xF));
        v58 = v52;
        v51 = byte_1C02F00B8[2 * v52 + 28 + v59];
        LOBYTE(v52) = v9 & 7;
        v61 = v51;
        v76 = v9 & 7;
        v53 = (unsigned __int8)(7 - (v9 & 7));
        v68 = (unsigned __int8)(7 - (v9 & 7));
        if ( v23 >= (int)v53 + 1 )
          v54 = ((unsigned __int8)v23 - (int)v53 - 1) >> 3;
        else
          v54 = 0;
        v55 = v23 + v9;
        v56 = v23 - 8 * v54;
        if ( (int)v53 < (int)v56 )
        {
          *(_BYTE *)(v25 + v3) = v15 | ((unsigned __int8)(v51 & byte_1C02F00B8[v53 + 17]) >> v76);
          LODWORD(v52) = v68;
          if ( (v68 & 1) == 0 )
          {
            v51 *= 2;
            if ( v61 < 0 )
              v51 |= 1u;
          }
          LODWORD(v25) = v25 + 1;
          v15 = 0;
          v57 = -1 - (unsigned __int8)v68 + (unsigned int)v56;
        }
        else
        {
          v51 &= byte_1C02F00B8[v56 + 16];
          v15 |= v51 >> v52;
          v57 = 0LL;
        }
        if ( v54 )
        {
          LOBYTE(v52) = v51;
          memset((void *)(v3 + (unsigned int)v25), v52, v54);
          v5 = v64;
          v15 = 0;
        }
        if ( (unsigned int)v57 < 9 )
          v15 |= v51 & byte_1C02F00B8[v57 + 16];
        v9 = v66 + v55;
        v21 = v65;
      }
      goto LABEL_98;
    }
    if ( !(_DWORD)v26 )
    {
      v50 = v63;
      if ( v5 < v63 && (v9 & 7) != 0 )
      {
        if ( v9 < v60 )
        {
          if ( v9 < v8 )
            goto LABEL_72;
        }
        else if ( v9 < v8 )
        {
          *(_BYTE *)(v25 + v3) = v15 | *(_BYTE *)(v25 + v3) & ~byte_1C02F00B8[(v9 & 7) + 16];
          goto LABEL_72;
        }
        *(_BYTE *)(v62 + v3) = v15 | v75 & *(_BYTE *)(v62 + v3);
      }
LABEL_72:
      --v5;
      v3 += v69;
      v9 = v73;
      v64 = v5;
      if ( v5 < v70 )
      {
        *((_DWORD *)v17 + 34) = v73;
        goto LABEL_100;
      }
      if ( v5 < v50 )
        goto LABEL_74;
      goto LABEL_98;
    }
    if ( (_DWORD)v26 == 1 )
      break;
    if ( (_DWORD)v26 != 2 )
    {
      v27 = ((unsigned int)(v26 + 1) >> 1) + v21;
      v65 = v27;
      if ( v27 > v67 )
        return 0LL;
      v28 = (((_DWORD)v26 + 1) & 2) != 0;
      v68 = v28;
      if ( v5 >= v63 || v9 >= v8 || (int)v26 + v9 <= v60 )
      {
        v9 += v26;
        v43 = &v2[(unsigned __int64)(unsigned int)(v26 + 1) >> 1];
      }
      else
      {
        if ( v9 >= v60 )
        {
          v30 = byte_1C02F00B8[(unsigned __int8)(7 - (v9 & 7))];
        }
        else
        {
          v29 = v60 - v9;
          LODWORD(v26) = v26 - (v60 - v9);
          v2 += (unsigned __int64)(unsigned int)(v60 - v9) >> 1;
          v25 = (unsigned int)(v60 >> 3);
          v9 = v60;
          v30 = byte_1C02F00B8[(unsigned __int8)(7 - (v60 & 7))];
          if ( (v29 & 1) != 0 )
          {
            v31 = v15 | v30;
            v30 >>= 1;
            v32 = v31;
            v33 = *v2++ & 0xF;
            v9 = v60 + 1;
            LODWORD(v26) = v26 - 1;
            if ( !*(_BYTE *)(v72 + 4 * v33) )
              v32 = v15;
            v15 = v32;
          }
        }
        if ( (int)v26 + v9 <= v8 )
        {
          v34 = 0;
        }
        else
        {
          v34 = v9 + v26 - v8;
          LODWORD(v26) = v8 - v9;
        }
        v35 = v72;
        v36 = v26 + v9;
        v66 = v26 & 1;
        v37 = 0;
        do
        {
          if ( v30 )
          {
            do
            {
              v38 = v30;
              if ( !(_DWORD)v26 )
                break;
              if ( !v37 )
              {
                v39 = *v2++;
                v58 = *(_BYTE *)(v35 + 4 * (v39 >> 4));
                v38 = v30;
                v59 = *(_BYTE *)(v35 + 4 * (v39 & 0xF));
              }
              v40 = v37;
              LODWORD(v26) = v26 - 1;
              v41 = v15 | v38;
              v37 ^= 1u;
              if ( !*(&v58 + v40) )
                v41 = v15;
              v30 >>= 1;
              v15 = v41;
            }
            while ( v30 );
            if ( v30 )
              continue;
          }
          *(_BYTE *)(v25 + v3) = v15;
          v30 = 0x80;
          v25 = (unsigned int)(v25 + 1);
          v15 = 0;
        }
        while ( (_DWORD)v26 );
        v42 = v34;
        v17 = a1;
        v5 = v64;
        if ( !v66 )
          v42 = v34 + 1;
        v28 = v68;
        v43 = &v2[v42 >> 1];
        v9 = v34 + v36;
        v27 = v65;
      }
      v21 = v28 + v27;
      v2 = &v43[v28];
      goto LABEL_98;
    }
    v44 = v63;
    v45 = v60;
    if ( v5 >= v63 )
    {
      v46 = v62;
    }
    else
    {
      if ( (v9 & 7) != 0 )
      {
        if ( v9 < v60 )
        {
          if ( v9 >= v8 )
          {
LABEL_53:
            v46 = v62;
            *(_BYTE *)(v62 + v3) = v15 | v75 & *(_BYTE *)(v62 + v3);
            goto LABEL_57;
          }
        }
        else
        {
          if ( v9 >= v8 )
            goto LABEL_53;
          *(_BYTE *)(v25 + v3) = v15 | *(_BYTE *)(v25 + v3) & ~byte_1C02F00B8[(v9 & 7) + 16];
        }
      }
      v46 = v62;
    }
LABEL_57:
    v21 += 2;
    if ( v21 > v67 )
      return 0LL;
    v47 = *v2;
    v48 = v2 + 1;
    v9 += v47;
    v49 = *v48;
    v2 = v48 + 1;
    v5 -= v49;
    v64 = v5;
    v3 += v49 * v69;
    if ( v5 < v70 )
    {
      *((_DWORD *)v17 + 34) = v9;
LABEL_100:
      *((_QWORD *)v17 + 14) = v3;
      result = 1LL;
      *((_QWORD *)v17 + 13) = v2;
      *((_DWORD *)v17 + 31) = v21;
      *((_DWORD *)v17 + 33) = v5;
      return result;
    }
    if ( v5 < v44 )
    {
      if ( v9 >= v45 )
      {
        if ( v9 < v8 )
        {
          v15 = byte_1C02F00B8[(v9 & 7) + 16] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
          goto LABEL_98;
        }
LABEL_64:
        v15 = *(_BYTE *)(v46 + v3);
        goto LABEL_98;
      }
      if ( v9 >= v8 )
        goto LABEL_64;
LABEL_74:
      v15 = v16 & *(_BYTE *)(v71 + v3);
    }
LABEL_98:
    v21 += 2;
  }
  if ( v5 < v63 && (v9 & 7) != 0 )
  {
    if ( v9 < v60 )
    {
      if ( v9 >= v8 )
        goto LABEL_108;
    }
    else
    {
      if ( v9 < v8 )
      {
        *(_BYTE *)(v25 + v3) = v15 | *(_BYTE *)(v25 + v3) & ~byte_1C02F00B8[(v9 & 7) + 16];
        return 0LL;
      }
LABEL_108:
      *(_BYTE *)(v62 + v3) = v15 | v75 & *(_BYTE *)(v62 + v3);
    }
  }
  return 0LL;
}
