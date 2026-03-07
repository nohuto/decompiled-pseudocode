__int64 __fastcall bSrcCopySRLE8D1(struct BLTINFO *a1)
{
  int v2; // edx
  unsigned __int8 *v3; // rbp
  __int64 v4; // rsi
  int v5; // r11d
  int v6; // r12d
  int v7; // r13d
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  __int64 result; // rax
  char v12; // r8
  int v13; // ecx
  __int64 i; // rax
  unsigned int v15; // r12d
  __int64 v16; // r14
  unsigned __int8 *v17; // rbp
  __int64 v18; // r10
  __int64 v19; // r9
  unsigned int v20; // r12d
  int v21; // ecx
  __int64 v22; // rax
  int v23; // r11d
  __int64 v24; // rcx
  int v25; // ebx
  unsigned __int8 v26; // r14
  __int64 v27; // rdx
  char v28; // cl
  unsigned __int8 *v29; // rbp
  unsigned int v30; // r10d
  int v31; // eax
  unsigned __int8 *v32; // rbp
  int v33; // ecx
  char v34; // cl
  int v35; // ebx
  int v36; // edx
  int v37; // r9d
  char v38; // dl
  unsigned int v40; // r12d
  char v41; // al
  char v42; // r8
  unsigned int v43; // r10d
  __int64 v44; // r14
  int v45; // [rsp+20h] [rbp-78h]
  int v46; // [rsp+24h] [rbp-74h]
  unsigned int v47; // [rsp+28h] [rbp-70h]
  int v48; // [rsp+2Ch] [rbp-6Ch]
  int v49; // [rsp+30h] [rbp-68h]
  unsigned int v50; // [rsp+34h] [rbp-64h]
  int v51; // [rsp+38h] [rbp-60h]
  int v52; // [rsp+3Ch] [rbp-5Ch]
  int v53; // [rsp+40h] [rbp-58h]
  int v54; // [rsp+44h] [rbp-54h]
  __int64 v55; // [rsp+48h] [rbp-50h]
  char v56; // [rsp+A0h] [rbp+8h]
  char v57; // [rsp+A8h] [rbp+10h]
  unsigned int v58; // [rsp+B0h] [rbp+18h]
  unsigned int v59; // [rsp+B8h] [rbp+20h]
  int v60; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 24);
  v8 = *((_DWORD *)a1 + 32);
  v48 = *((_DWORD *)a1 + 11);
  v52 = v2;
  v53 = *((_DWORD *)a1 + 14);
  v46 = v5;
  v47 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v55 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v9 = *((_DWORD *)a1 + 23);
  v10 = *((_DWORD *)a1 + 25);
  v45 = v10;
  v49 = v9;
  if ( v5 < v9 )
    return 1LL;
  v12 = 0;
  v50 = (unsigned int)v2 >> 3;
  v57 = byte_1C032AF40[(v2 & 7) + 16];
  v58 = (unsigned int)(v7 - 1) >> 3;
  v56 = ~byte_1C032AF40[(v7 & 7) + 16];
  if ( v5 >= v10 )
    goto LABEL_10;
  if ( v8 < v2 )
  {
    if ( v8 < v7 )
    {
      v12 = byte_1C032AF40[(v2 & 7) + 16] & *(_BYTE *)(((unsigned int)v2 >> 3) + v4);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v8 >= v7 )
  {
LABEL_8:
    v12 = *(_BYTE *)(((unsigned int)(v7 - 1) >> 3) + v4);
    goto LABEL_10;
  }
  v12 = byte_1C032AF40[(v8 & 7) + 16] & *(_BYTE *)((unsigned int)(v8 >> 3) + v4);
LABEL_10:
  v13 = 1;
  for ( i = 1LL; i < 256; ++i )
  {
    *(_DWORD *)(v55 + 4 * i) = v13;
    v13 ^= 1u;
  }
  v15 = v6 + 2;
  v59 = v15;
  if ( v15 > v47 )
    return 0LL;
  while ( 1 )
  {
    v16 = *v3;
    v17 = v3 + 1;
    v18 = (unsigned int)(v8 >> 3);
    v19 = *v17;
    v3 = v17 + 1;
    if ( !(_DWORD)v16 )
      break;
    if ( v5 < v45 && v8 < v7 && (int)v16 + v8 > v2 )
    {
      if ( v8 < v2 )
      {
        v16 = (unsigned int)(v8 - v2 + v16);
        v8 = v2;
        v18 = (unsigned int)(v2 >> 3);
      }
      if ( (int)v16 + v8 <= v7 )
      {
        v51 = 0;
      }
      else
      {
        v51 = v8 + v16 - v7;
        v16 = (unsigned int)(v7 - v8);
      }
      v34 = v8 & 7;
      v35 = v16 + v8;
      LOBYTE(v36) = 7 - v34;
      v37 = *(_DWORD *)(v55 + 4 * v19);
      v54 = v37;
      if ( (unsigned __int8)(7 - v34) < (unsigned __int8)v16 )
      {
        v36 = (unsigned __int8)v36;
        v40 = ((unsigned __int8)v16 - (unsigned __int8)v36 - 1) >> 3;
        v41 = *((_BYTE *)&unk_1C032AF57 - (unsigned __int8)v36);
        if ( v37 )
          v42 = ~v41 | v12;
        else
          v42 = v41 & v12;
        *(_BYTE *)(v18 + v4) = v42;
        v43 = v18 + 1;
        v44 = -1 - (unsigned __int8)v36 + (unsigned int)v16;
        v12 = 0;
        if ( v40 )
        {
          LOBYTE(v36) = -(v37 != 0);
          memset_0((void *)(v4 + v43), v36, v40);
          v5 = v46;
          v37 = v54;
          v12 = 0;
          v44 = (unsigned int)v44 - 8 * v40;
        }
        if ( (_DWORD)v44 )
        {
          if ( v37 )
          {
            v15 = v59;
            if ( (unsigned int)v44 < 9 )
              v12 = byte_1C032AF40[v44 + 16];
            goto LABEL_88;
          }
          v12 = 0;
        }
        v15 = v59;
      }
      else if ( (unsigned int)v16 < 9 )
      {
        v38 = byte_1C032AF40[v16 + 16] >> v34;
        if ( v37 )
          v12 |= v38;
        else
          v12 &= ~v38;
      }
LABEL_88:
      v8 = v51 + v35;
      goto LABEL_90;
    }
    v8 += v16;
LABEL_90:
    v15 += 2;
    v59 = v15;
    if ( v15 > v47 )
      return 0LL;
    v2 = v52;
  }
  if ( !(_DWORD)v19 )
  {
    if ( v5 < v45 && (v8 & 7) != 0 )
    {
      if ( v8 < v2 )
      {
        if ( v8 < v7 )
          goto LABEL_61;
      }
      else if ( v8 < v7 )
      {
        *(_BYTE *)(v18 + v4) = v12 | *(_BYTE *)(v18 + v4) & ~byte_1C032AF40[(v8 & 7) + 16];
        goto LABEL_61;
      }
      *(_BYTE *)(v58 + v4) = v12 | v56 & *(_BYTE *)(v58 + v4);
    }
LABEL_61:
    --v5;
    v4 += v48;
    v8 = v53;
    v46 = v5;
    if ( v5 < v49 )
    {
      *((_DWORD *)a1 + 34) = v53;
      goto LABEL_93;
    }
    if ( v5 < v45 )
      goto LABEL_63;
    goto LABEL_90;
  }
  if ( (_DWORD)v19 != 1 )
  {
    if ( (_DWORD)v19 != 2 )
    {
      v20 = v19 + v15;
      if ( v20 > v47 )
        return 0LL;
      v21 = v19 & 1;
      v60 = v21;
      if ( v5 >= v45 || v8 >= v7 || (int)v19 + v8 <= v2 )
      {
        v8 += v19;
        v29 = &v3[v19];
      }
      else
      {
        if ( v8 < v2 )
        {
          v22 = (unsigned int)(v2 - v8);
          v18 = (unsigned int)(v2 >> 3);
          LODWORD(v19) = v19 - v22;
          v8 = v2;
          v3 += v22;
        }
        if ( (int)v19 + v8 <= v7 )
        {
          v23 = 0;
        }
        else
        {
          v23 = v8 + v19 - v7;
          LODWORD(v19) = v7 - v8;
        }
        v24 = (unsigned __int8)(7 - (v8 & 7));
        v25 = v19 + v8;
        v26 = byte_1C032AF40[v24];
        while ( !v26 )
        {
LABEL_32:
          *(_BYTE *)(v18 + v4) = v12;
          v26 = 0x80;
          v18 = (unsigned int)(v18 + 1);
          v12 = 0;
          if ( !(_DWORD)v19 )
            goto LABEL_33;
        }
        while ( (_DWORD)v19 )
        {
          v27 = *v3++;
          v28 = v12 | v26;
          LODWORD(v19) = v19 - 1;
          if ( !*(_DWORD *)(v55 + 4 * v27) )
            v28 = v12;
          v26 >>= 1;
          v12 = v28;
          if ( !v26 )
            goto LABEL_32;
        }
LABEL_33:
        v21 = v60;
        v29 = &v3[v23];
        v8 = v23 + v25;
        v5 = v46;
      }
      v15 = v21 + v20;
      v3 = &v29[v21];
      goto LABEL_90;
    }
    if ( v5 >= v45 )
    {
      v30 = (unsigned int)(v7 - 1) >> 3;
LABEL_46:
      v15 += 2;
      if ( v15 > v47 )
        return 0LL;
      v31 = *v3;
      v32 = v3 + 1;
      v8 += v31;
      v33 = *v32;
      v3 = v32 + 1;
      v5 -= v33;
      v46 = v5;
      v4 += v33 * v48;
      if ( v5 < v49 )
      {
        *((_DWORD *)a1 + 34) = v8;
LABEL_93:
        *((_QWORD *)a1 + 14) = v4;
        result = 1LL;
        *((_QWORD *)a1 + 13) = v3;
        *((_DWORD *)a1 + 31) = v15;
        *((_DWORD *)a1 + 33) = v5;
        return result;
      }
      if ( v5 < v45 )
      {
        if ( v8 >= v2 )
        {
          if ( v8 < v7 )
          {
            v12 = byte_1C032AF40[(v8 & 7) + 16] & *(_BYTE *)((unsigned int)(v8 >> 3) + v4);
            goto LABEL_90;
          }
LABEL_53:
          v12 = *(_BYTE *)(v30 + v4);
          goto LABEL_90;
        }
        if ( v8 >= v7 )
          goto LABEL_53;
LABEL_63:
        v12 = v57 & *(_BYTE *)(v50 + v4);
        goto LABEL_90;
      }
      goto LABEL_90;
    }
    if ( (v8 & 7) != 0 )
    {
      if ( v8 < v2 )
      {
        if ( v8 < v7 )
          goto LABEL_45;
      }
      else if ( v8 < v7 )
      {
        v2 = v52;
        *(_BYTE *)(v18 + v4) = v12 | *(_BYTE *)(v18 + v4) & ~byte_1C032AF40[(v8 & 7) + 16];
        goto LABEL_45;
      }
      v30 = (unsigned int)(v7 - 1) >> 3;
      *(_BYTE *)(v58 + v4) = v12 | v56 & *(_BYTE *)(v58 + v4);
      goto LABEL_46;
    }
LABEL_45:
    v30 = (unsigned int)(v7 - 1) >> 3;
    goto LABEL_46;
  }
  if ( v5 < v45 && (v8 & 7) != 0 )
  {
    if ( v8 < v2 )
    {
      if ( v8 >= v7 )
        goto LABEL_101;
    }
    else
    {
      if ( v8 < v7 )
      {
        *(_BYTE *)(v18 + v4) = v12 | *(_BYTE *)(v18 + v4) & ~byte_1C032AF40[(v8 & 7) + 16];
        return 0LL;
      }
LABEL_101:
      *(_BYTE *)(v58 + v4) = v12 | v56 & *(_BYTE *)(v58 + v4);
    }
  }
  return 0LL;
}
