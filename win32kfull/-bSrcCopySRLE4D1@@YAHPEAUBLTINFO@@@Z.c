/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02F1360
 * Callers:
 *     <none>
 * Callees:
 *     Feature_2721926456__private_IsEnabledDeviceUsage @ 0x1C01308DC (Feature_2721926456__private_IsEnabledDeviceUsage.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall bSrcCopySRLE4D1(struct BLTINFO *a1)
{
  int v2; // r10d
  int v3; // r9d
  unsigned __int8 *v4; // r15
  __int64 v5; // rbp
  int v6; // r13d
  int v7; // edx
  int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // r11d
  __int64 v11; // rax
  int v12; // ecx
  __int64 result; // rax
  char v14; // di
  char v15; // r14
  int v16; // eax
  int *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // edx
  bool i; // cc
  unsigned int v21; // r14d
  unsigned __int8 *v22; // r15
  __int64 v23; // r11
  unsigned __int64 v24; // r8
  unsigned int v25; // edx
  BOOL v26; // ecx
  char v27; // dl
  unsigned __int8 v28; // r14
  char v29; // cl
  __int64 v30; // rdx
  unsigned int v31; // r10d
  int v32; // ebx
  unsigned int v33; // edx
  unsigned __int8 v34; // cl
  unsigned __int64 v35; // rax
  char v36; // cl
  bool v37; // zf
  unsigned int v38; // eax
  unsigned __int8 *v39; // r15
  int v40; // r8d
  int v41; // eax
  unsigned __int8 *v42; // r15
  int v43; // ecx
  int IsEnabledDeviceUsage; // eax
  int v45; // eax
  int v46; // r8d
  __int64 v47; // rdx
  char v48; // cl
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int8 v51; // r9
  __int64 v52; // r10
  size_t v53; // r8
  unsigned int v54; // ebx
  __int64 v55; // r14
  __int64 v56; // r14
  int v57; // [rsp+20h] [rbp-88h]
  unsigned int v58; // [rsp+20h] [rbp-88h]
  unsigned int v59; // [rsp+20h] [rbp-88h]
  int v60; // [rsp+24h] [rbp-84h]
  char v61; // [rsp+28h] [rbp-80h]
  unsigned __int8 v62; // [rsp+29h] [rbp-7Fh]
  int v63; // [rsp+2Ch] [rbp-7Ch]
  int v64; // [rsp+30h] [rbp-78h]
  int v65; // [rsp+34h] [rbp-74h]
  unsigned int v66; // [rsp+38h] [rbp-70h]
  unsigned int v67; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v68; // [rsp+40h] [rbp-68h]
  unsigned int v69; // [rsp+44h] [rbp-64h]
  int v70; // [rsp+48h] [rbp-60h]
  __int64 v71; // [rsp+50h] [rbp-58h]
  int v72; // [rsp+58h] [rbp-50h]
  int v73; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int8 v74; // [rsp+B0h] [rbp+8h]
  char v75; // [rsp+B8h] [rbp+10h]
  char v76; // [rsp+C0h] [rbp+18h]
  int v77; // [rsp+C8h] [rbp+20h]
  char v78; // [rsp+C8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = *((_DWORD *)a1 + 24);
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 32);
  v70 = *((_DWORD *)a1 + 11);
  v57 = *((_DWORD *)a1 + 30);
  v9 = *((_QWORD *)a1 + 9);
  v64 = v2;
  v63 = v3;
  v72 = v7;
  v10 = *(_DWORD *)(v9 + 64);
  v11 = *(_QWORD *)a1;
  v69 = v10;
  v71 = *(_QWORD *)(v11 + 16);
  LODWORD(v11) = *((_DWORD *)a1 + 23);
  v12 = *((_DWORD *)a1 + 25);
  v60 = v12;
  v65 = v11;
  if ( v6 < (int)v11 )
    return 1LL;
  v14 = 0;
  v68 = (unsigned int)v2 >> 3;
  v15 = byte_1C031B128[(v2 & 7) + 8];
  v75 = v15;
  v66 = (unsigned int)(v3 - 1) >> 3;
  v76 = ~byte_1C031B128[(v3 & 7) + 8];
  if ( v6 >= v12 )
    goto LABEL_10;
  if ( v8 >= v2 )
  {
    if ( v8 < v3 )
    {
      v14 = byte_1C031B128[(v8 & 7) + 8] & *(_BYTE *)((unsigned int)(v8 >> 3) + v5);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v8 >= v3 )
  {
LABEL_8:
    v14 = *(_BYTE *)(((unsigned int)(v3 - 1) >> 3) + v5);
    goto LABEL_10;
  }
  v14 = v15 & *(_BYTE *)(((unsigned int)v2 >> 3) + v5);
LABEL_10:
  v16 = 1;
  v17 = (int *)(v71 + 4);
  v18 = 15LL;
  do
  {
    *v17 = v16;
    v16 ^= 1u;
    ++v17;
    --v18;
  }
  while ( v18 );
  v19 = v57 + 2;
  for ( i = v57 + 2 <= v10; ; i = v19 <= v69 )
  {
    v58 = v19;
    if ( !i )
      return 0LL;
    v21 = *v4;
    v22 = v4 + 1;
    v23 = (unsigned int)(v8 >> 3);
    v24 = *v22;
    v4 = v22 + 1;
    if ( !v21 )
      break;
    if ( v6 < v60 && v8 < v3 && (int)(v21 + v8) > v2 )
    {
      if ( v8 < v2 )
      {
        v21 += v8 - v2;
        v8 = v2;
        v23 = (unsigned int)(v2 >> 3);
      }
      if ( (int)(v21 + v8) <= v3 )
      {
        v67 = 0;
      }
      else
      {
        v67 = v8 + v21 - v3;
        v21 = v3 - v8;
      }
      v47 = *(unsigned __int8 *)(v71 + 4 * (v24 >> 4));
      v62 = *(_BYTE *)(v71 + 4 * (v24 & 0xF));
      v48 = v8 & 7;
      v61 = v47;
      v49 = v62 + 2 * v47;
      v50 = 0x1C0000000uLL;
      v51 = byte_1C031B128[v49];
      v74 = v51;
      v52 = (unsigned __int8)(7 - (v8 & 7));
      v73 = (unsigned __int8)(7 - (v8 & 7));
      v78 = v51;
      if ( v21 >= (int)v52 + 1 )
        v53 = (unsigned int)(((unsigned __int8)v21 - (int)v52 - 1) >> 3);
      else
        v53 = 0LL;
      v54 = v21 + v8;
      v55 = v21 - 8 * (_DWORD)v53;
      if ( (int)v52 < (int)v55 )
      {
        *(_BYTE *)(v23 + v5) = v14 | ((unsigned __int8)(v51 & byte_1C031B128[v52 + 9]) >> v48);
        if ( (v73 & 1) == 0 )
        {
          v51 *= 2;
          if ( v78 < 0 )
            v51 |= 1u;
          v74 = v51;
        }
        LODWORD(v23) = v23 + 1;
        v14 = 0;
        v56 = (unsigned int)(-1 - v52 + v55);
      }
      else
      {
        v51 &= byte_1C031B128[v55 + 8];
        v74 = v51;
        v14 |= v51 >> v48;
        v56 = 0LL;
      }
      if ( (_DWORD)v53 )
      {
        LOBYTE(v50) = v51;
        memset_0((void *)(v5 + (unsigned int)v23), v50, v53);
        v51 = v74;
        v14 = 0;
      }
      if ( (unsigned int)v56 < 9 )
        v14 |= v51 & byte_1C031B128[v56 + 8];
      v8 = v67 + v54;
      v3 = v63;
LABEL_62:
      v19 = v58;
LABEL_63:
      v2 = v64;
      goto LABEL_64;
    }
    v8 += v21;
LABEL_64:
    v19 += 2;
  }
  if ( !(_DWORD)v24 )
  {
    v45 = v60;
    v46 = v65;
    if ( v6 >= v60 || v6 < v65 )
      goto LABEL_76;
    if ( (v8 & 7) != 0 )
    {
      if ( v8 < v2 )
      {
        if ( v8 < v3 )
          goto LABEL_75;
      }
      else if ( v8 < v3 )
      {
        *(_BYTE *)(v23 + v5) = v14 | *(_BYTE *)(v23 + v5) & ~byte_1C031B128[(v8 & 7) + 8];
        goto LABEL_75;
      }
      *(_BYTE *)(v66 + v5) = v14 | v76 & *(_BYTE *)(v66 + v5);
    }
LABEL_75:
    v45 = v60;
LABEL_76:
    --v6;
    v5 += v70;
    v8 = v72;
    if ( v6 < v46 )
    {
      *((_DWORD *)a1 + 34) = v72;
      goto LABEL_104;
    }
    if ( v6 < v45 )
      v14 = v75 & *(_BYTE *)(v68 + v5);
    goto LABEL_64;
  }
  if ( (_DWORD)v24 != 1 )
  {
    if ( (_DWORD)v24 != 2 )
    {
      v25 = ((unsigned int)(v24 + 1) >> 1) + v19;
      v59 = v25;
      if ( v25 > v69 )
        return 0LL;
      v26 = (((_DWORD)v24 + 1) & 2) != 0;
      v67 = v26;
      if ( v6 >= v60 || v8 >= v3 || (int)v24 + v8 <= v64 )
      {
        v8 += v24;
        v39 = &v4[(unsigned __int64)(unsigned int)(v24 + 1) >> 1];
      }
      else
      {
        if ( v8 >= v64 )
        {
          v28 = byte_1C031B128[(unsigned __int8)(7 - (v8 & 7)) + 24];
        }
        else
        {
          v27 = v64 - v8;
          LODWORD(v24) = v24 - (v64 - v8);
          v4 += (unsigned __int64)(unsigned int)(v64 - v8) >> 1;
          v23 = (unsigned int)(v64 >> 3);
          v8 = v64;
          v28 = byte_1C031B128[(unsigned __int8)(7 - (v64 & 7)) + 24];
          if ( (v27 & 1) != 0 )
          {
            v29 = v14 | v28;
            v30 = *v4++ & 0xF;
            v28 >>= 1;
            v8 = v64 + 1;
            LODWORD(v24) = v24 - 1;
            if ( !*(_BYTE *)(v71 + 4 * v30) )
              v29 = v14;
            v14 = v29;
          }
        }
        if ( (int)v24 + v8 <= v3 )
        {
          v31 = 0;
        }
        else
        {
          v31 = v8 + v24 - v3;
          LODWORD(v24) = v3 - v8;
        }
        v32 = v24 + v8;
        v77 = v24 & 1;
        v33 = 0;
        while ( !v28 )
        {
LABEL_39:
          *(_BYTE *)(v23 + v5) = v14;
          v28 = 0x80;
          v23 = (unsigned int)(v23 + 1);
          v14 = 0;
          if ( !(_DWORD)v24 )
            goto LABEL_40;
        }
        while ( 1 )
        {
          v34 = v28;
          if ( !(_DWORD)v24 )
            break;
          if ( !v33 )
          {
            v35 = *v4++;
            v61 = *(_BYTE *)(v71 + 4 * (v35 >> 4));
            v3 = v63;
            v34 = v28;
            v62 = *(_BYTE *)(v71 + 4 * (v35 & 0xF));
          }
          v36 = v14 | v34;
          LODWORD(v24) = v24 - 1;
          v37 = *(&v61 + v33) == 0;
          v33 ^= 1u;
          if ( v37 )
            v36 = v14;
          v28 >>= 1;
          v14 = v36;
          if ( !v28 )
            goto LABEL_39;
        }
LABEL_40:
        v38 = v31;
        if ( !v77 )
          v38 = v31 + 1;
        v25 = v59;
        v26 = v67;
        v39 = &v4[v38 >> 1];
        v8 = v31 + v32;
      }
      v19 = v26 + v25;
      v4 = &v39[v26];
      goto LABEL_63;
    }
    v40 = v65;
    if ( v6 < v60 && v6 >= v65 && (v8 & 7) != 0 )
    {
      if ( v8 < v2 )
      {
        if ( v8 >= v3 )
          goto LABEL_52;
      }
      else
      {
        if ( v8 < v3 )
        {
          *(_BYTE *)(v23 + v5) = v14 | *(_BYTE *)(v23 + v5) & ~byte_1C031B128[(v8 & 7) + 8];
          goto LABEL_53;
        }
LABEL_52:
        *(_BYTE *)(v66 + v5) = v14 | v76 & *(_BYTE *)(v66 + v5);
      }
    }
LABEL_53:
    v19 += 2;
    v58 = v19;
    if ( v19 > v69 )
      return 0LL;
    v41 = *v4;
    v42 = v4 + 1;
    v8 += v41;
    v43 = *v42;
    v4 = v42 + 1;
    v6 -= v43;
    v5 += v43 * v70;
    if ( v6 < v40 )
    {
      *((_DWORD *)a1 + 34) = v8;
LABEL_104:
      *((_QWORD *)a1 + 14) = v5;
      result = 1LL;
      *((_QWORD *)a1 + 13) = v4;
      *((_DWORD *)a1 + 31) = v19;
      *((_DWORD *)a1 + 33) = v6;
      return result;
    }
    IsEnabledDeviceUsage = Feature_2721926456__private_IsEnabledDeviceUsage();
    v3 = v63;
    if ( IsEnabledDeviceUsage && v6 >= v60 )
      goto LABEL_62;
    v2 = v64;
    if ( v8 < v64 )
    {
      if ( v8 < v63 )
      {
        v14 = v75 & *(_BYTE *)(v68 + v5);
        goto LABEL_66;
      }
    }
    else if ( v8 < v63 )
    {
      v14 = *(_BYTE *)((unsigned int)(v8 >> 3) + v5) & byte_1C031B128[(v8 & 7) + 8];
LABEL_66:
      v19 = v58;
      goto LABEL_64;
    }
    v14 = *(_BYTE *)(v66 + v5);
    goto LABEL_66;
  }
  if ( v6 < v60 && v6 >= v65 && (v8 & 7) != 0 )
  {
    if ( v8 < v2 )
    {
      if ( v8 >= v3 )
        goto LABEL_113;
    }
    else
    {
      if ( v8 < v3 )
      {
        *(_BYTE *)(v23 + v5) = v14 | *(_BYTE *)(v23 + v5) & ~byte_1C031B128[(v8 & 7) + 8];
        return 0LL;
      }
LABEL_113:
      *(_BYTE *)(v66 + v5) = v14 | v76 & *(_BYTE *)(v66 + v5);
    }
  }
  return 0LL;
}
