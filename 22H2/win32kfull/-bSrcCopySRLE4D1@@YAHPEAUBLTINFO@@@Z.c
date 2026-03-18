/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02EF600
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1C0141600 (memset_0.c)
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
  int v13; // ecx
  __int64 result; // rax
  char v15; // r8
  char v16; // bp
  unsigned int v17; // r14d
  int v18; // eax
  int *v19; // rdx
  __int64 v20; // r9
  unsigned int v21; // r12d
  bool i; // cc
  unsigned int v23; // r14d
  unsigned __int8 *v24; // r15
  __int64 v25; // r11
  unsigned __int64 v26; // r9
  unsigned int v27; // r12d
  BOOL v28; // edx
  unsigned int v29; // edx
  unsigned __int8 v30; // r12
  unsigned __int8 v31; // dl
  char v32; // cl
  unsigned int v33; // r14d
  int v34; // ebx
  unsigned int v35; // edx
  unsigned __int8 v36; // cl
  unsigned __int64 v37; // rax
  char v38; // cl
  bool v39; // zf
  unsigned int v40; // eax
  unsigned __int8 *v41; // r15
  int v42; // edx
  unsigned int v43; // r9d
  int v44; // eax
  unsigned __int8 *v45; // r15
  int v46; // ecx
  int v47; // edx
  unsigned __int8 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // r9d
  unsigned int v52; // ebx
  __int64 v53; // r14
  __int64 v54; // r14
  char v55; // [rsp+20h] [rbp-88h]
  unsigned __int8 v56; // [rsp+21h] [rbp-87h]
  int v57; // [rsp+24h] [rbp-84h]
  int v58; // [rsp+28h] [rbp-80h]
  unsigned int v59; // [rsp+2Ch] [rbp-7Ch]
  int v60; // [rsp+30h] [rbp-78h]
  unsigned int v61; // [rsp+34h] [rbp-74h]
  unsigned int v62; // [rsp+38h] [rbp-70h]
  unsigned int v63; // [rsp+3Ch] [rbp-6Ch]
  int v64; // [rsp+40h] [rbp-68h]
  int v65; // [rsp+44h] [rbp-64h]
  unsigned int v66; // [rsp+48h] [rbp-60h]
  __int64 v67; // [rsp+50h] [rbp-58h]
  int v68; // [rsp+58h] [rbp-50h]
  int v69; // [rsp+5Ch] [rbp-4Ch]
  char v70; // [rsp+B0h] [rbp+8h]
  char v71; // [rsp+C0h] [rbp+18h]
  int v72; // [rsp+C8h] [rbp+20h]
  char v73; // [rsp+C8h] [rbp+20h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 25);
  v7 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 24);
  v9 = *((_DWORD *)a1 + 32);
  v64 = *((_DWORD *)a1 + 11);
  v10 = *((_QWORD *)a1 + 9);
  v58 = v6;
  v68 = v7;
  v60 = v5;
  v11 = *(_DWORD *)(v10 + 64);
  v12 = *(_QWORD *)a1;
  v13 = *((_DWORD *)a1 + 22);
  v62 = v11;
  v57 = v13;
  v67 = *(_QWORD *)(v12 + 16);
  v65 = *((_DWORD *)a1 + 23);
  if ( v5 < v65 )
    return 1LL;
  v15 = 0;
  v66 = (unsigned int)v13 >> 3;
  v16 = byte_1C0319888[v13 & 7];
  v59 = (unsigned int)(v8 - 1) >> 3;
  v17 = v62;
  v70 = ~byte_1C0319888[v8 & 7];
  if ( v5 >= v6 )
    goto LABEL_10;
  if ( v9 >= v13 )
  {
    if ( v9 < v8 )
    {
      v15 = byte_1C0319888[v9 & 7] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
      v13 = v57;
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
  v15 = v16 & *(_BYTE *)(((unsigned int)v13 >> 3) + v3);
LABEL_10:
  v18 = 1;
  v19 = (int *)(v67 + 4);
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
  for ( i = v21 <= v17; ; i = v21 <= v62 )
  {
    v61 = v21;
    if ( !i )
      return 0LL;
    v23 = *v2;
    v24 = v2 + 1;
    v25 = (unsigned int)(v9 >> 3);
    v26 = *v24;
    v2 = v24 + 1;
    if ( v23 )
    {
      if ( v5 < v58 && v9 < v8 && (int)(v23 + v9) > v13 )
      {
        if ( v9 < v13 )
        {
          v23 += v9 - v13;
          v9 = v13;
          v25 = (unsigned int)(v13 >> 3);
        }
        if ( (int)(v23 + v9) <= v8 )
        {
          v63 = 0;
        }
        else
        {
          v63 = v9 + v23 - v8;
          v23 = v8 - v9;
        }
        v49 = *(unsigned __int8 *)(v67 + 4 * (v26 >> 4));
        v56 = *(_BYTE *)(v67 + 4 * (v26 & 0xF));
        v55 = v49;
        v48 = byte_1C0319888[2 * v49 + 28 + v56];
        LOBYTE(v49) = v9 & 7;
        v73 = v48;
        v71 = v9 & 7;
        v50 = (unsigned __int8)(7 - (v9 & 7));
        v69 = (unsigned __int8)(7 - (v9 & 7));
        if ( v23 >= (int)v50 + 1 )
          v51 = ((unsigned __int8)v23 - (int)v50 - 1) >> 3;
        else
          v51 = 0;
        v52 = v23 + v9;
        v53 = v23 - 8 * v51;
        if ( (int)v50 < (int)v53 )
        {
          *(_BYTE *)(v25 + v3) = v15 | ((unsigned __int8)(v48 & byte_1C0319888[v50 + 1]) >> v71);
          LODWORD(v49) = v69;
          if ( (v69 & 1) == 0 )
          {
            v48 *= 2;
            if ( v73 < 0 )
              v48 |= 1u;
          }
          LODWORD(v25) = v25 + 1;
          v15 = 0;
          v54 = -1 - (unsigned __int8)v69 + (unsigned int)v53;
        }
        else
        {
          v48 &= byte_1C0319888[v53];
          v15 |= v48 >> v49;
          v54 = 0LL;
        }
        if ( v51 )
        {
          LOBYTE(v49) = v48;
          memset_0((void *)(v3 + (unsigned int)v25), v49, v51);
          v5 = v60;
          v15 = 0;
        }
        if ( (unsigned int)v54 < 9 )
          v15 |= v48 & byte_1C0319888[v54];
        v9 = v63 + v52;
        v21 = v61;
        goto LABEL_45;
      }
      v9 += v23;
      goto LABEL_46;
    }
    if ( (_DWORD)v26 )
      break;
    v47 = v58;
    if ( v5 < v58 && (v9 & 7) != 0 )
    {
      if ( v9 < v13 )
      {
        if ( v9 < v8 )
          goto LABEL_72;
      }
      else if ( v9 < v8 )
      {
        *(_BYTE *)(v25 + v3) = v15 | *(_BYTE *)(v25 + v3) & ~byte_1C0319888[v9 & 7];
        goto LABEL_72;
      }
      *(_BYTE *)(v59 + v3) = v15 | v70 & *(_BYTE *)(v59 + v3);
    }
LABEL_72:
    --v5;
    v3 += v64;
    v9 = v68;
    v60 = v5;
    if ( v5 < v65 )
    {
      *((_DWORD *)a1 + 34) = v68;
      goto LABEL_99;
    }
    v13 = v57;
    if ( v5 < v47 )
      goto LABEL_74;
LABEL_46:
    v21 += 2;
  }
  if ( (_DWORD)v26 != 1 )
  {
    if ( (_DWORD)v26 != 2 )
    {
      v27 = ((unsigned int)(v26 + 1) >> 1) + v21;
      v61 = v27;
      if ( v27 > v62 )
        return 0LL;
      v28 = (((_DWORD)v26 + 1) & 2) != 0;
      v63 = v28;
      if ( v5 >= v58 || v9 >= v8 || (int)v26 + v9 <= v13 )
      {
        v9 += v26;
        v41 = &v2[(unsigned __int64)(unsigned int)(v26 + 1) >> 1];
      }
      else
      {
        if ( v9 >= v13 )
        {
          v30 = byte_1C0319888[(unsigned __int8)(7 - (v9 & 7)) + 16];
        }
        else
        {
          v29 = v13 - v9;
          v25 = (unsigned int)(v13 >> 3);
          v9 = v13;
          v2 += (unsigned __int64)v29 >> 1;
          LODWORD(v26) = v26 - v29;
          v30 = byte_1C0319888[(unsigned __int8)(7 - (v13 & 7)) + 16];
          if ( (v29 & 1) != 0 )
          {
            v31 = *v2;
            v32 = v15 | v30;
            ++v2;
            LODWORD(v26) = v26 - 1;
            v30 >>= 1;
            v9 = v57 + 1;
            if ( !*(_BYTE *)(v67 + 4LL * (v31 & 0xF)) )
              v32 = v15;
            v15 = v32;
          }
        }
        if ( (int)v26 + v9 <= v8 )
        {
          v33 = 0;
        }
        else
        {
          v33 = v9 + v26 - v8;
          LODWORD(v26) = v8 - v9;
        }
        v34 = v26 + v9;
        v72 = v26 & 1;
        v35 = 0;
        while ( !v30 )
        {
LABEL_39:
          *(_BYTE *)(v25 + v3) = v15;
          v30 = 0x80;
          v25 = (unsigned int)(v25 + 1);
          v15 = 0;
          if ( !(_DWORD)v26 )
            goto LABEL_40;
        }
        while ( 1 )
        {
          v36 = v30;
          if ( !(_DWORD)v26 )
            break;
          if ( !v35 )
          {
            v37 = *v2++;
            v55 = *(_BYTE *)(v67 + 4 * (v37 >> 4));
            v5 = v60;
            v36 = v30;
            v56 = *(_BYTE *)(v67 + 4 * (v37 & 0xF));
          }
          v38 = v15 | v36;
          LODWORD(v26) = v26 - 1;
          v39 = *(&v55 + v35) == 0;
          v35 ^= 1u;
          if ( v39 )
            v38 = v15;
          v30 >>= 1;
          v15 = v38;
          if ( !v30 )
            goto LABEL_39;
        }
LABEL_40:
        v40 = v33;
        if ( !v72 )
          v40 = v33 + 1;
        v27 = v61;
        v28 = v63;
        v41 = &v2[v40 >> 1];
        v9 = v33 + v34;
      }
      v21 = v28 + v27;
      v2 = &v41[v28];
      goto LABEL_45;
    }
    v42 = v58;
    if ( v5 >= v58 )
    {
      v43 = v59;
    }
    else
    {
      if ( (v9 & 7) == 0 )
        goto LABEL_56;
      if ( v9 < v13 )
      {
        if ( v9 >= v8 )
          goto LABEL_53;
LABEL_56:
        v43 = v59;
      }
      else
      {
        if ( v9 < v8 )
        {
          *(_BYTE *)((unsigned int)v25 + v3) = v15 | *(_BYTE *)((unsigned int)v25 + v3) & ~byte_1C0319888[v9 & 7];
          v42 = v58;
          goto LABEL_56;
        }
LABEL_53:
        v43 = v59;
        *(_BYTE *)(v59 + v3) = v15 | v70 & *(_BYTE *)(v59 + v3);
      }
    }
    v21 += 2;
    if ( v21 > v62 )
      return 0LL;
    v44 = *v2;
    v45 = v2 + 1;
    v9 += v44;
    v46 = *v45;
    v2 = v45 + 1;
    v5 -= v46;
    v60 = v5;
    v3 += v46 * v64;
    if ( v5 < v65 )
    {
      *((_DWORD *)a1 + 34) = v9;
LABEL_99:
      *((_QWORD *)a1 + 14) = v3;
      result = 1LL;
      *((_QWORD *)a1 + 13) = v2;
      *((_DWORD *)a1 + 31) = v21;
      *((_DWORD *)a1 + 33) = v5;
      return result;
    }
    if ( v5 >= v42 )
      goto LABEL_45;
    v13 = v57;
    if ( v9 >= v57 )
    {
      if ( v9 < v8 )
      {
        v15 = byte_1C0319888[v9 & 7] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
LABEL_45:
        v13 = v57;
        goto LABEL_46;
      }
LABEL_64:
      v15 = *(_BYTE *)(v43 + v3);
      goto LABEL_46;
    }
    if ( v9 >= v8 )
      goto LABEL_64;
LABEL_74:
    v15 = v16 & *(_BYTE *)(v66 + v3);
    goto LABEL_46;
  }
  if ( v5 < v58 && (v9 & 7) != 0 )
  {
    if ( v9 < v13 )
    {
      if ( v9 >= v8 )
        goto LABEL_107;
    }
    else
    {
      if ( v9 < v8 )
      {
        *(_BYTE *)(v25 + v3) = v15 | *(_BYTE *)(v25 + v3) & ~byte_1C0319888[v9 & 7];
        return 0LL;
      }
LABEL_107:
      *(_BYTE *)(v59 + v3) = v15 | v70 & *(_BYTE *)(v59 + v3);
    }
  }
  return 0LL;
}
