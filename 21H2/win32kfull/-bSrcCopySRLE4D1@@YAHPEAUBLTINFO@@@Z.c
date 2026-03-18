/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02CC220
 * Callers:
 *     <none>
 * Callees:
 *     ?Feature_2923253048__private_IsEnabled@@YAHXZ @ 0x1C015FFCC (-Feature_2923253048__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE4D1(struct BLTINFO *a1)
{
  int v2; // r11d
  unsigned __int8 *v3; // r15
  __int64 v4; // rbp
  int v5; // r9d
  int v6; // edx
  int v7; // r13d
  int v8; // r8d
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rax
  int v13; // ecx
  __int64 result; // rax
  char v15; // di
  char v16; // r12
  unsigned int v17; // r14d
  int v18; // eax
  int *v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // edx
  bool i; // cc
  unsigned int v23; // r14d
  unsigned __int8 *v24; // r15
  __int64 v25; // r10
  unsigned __int64 v26; // r8
  unsigned int v27; // edx
  BOOL v28; // ecx
  unsigned int v29; // edx
  unsigned __int8 v30; // r14
  char v31; // cl
  __int64 v32; // rdx
  unsigned int v33; // r11d
  int v34; // ebx
  unsigned int v35; // edx
  unsigned __int8 v36; // cl
  unsigned __int64 v37; // rax
  char v38; // cl
  bool v39; // zf
  unsigned int v40; // eax
  unsigned __int8 *v41; // r15
  int v42; // eax
  unsigned __int8 *v43; // r15
  int v44; // ecx
  __int64 v45; // r14
  int v46; // eax
  int v47; // eax
  __int64 v48; // rdx
  char v49; // cl
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int8 v52; // r9
  __int64 v53; // r11
  size_t v54; // r8
  unsigned int v55; // ebx
  __int64 v56; // r14
  __int64 v57; // r14
  unsigned int v58; // [rsp+20h] [rbp-88h]
  unsigned int v59; // [rsp+20h] [rbp-88h]
  int v60; // [rsp+24h] [rbp-84h]
  char v61; // [rsp+28h] [rbp-80h]
  unsigned __int8 v62; // [rsp+29h] [rbp-7Fh]
  int v63; // [rsp+2Ch] [rbp-7Ch]
  int v64; // [rsp+30h] [rbp-78h]
  unsigned int v65; // [rsp+34h] [rbp-74h]
  unsigned int v66; // [rsp+38h] [rbp-70h]
  unsigned int v67; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v68; // [rsp+40h] [rbp-68h]
  int v69; // [rsp+44h] [rbp-64h]
  int v70; // [rsp+48h] [rbp-60h]
  __int64 v71; // [rsp+50h] [rbp-58h]
  int v72; // [rsp+58h] [rbp-50h]
  int v73; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int8 v74; // [rsp+B0h] [rbp+8h]
  char v75; // [rsp+C0h] [rbp+18h]
  int v76; // [rsp+C8h] [rbp+20h]
  char v77; // [rsp+C8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 14);
  v9 = *((_DWORD *)a1 + 32);
  v70 = *((_DWORD *)a1 + 11);
  v10 = *((_QWORD *)a1 + 9);
  v64 = v2;
  v72 = v8;
  v63 = v5;
  v11 = *(_DWORD *)(v10 + 64);
  v12 = *(_QWORD *)a1;
  v66 = v11;
  v71 = *(_QWORD *)(v12 + 16);
  LODWORD(v12) = *((_DWORD *)a1 + 23);
  v13 = *((_DWORD *)a1 + 25);
  v60 = v13;
  v69 = v12;
  if ( v5 < (int)v12 )
    return 1LL;
  v15 = 0;
  v68 = (unsigned int)v2 >> 3;
  v16 = byte_1C02EC9F8[v2 & 7];
  v65 = (unsigned int)(v7 - 1) >> 3;
  v17 = v66;
  v75 = ~byte_1C02EC9F8[v7 & 7];
  if ( v5 >= v13 )
    goto LABEL_10;
  if ( v9 >= v2 )
  {
    if ( v9 < v7 )
    {
      v15 = byte_1C02EC9F8[v9 & 7] & *(_BYTE *)((unsigned int)(v9 >> 3) + v4);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v9 >= v7 )
  {
LABEL_8:
    v15 = *(_BYTE *)(((unsigned int)(v7 - 1) >> 3) + v4);
    goto LABEL_10;
  }
  v15 = v16 & *(_BYTE *)(((unsigned int)v2 >> 3) + v4);
LABEL_10:
  v18 = 1;
  v19 = (int *)(v71 + 4);
  v20 = 15LL;
  do
  {
    *v19 = v18;
    v18 ^= 1u;
    ++v19;
    --v20;
  }
  while ( v20 );
  v21 = v6 + 2;
  for ( i = v21 <= v17; ; i = v21 <= v66 )
  {
    v58 = v21;
    if ( !i )
      return 0LL;
    v23 = *v3;
    v24 = v3 + 1;
    v25 = (unsigned int)(v9 >> 3);
    v26 = *v24;
    v3 = v24 + 1;
    if ( !v23 )
      break;
    if ( v5 < v60 && v9 < v7 && (int)(v23 + v9) > v2 )
    {
      if ( v9 < v2 )
      {
        v47 = v2 - v9;
        v9 = v2;
        v23 -= v47;
        v25 = (unsigned int)(v2 >> 3);
      }
      if ( (int)(v23 + v9) <= v7 )
      {
        v67 = 0;
      }
      else
      {
        v67 = v9 + v23 - v7;
        v23 = v7 - v9;
      }
      v48 = *(unsigned __int8 *)(v71 + 4 * (v26 >> 4));
      v62 = *(_BYTE *)(v71 + 4 * (v26 & 0xF));
      v49 = v9 & 7;
      v61 = v48;
      v50 = v62 + 2 * v48;
      v51 = 0x1C0000000uLL;
      v52 = byte_1C02EC9F8[v50 + 12];
      v74 = v52;
      v53 = (unsigned __int8)(7 - (v9 & 7));
      v73 = (unsigned __int8)(7 - (v9 & 7));
      v77 = v52;
      if ( v23 >= (int)v53 + 1 )
        v54 = (unsigned int)(((unsigned __int8)v23 - (int)v53 - 1) >> 3);
      else
        v54 = 0LL;
      v55 = v23 + v9;
      v56 = v23 - 8 * (_DWORD)v54;
      if ( (int)v53 < (int)v56 )
      {
        *(_BYTE *)(v25 + v4) = v15 | ((unsigned __int8)(v52 & byte_1C02EC9F8[v53 + 1]) >> v49);
        if ( (v73 & 1) == 0 )
        {
          v52 *= 2;
          if ( v77 < 0 )
            v52 |= 1u;
          v74 = v52;
        }
        LODWORD(v25) = v25 + 1;
        v15 = 0;
        v57 = (unsigned int)(-1 - v53 + v56);
      }
      else
      {
        v52 &= byte_1C02EC9F8[v56];
        v74 = v52;
        v15 |= v52 >> v49;
        v57 = 0LL;
      }
      if ( (_DWORD)v54 )
      {
        LOBYTE(v51) = v52;
        memset((void *)(v4 + (unsigned int)v25), v51, v54);
        v52 = v74;
        v15 = 0;
      }
      if ( (unsigned int)v57 < 9 )
        v15 |= v52 & byte_1C02EC9F8[v57];
      v9 = v67 + v55;
      v5 = v63;
      goto LABEL_104;
    }
    v9 += v23;
LABEL_106:
    v21 += 2;
  }
  if ( !(_DWORD)v26 )
  {
    v46 = v60;
    if ( v5 >= v60 )
    {
LABEL_78:
      --v5;
      v4 += v70;
      v9 = v72;
      v63 = v5;
      if ( v5 < v69 )
      {
        *((_DWORD *)a1 + 34) = v72;
        goto LABEL_109;
      }
      if ( v5 < v46 )
        v15 = v16 & *(_BYTE *)(v68 + v4);
      goto LABEL_106;
    }
    if ( (v9 & 7) != 0 )
    {
      if ( v9 < v2 )
      {
        if ( v9 < v7 )
          goto LABEL_77;
      }
      else if ( v9 < v7 )
      {
        *(_BYTE *)(v25 + v4) = v15 | *(_BYTE *)(v25 + v4) & ~byte_1C02EC9F8[v9 & 7];
        goto LABEL_77;
      }
      *(_BYTE *)(v65 + v4) = v15 | v75 & *(_BYTE *)(v65 + v4);
    }
LABEL_77:
    v46 = v60;
    goto LABEL_78;
  }
  if ( (_DWORD)v26 != 1 )
  {
    if ( (_DWORD)v26 != 2 )
    {
      v27 = ((unsigned int)(v26 + 1) >> 1) + v21;
      v59 = v27;
      if ( v27 > v66 )
        return 0LL;
      v28 = (((_DWORD)v26 + 1) & 2) != 0;
      v67 = v28;
      if ( v5 >= v60 || v9 >= v7 || (int)v26 + v9 <= v64 )
      {
        v9 += v26;
        v41 = &v3[(unsigned __int64)(unsigned int)(v26 + 1) >> 1];
      }
      else
      {
        if ( v9 >= v64 )
        {
          v30 = byte_1C02EC9F8[(unsigned __int8)(7 - (v9 & 7)) + 16];
        }
        else
        {
          v29 = v64 - v9;
          v9 = v64;
          v3 += (unsigned __int64)v29 >> 1;
          v25 = (unsigned int)(v64 >> 3);
          LODWORD(v26) = v26 - v29;
          v30 = byte_1C02EC9F8[(unsigned __int8)(7 - (v64 & 7)) + 16];
          if ( (v29 & 1) != 0 )
          {
            v31 = v15 | v30;
            v32 = *v3++ & 0xF;
            v30 >>= 1;
            v9 = v64 + 1;
            LODWORD(v26) = v26 - 1;
            if ( !*(_BYTE *)(v71 + 4 * v32) )
              v31 = v15;
            v15 = v31;
          }
        }
        if ( (int)v26 + v9 <= v7 )
        {
          v33 = 0;
        }
        else
        {
          v33 = v9 + v26 - v7;
          LODWORD(v26) = v7 - v9;
        }
        v34 = v26 + v9;
        v76 = v26 & 1;
        v35 = 0;
        while ( !v30 )
        {
LABEL_39:
          *(_BYTE *)(v25 + v4) = v15;
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
            v37 = *v3++;
            v61 = *(_BYTE *)(v71 + 4 * (v37 >> 4));
            v5 = v63;
            v36 = v30;
            v62 = *(_BYTE *)(v71 + 4 * (v37 & 0xF));
          }
          v38 = v15 | v36;
          LODWORD(v26) = v26 - 1;
          v39 = *(&v61 + v35) == 0;
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
        if ( !v76 )
          v40 = v33 + 1;
        v27 = v59;
        v28 = v67;
        v41 = &v3[v40 >> 1];
        v9 = v33 + v34;
      }
      v21 = v28 + v27;
      v3 = &v41[v28];
      goto LABEL_105;
    }
    if ( v5 < v60 && (v9 & 7) != 0 )
    {
      if ( v9 < v2 )
      {
        if ( v9 >= v7 )
          goto LABEL_51;
      }
      else
      {
        if ( v9 < v7 )
        {
          *(_BYTE *)(v25 + v4) = v15 | *(_BYTE *)(v25 + v4) & ~byte_1C02EC9F8[v9 & 7];
          goto LABEL_52;
        }
LABEL_51:
        *(_BYTE *)(v65 + v4) = v15 | v75 & *(_BYTE *)(v65 + v4);
      }
    }
LABEL_52:
    v21 += 2;
    v58 = v21;
    if ( v21 > v66 )
      return 0LL;
    v42 = *v3;
    v43 = v3 + 1;
    v9 += v42;
    v44 = *v43;
    v3 = v43 + 1;
    v5 -= v44;
    v63 = v5;
    v4 += v44 * v70;
    if ( v5 < v69 )
    {
      *((_DWORD *)a1 + 34) = v9;
LABEL_109:
      *((_QWORD *)a1 + 14) = v4;
      result = 1LL;
      *((_QWORD *)a1 + 13) = v3;
      *((_DWORD *)a1 + 31) = v21;
      *((_DWORD *)a1 + 33) = v5;
      return result;
    }
    v45 = (unsigned int)(v9 >> 3);
    if ( !(unsigned int)Feature_2923253048__private_IsEnabled() )
    {
      v2 = v64;
      if ( v9 >= v64 )
      {
        if ( v9 < v7 )
        {
          v15 = *(_BYTE *)(v45 + v4) & byte_1C02EC9F8[v9 & 7];
          goto LABEL_58;
        }
LABEL_60:
        v15 = *(_BYTE *)(v65 + v4);
LABEL_58:
        v5 = v63;
LABEL_63:
        v21 = v58;
        goto LABEL_106;
      }
      if ( v9 >= v7 )
        goto LABEL_60;
      v5 = v63;
LABEL_62:
      v15 = v16 & *(_BYTE *)(v68 + v4);
      goto LABEL_63;
    }
    v5 = v63;
    if ( v63 < v60 )
    {
      v2 = v64;
      if ( v9 < v64 )
      {
        if ( v9 < v7 )
          goto LABEL_62;
      }
      else if ( v9 < v7 )
      {
        v15 = *(_BYTE *)(v45 + v4) & byte_1C02EC9F8[v9 & 7];
        goto LABEL_63;
      }
      v15 = *(_BYTE *)(v65 + v4);
      goto LABEL_63;
    }
LABEL_104:
    v21 = v58;
LABEL_105:
    v2 = v64;
    goto LABEL_106;
  }
  if ( v5 < v60 && v5 >= v69 && (v9 & 7) != 0 )
  {
    if ( v9 < v2 )
    {
      if ( v9 >= v7 )
        goto LABEL_118;
    }
    else
    {
      if ( v9 < v7 )
      {
        *(_BYTE *)(v25 + v4) = v15 | *(_BYTE *)(v25 + v4) & ~byte_1C02EC9F8[v9 & 7];
        return 0LL;
      }
LABEL_118:
      *(_BYTE *)(v65 + v4) = v15 | v75 & *(_BYTE *)(v65 + v4);
    }
  }
  return 0LL;
}
