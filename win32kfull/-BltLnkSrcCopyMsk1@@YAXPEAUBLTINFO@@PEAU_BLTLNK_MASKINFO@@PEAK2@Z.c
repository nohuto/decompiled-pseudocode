void __fastcall BltLnkSrcCopyMsk1(
        struct BLTINFO *a1,
        struct _BLTLNK_MASKINFO *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // r8
  __int64 v6; // rdx
  unsigned __int8 *v7; // r10
  int v8; // eax
  int v10; // ebp
  const unsigned __int8 *v11; // r15
  __int64 v12; // rbx
  int v13; // esi
  unsigned int v14; // ecx
  const unsigned __int8 *v15; // r12
  _BYTE *v16; // rdi
  char *v17; // rdx
  __int64 v18; // r12
  char v19; // cl
  int v20; // r9d
  int v21; // r8d
  char v22; // al
  int v23; // ebx
  int v24; // eax
  char *v25; // rdx
  char v26; // cl
  int v27; // r9d
  int v28; // r8d
  char v29; // al
  int v30; // ebx
  int v31; // eax
  int v32; // [rsp+40h] [rbp-68h]
  __int64 v33; // [rsp+48h] [rbp-60h]
  __int64 v34; // [rsp+50h] [rbp-58h]
  unsigned int v35; // [rsp+B0h] [rbp+8h]
  int v36; // [rsp+B8h] [rbp+10h]

  v4 = *((_QWORD *)a1 + 2);
  v6 = *((_QWORD *)a1 + 1);
  v7 = a4;
  v8 = *((_DWORD *)a1 + 8);
  v34 = v6;
  v10 = *((_DWORD *)a2 + 5);
  v11 = *(const unsigned __int8 **)a2;
  v33 = v4;
  while ( v8 )
  {
    v12 = *((int *)a1 + 14);
    v13 = *((_DWORD *)a1 + 7);
    v32 = v8 - 1;
    v14 = *((_DWORD *)a1 + 12) & 7;
    v35 = *((_DWORD *)a2 + 7);
    v15 = (const unsigned __int8 *)(v6 + ((__int64)*((int *)a1 + 12) >> 3));
    v16 = (_BYTE *)(v4 + (v12 >> 3));
    v36 = *((_DWORD *)a1 + 14) & 7;
    if ( v14 != v36 )
    {
      BltLnkReadPat1(v7, v12 & 7, v15, v13, v14, v13);
      v15 = a4;
    }
    BltLnkReadPat1(a3, v12, v11, *((_DWORD *)a2 + 6), v35, v13);
    if ( *((_BYTE *)a2 + 36) )
    {
      *a3 |= -1 << (8 - v36);
      a3[(unsigned __int64)(unsigned int)(v13 + v36) >> 3] |= 255 >> ((v13 + v12) & 7);
      if ( v13 <= 0 )
        goto LABEL_30;
      v25 = (char *)(a3 - v16);
      while ( 2 )
      {
        v26 = v16[(_QWORD)v25];
        v27 = v12;
        v28 = v13;
        if ( !v26 )
        {
          v29 = *v15;
          goto LABEL_24;
        }
        if ( v26 != -1 )
        {
          v29 = *v16 & v26 | *v15 & ~v16[(_QWORD)v25];
LABEL_24:
          *v16 = v29;
        }
        ++v15;
        ++v16;
        v13 -= 8;
        v30 = v12 & 7;
        v31 = v30;
        if ( v30 )
          v13 = v30 + v28 - 8;
        LODWORD(v12) = 0;
        if ( !v31 )
          LODWORD(v12) = v27;
        if ( v13 <= 0 )
          goto LABEL_30;
        continue;
      }
    }
    if ( v13 > 0 )
    {
      v17 = (char *)(a3 - v16);
      v18 = v15 - v16;
      while ( 1 )
      {
        v19 = v16[(_QWORD)v17];
        v20 = v12;
        v21 = v13;
        if ( v19 == -1 )
          break;
        if ( v19 )
        {
          v22 = *v16 & ~v19 | v19 & v16[v18];
          goto LABEL_11;
        }
LABEL_12:
        ++v16;
        v13 -= 8;
        v23 = v12 & 7;
        v24 = v23;
        if ( v23 )
          v13 = v23 + v21 - 8;
        LODWORD(v12) = 0;
        if ( !v24 )
          LODWORD(v12) = v20;
        if ( v13 <= 0 )
          goto LABEL_30;
      }
      v22 = v16[v18];
LABEL_11:
      *v16 = v22;
      goto LABEL_12;
    }
LABEL_30:
    v4 = *((int *)a1 + 11) + v33;
    v6 = *((int *)a1 + 10) + v34;
    v33 = v4;
    v34 = v6;
    if ( *((int *)a1 + 9) <= 0 )
    {
      if ( v10 )
      {
        --v10;
        v11 += *((int *)a2 + 8);
      }
      else
      {
        v10 = *((_DWORD *)a2 + 4) - 1;
        v11 = (const unsigned __int8 *)(*((_QWORD *)a2 + 1) + *((_DWORD *)a2 + 8) * v10);
      }
    }
    else
    {
      ++v10;
      v11 += *((int *)a2 + 8);
      if ( v10 >= *((_DWORD *)a2 + 4) )
      {
        v11 = (const unsigned __int8 *)*((_QWORD *)a2 + 1);
        v10 = 0;
      }
    }
    v8 = v32;
    v7 = a4;
  }
}
